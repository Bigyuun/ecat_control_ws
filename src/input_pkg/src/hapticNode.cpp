#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <math.h>
#include <string.h>

// CKim - Socket Headers
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <fcntl.h>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <fstream>

#include <cmath> //Jkim

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "sensor_msgs/msg/joy.hpp"
#include "ecat_msgs/msg/haptic_cmd.hpp"   // CKim - Header for custom message

#include "hapticNode.hpp"

// DY
#include <vector>
#include <sstream>
#include <mutex>
// DY
#define TCP_BUFFER_SIZE 512

// DY
// setting mode : 0-non sine wave / 1-sine wave
#define VELOCITY_SINEWAVE_MODE 0

static int8_t g_kOperationType = kSlaveType;

// DY
using namespace TCPCommunication;

std::mutex tcp_readwrite_mutex;
std::mutex w_mutex, r_mutex;


using namespace std::chrono_literals;

// -------------------------------------------------------- //
// CKim - This ROS node reads HapticDevice command from
// network and publishes it
// -------------------------------------------------------- //


HapticNode::HapticNode(char * argv[]) : rclcpp::Node("HapticNode")
{
  // CKim - Set IP and Port
  // m_IP = argv[1];     m_Port = argv[2];

  // DY - set IP and Port as Server
  m_Port = "9800";
  // m_Port = argv[1];
  
  auto qos = rclcpp::QoS(
    // The "KEEP_LAST" history setting tells DDS to store a fixed-size buffer of values before they
    // are sent, to aid with recovery in the event of dropped messages.
    // "depth" specifies the size of this buffer.
    // In this example, we are optimizing for performance and limited resource usage (preventing
    // page faults), instead of reliability. Thus, we set the size of the history buffer to 1.
    rclcpp::KeepLast(1)
  );
  // From http://www.opendds.org/qosusages.html: "A RELIABLE setting can potentially block while
  // trying to send." Therefore set the policy to best effort to avoid blocking during execution.
  qos.best_effort();
  // CKim - Initialize publisher
  haptic_publisher_ = this->create_publisher<ecat_msgs::msg::HapticCmd>("HapticInput",qos);

  // JKim - Subscription
  slave_feedback_ = this->create_subscription<ecat_msgs::msg::DataReceived>("Slave_Feedback", qos,
                    std::bind(&HapticNode::HandleSlaveFeedbackCallbacks, this, std::placeholders::_1));

  // CKim - Launch thread that will constantly read socket and publish data
  future_ = exit_signal_.get_future();
  comm_thread_ = std::thread(&HapticNode::commThread, this);  
}

void HapticNode::HandleSlaveFeedbackCallbacks(const ecat_msgs::msg::DataReceived::SharedPtr msg)
  {
//      time_info_.GetTime();
      for(int i=0; i < NUM_OF_SLAVES ; i++){
        received_data_[i].actual_pos             =  msg->actual_pos[i];
        received_data_[i].actual_vel             =  msg->actual_vel[i];
        received_data_[i].status_word            =  msg->status_word[i];
        received_data_[i].left_limit_switch_val  =  msg->left_limit_switch_val;
        received_data_[i].right_limit_switch_val =  msg->right_limit_switch_val;
        received_data_[i].p_emergency_switch_val =  msg->emergency_switch_val;
        received_data_[i].com_status             =  msg->com_status;
    }  
  }

// Haptic Thread 3 start========================================
void HapticNode::commThread()
{

  // for testing sine wave position
  #if VELOCITY_SINEWAVE_MODE
  if (VELOCITY_SINEWAVE_MODE)
  {
    RCLCPP_WARN(get_logger(), "SINE WAVE TEST (NOT TCP/IP comm)");
    while (true)
    {
      static uint64_t sine_count_read = 0;
      for (int i = 0; i < NUM_OF_SLAVES; i++)
      {
        hapticMsg.array[i] = 800 * sin(sine_count_read * 0.001);
      }
      sine_count_read++;
      haptic_publisher_->publish(hapticMsg);
      if( (sine_count_read%10000) == 0)
      {
        std::cout << "--------- Read count : " << sine_count_read << "----------" << std::endl;
      }
      
    }
  }
  #endif

  RCLCPP_INFO(get_logger(), "Starting Haptic Node");
  
  RCLCPP_INFO(get_logger(), "TCP server initializing...");

  // create socket (TCP)
  std::cout << std::stoi(m_Port) << std::endl;
  std::cout << m_Port << std::endl;
  TCPServer Server = TCPServer(std::stoi(m_Port), TCP_BUFFER_SIZE);
  Server.initSocket();
  std::cout << Server.server_bind() << std::endl;
  Server.server_listen();
  Server.server_accept();

  std::future_status status;
  status = future_.wait_for(std::chrono::seconds(0));
  RCLCPP_INFO(get_logger(), "Entering communication loop!");
  static int count = 0;

  file_descriptor_ = Server.client_socket_;

  comm_write_thread_ = std::thread(&HapticNode::CommWriteThread, this, Server.client_socket_);
  comm_read_thread_ = std::thread(&HapticNode::CommReadThread, this, Server.client_socket_);
  std::cout << "fd : " << Server.client_socket_ << std::endl;

  while (true)
  {
    if(!TCP_life) {
      Server.client_close();
      Server.server_listen();
      Server.server_accept();
      TCP_life = true;
      file_descriptor_ = Server.client_socket_;
      std::cout << "fd : " << Server.client_socket_ << std::endl;
    }
  }

  // CKim - End communication
  RCLCPP_INFO(get_logger(), "Leaving communication loop!");

  Server.server_close();
  // close(client_socket);
  // close(server_socket);
  usleep(1000);
  return;
}

void HapticNode::CommWriteThread(int fd_client)
{ 
  std::cout << "writing Thread Start" << std::endl;

  static int count_write = 0;
  while(true)
  { 
    if(!TCP_life) {
      RCLCPP_WARN(get_logger(), "TCP disconnected");
      usleep(1000000);
    }
    // UR Protocol
    // int data_size = TCP_BUFFER_SIZE;
    int buf_size = 4;
    double timestamp = 0;
    double target_q[7] = {0};
    double target_qd[7] = {0};
    double target_qdd[7] = {0};
    double target_current[7] = {0};
    double target_moment[7] = {0};
    double actual_q[7] = {0};
    double actual_qd[7] = {0};
    double protocol_MIDAS[50] = {0};


    // -------------------------------------
    // Saving each data for making the protocol
    // -------------------------------------

    // Slave Position & Velocity
    if(g_kOperationType == kSlaveType)
    {
      actual_q[0] = received_data_[0].actual_pos* RATIO_CONVERSION_POS_SLAVE_1;
      actual_q[1] = received_data_[1].actual_pos* RATIO_CONVERSION_POS_SLAVE_2;
      actual_q[2] = received_data_[2].actual_pos* RATIO_CONVERSION_POS_SLAVE_3;
      actual_q[3] = received_data_[3].actual_pos* RATIO_CONVERSION_POS_SLAVE_4;
      actual_q[4] = received_data_[4].actual_pos* RATIO_CONVERSION_POS_SLAVE_5;
      actual_q[5] = received_data_[5].actual_pos* RATIO_CONVERSION_POS_SLAVE_6;
      actual_q[6] = received_data_[6].actual_pos* RATIO_CONVERSION_POS_SLAVE_7;

      actual_qd[0] = received_data_[0].actual_vel* RATIO_CONVERSION_VELOCITY_SLAVE_1;
      actual_qd[1] = received_data_[1].actual_vel* RATIO_CONVERSION_VELOCITY_SLAVE_2;
      actual_qd[2] = received_data_[2].actual_vel* RATIO_CONVERSION_VELOCITY_SLAVE_3;
      actual_qd[3] = received_data_[3].actual_vel* RATIO_CONVERSION_VELOCITY_SLAVE_4;
      actual_qd[4] = received_data_[4].actual_vel* RATIO_CONVERSION_VELOCITY_SLAVE_5;
      actual_qd[5] = received_data_[5].actual_vel* RATIO_CONVERSION_VELOCITY_SLAVE_6;
      actual_qd[6] = received_data_[6].actual_vel* RATIO_CONVERSION_VELOCITY_SLAVE_7;
    }
    
    
    // Master Position & Velocity
    if(g_kOperationType == kMasterType)
    {
      actual_q[0] = received_data_[0].actual_pos * RATIO_CONVERSION_POS_MASTER_1;
      actual_q[1] = received_data_[1].actual_pos * RATIO_CONVERSION_POS_MASTER_2;
      actual_q[2] = received_data_[2].actual_pos * RATIO_CONVERSION_POS_MASTER_3;
      actual_q[3] = received_data_[3].actual_pos * RATIO_CONVERSION_POS_MASTER_4;
      actual_q[4] = received_data_[4].actual_pos * RATIO_CONVERSION_POS_MASTER_5;
      actual_q[5] = received_data_[5].actual_pos * RATIO_CONVERSION_POS_MASTER_6;
      actual_q[6] = received_data_[6].actual_pos * RATIO_CONVERSION_POS_MASTER_7;

      actual_qd[0] = received_data_[0].actual_vel * RATIO_CONVERSION_VELOCITY_MASTER_1;
      actual_qd[1] = received_data_[1].actual_vel * RATIO_CONVERSION_VELOCITY_MASTER_2;
      actual_qd[2] = received_data_[2].actual_vel * RATIO_CONVERSION_VELOCITY_MASTER_3;
      actual_qd[3] = received_data_[3].actual_vel * RATIO_CONVERSION_VELOCITY_MASTER_4;
      actual_qd[4] = received_data_[4].actual_vel * RATIO_CONVERSION_VELOCITY_MASTER_5;
      actual_qd[5] = received_data_[5].actual_vel * RATIO_CONVERSION_VELOCITY_MASTER_6;
      actual_qd[6] = received_data_[6].actual_vel * RATIO_CONVERSION_VELOCITY_MASTER_7;
    }


    // for testing sine wave position
    if(VELOCITY_SINEWAVE_MODE)
    {
      static uint64_t sine_count = 0;
      for (int i = 0; i < 7; i++)
      {
        actual_q[i] = 200 * sin(sine_count * 0.001);
      }
      sine_count++;

      // Do not move Joint #0,1,2
      actual_q[0]=0;
      actual_q[1]=0;
      actual_q[2]=0;
    }

    // make a fully protocol
    for(int i=0; i<7; i++)
    {
      protocol_MIDAS[i+36] = actual_q[i];
      protocol_MIDAS[i+43] = actual_qd[i];
    }

    // DY
    // ** Caution : "htonl & htond" are functions for changing "Big endian & Little endian"
    // Each OS (even if CPU) define the type of endian which their own
    buf_size = htonl(buf_size);
    for(int i=0; i<50; i++)
    {
      protocol_MIDAS[i] = htond(protocol_MIDAS[i]);
    }
    
    char write_msg[TCP_BUFFER_SIZE] = {};
    memcpy(write_msg                    , &buf_size, sizeof(int));
    memcpy(write_msg + sizeof(int)      , &protocol_MIDAS, 50*sizeof(double));

    int send_buf_size_ = write(this->file_descriptor_, &write_msg, TCP_BUFFER_SIZE);

    // static char pcount = 0;
    // if(pcount ==5){
    //   std::cout << "[send buf size] : " << send_buf_size_ << "/ [send msg] : " << write_msg << std::endl;
    //   std::cout << "--------- Write count : " << count_write++ << "----------" << std::endl;
    //   pcount =0;
    // }
    // pcount ++;

    usleep(2000);
  }
}


void HapticNode::CommReadThread(int fd_client)
{
  std::cout << "Reading Thread Start" << std::endl;
  static int count_read = 0;

  while(true)
  {
    if(!TCP_life) continue;

    char msg[TCP_BUFFER_SIZE]={0};
    int read_msg_size_ = read(this->file_descriptor_, msg, TCP_BUFFER_SIZE);
    msg[read_msg_size_] = '\0';

    if(read_msg_size_ == 0)
    {
      hapticMsg.array[0] = 0;
      hapticMsg.array[1] = 0;
      hapticMsg.array[2] = 0;
      hapticMsg.array[3] = 0;
      hapticMsg.array[4] = 0;
      hapticMsg.array[5] = 0;
      hapticMsg.array[6] = 0;

      TCP_life = false;
      RCLCPP_WARN(get_logger(), "EOF from Client... try to reconnect");

    }

    std::vector<std::string> motor_val;
    std::cout << read_msg_size_ << "/" << msg << std::endl;
    motor_val = Parsing(msg, read_msg_size_);

    // read error
    if(motor_val[0] == "IndexError" || motor_val[0] == "DeliError")
    {
      // usleep(1000000);
      // count_read++;
      // RCLCPP_INFO(get_logger(), "count = %d", count_read);
      continue;
    }

    double val[g_kNumberOfServoDrivers] = {0};
    for(int i=0; i<g_kNumberOfServoDrivers; i++)
    {
      val[i] = std::stod(motor_val[i]);
      std::cout << "val" << i << ":" << (float)val[i] << "  " << std::endl;
    }

    if(g_kOperationType == kSlaveType)
    {
    // For Publisher - Velocity Mode - Slave
    hapticMsg.array[0] = val[0]* RATIO_CONVERSION_MOTORDRIVER_SLAVE_1;
    hapticMsg.array[1] = val[1]* RATIO_CONVERSION_MOTORDRIVER_SLAVE_2;
    hapticMsg.array[2] = val[2]* RATIO_CONVERSION_MOTORDRIVER_SLAVE_3;
    hapticMsg.array[3] = val[3]* RATIO_CONVERSION_MOTORDRIVER_SLAVE_4;
    hapticMsg.array[4] = val[4]* RATIO_CONVERSION_MOTORDRIVER_SLAVE_5;
    hapticMsg.array[5] = val[5]* RATIO_CONVERSION_MOTORDRIVER_SLAVE_6;
    hapticMsg.array[6] = val[6]* RATIO_CONVERSION_MOTORDRIVER_SLAVE_7;
    // hapticMsg.array[0] = 0;
    // hapticMsg.array[1] = 0;
    // hapticMsg.array[2] = 0;
    // hapticMsg.array[3] = 0;
    // hapticMsg.array[4] = 0;
    // hapticMsg.array[5] = 0;
    // hapticMsg.array[6] = 0;
    }

    if(g_kOperationType == kMasterType)
    {
    // For Publisher - Torque Mode - Master
    hapticMsg.array[0] = val[0]* RATIO_CONVERSION_MOTORDRIVER_MASTER_1;
    hapticMsg.array[1] = val[1]* RATIO_CONVERSION_MOTORDRIVER_MASTER_2;
    hapticMsg.array[2] = val[2]* RATIO_CONVERSION_MOTORDRIVER_MASTER_3;
    hapticMsg.array[3] = val[3]* RATIO_CONVERSION_MOTORDRIVER_MASTER_4;
    hapticMsg.array[4] = val[4]* RATIO_CONVERSION_MOTORDRIVER_MASTER_5;
    hapticMsg.array[5] = val[5]* RATIO_CONVERSION_MOTORDRIVER_MASTER_6;
    hapticMsg.array[6] = val[6]* RATIO_CONVERSION_MOTORDRIVER_MASTER_7;
    // hapticMsg.array[0] = 0;
    // hapticMsg.array[1] = 0;
    // hapticMsg.array[2] = 0;
    // hapticMsg.array[3] = 0;
    // hapticMsg.array[4] = 0;
    // hapticMsg.array[5] = 0;
    // hapticMsg.array[6] = 0;
    }

    usleep(100);
  }
}

// std::string DoubleToIntByte(double *data)
void HapticNode::DoubleToIntByte(char *buf, double data)
{
    //for Double value convert to Int Byte
    union DToIB
    {
        double data;
        // unsigned char data_char[sizeof(double)];
        char data_char[sizeof(double)];
    };

    DToIB cnvt_double;

    char buf_data[8];
    cnvt_double.data = data;
    //std::cout << sizeof(cnvt_double.data_char) << " " << std::endl;
    for(int i=0; i<sizeof(cnvt_double.data_char); i++)
    {
      // buf[i] = (int)cnvt_double.data_char[i];
      buf[i] = cnvt_double.data_char[i];
      //std::cout << (int)buf[i] << " " << std::endl;
    }
}

double HapticNode::htond(double &x)
{
  double y;
  int *ptr_y = (int*)&y;
  
  int *ptr_x = (int *) &x;
  // int Holding_Buffer;
  // Double_Overlay = (int *) &x;
  // Holding_Buffer = Double_Overlay [0];
  // Double_Overlay [0] = htonl (Double_Overlay [1]);
  // Double_Overlay [1] = htonl (Holding_Buffer);
  
  ptr_y[0] = htonl (ptr_x[1]);
  ptr_y[1] = htonl (ptr_x[0]);
  
  //std::cout << "y : " << y << "x : " << x << std::endl;
  return y;
}

std::vector<std::string> HapticNode::Parsing(char read_msg[TCP_BUFFER_SIZE],  int read_msg_size)
{
  std::string msg_str = read_msg;

  // -------------- < Parsing Start > --------------
  // parsing part
  std::string delim_mode = "";
  if (g_kOperationMode == kProfileVelocity)
    delim_mode = "speedj";
  if (g_kOperationMode == kCSTorque)
    delim_mode = "torquej";

  std::string delim_start = "(";
  std::string delim_substart = "[";
  std::string delim_end = ")";
  std::string delim_subend = "]";
  char delim_ = ',';

  std::string det_str;
  std::string motor_values;
  std::vector<std::string> motor_val;
  int index_read_msg[5] = {0};

  index_read_msg[0] = msg_str.find(delim_mode);
  index_read_msg[1] = msg_str.find(delim_start);
  index_read_msg[2] = msg_str.find(delim_substart);
  index_read_msg[3] = msg_str.find(delim_end);
  index_read_msg[4] = msg_str.find(delim_subend);
  
  // for(int i=0; i<g_kNumberOfServoDrivers; i++)
  // {
  //   std::cout << index_read_msg[i] << "/";
  // }
  // std::cout << std::endl;

  // DY
  // if there is no protocol characters, loop restart
  static bool index_err_flag = true;
  for (int i = 0; i < g_kNumberOfServoDrivers; i++)
  {
    if (index_read_msg[i] < 0)
    {
      index_err_flag = false;
      break;
    }
    else
      index_err_flag = true;
  }

  if (index_err_flag == false)
  {
    motor_val.push_back("IndexError");
    return motor_val;
  }

  det_str = msg_str.substr(index_read_msg[0], delim_mode.length());
  if (det_str != delim_mode)
  {
    std::cout << " delimiter error" << std::endl;
    motor_val.push_back("DeliError");
    return motor_val;
  }
  det_str = msg_str.substr(index_read_msg[1], delim_start.length());
  if (det_str != delim_start)
  {
    std::cout << " delimiter error" << std::endl;
    motor_val.push_back("DeliError");
    return motor_val;
  }
  det_str = msg_str.substr(index_read_msg[2], delim_substart.length());
  if (det_str != delim_substart)
  {
    std::cout << " delimiter error" << std::endl;
    motor_val.push_back("DeliError");
    return motor_val;
  }
  det_str = msg_str.substr(index_read_msg[3], delim_end.length());
  if (det_str != delim_end)
  {
    std::cout << " delimiter error" << std::endl;
    motor_val.push_back("DeliError");
    return motor_val;
  }
  det_str = msg_str.substr(index_read_msg[4], delim_subend.length());
  if (det_str != delim_subend)
  {
    std::cout << " delimiter error" << std::endl;
    motor_val.push_back("DeliError");
    return motor_val;
  }

  // if index or delimiter error doesn't occur
  // std::cout << det_str << std::endl;

  motor_values = msg_str.substr(index_read_msg[2] + 1, (index_read_msg[4] - index_read_msg[2] - 1));
  motor_val = Split(motor_values, delim_);

  return motor_val;
}

std::vector<std::string> HapticNode::Split(std::string input, char delimiter)
{
  std::vector<std::string> result;
  std::stringstream ss(input);
  std::string tmp;

  while(getline(ss, tmp, delimiter)) result.push_back(tmp);

  return result;
}

// Haptic Thread 3 end ========================================



























// void HapticNode::commThread()
// {
//   RCLCPP_INFO(get_logger(), "Starting Haptic Node");

//   // // CKim - Initialize socket and timeout
//   // int sock = socket(PF_INET, SOCK_STREAM, 0);
//   // fcntl(sock, F_SETFL, O_NONBLOCK);
//   // struct timeval tv;    tv.tv_sec = 10;     tv.tv_usec = 0;
//   // fd_set fdset;         FD_ZERO(&fdset);    FD_SET(sock, &fdset);

//   // // CKim - Set up address
//   // struct sockaddr_in server_addr;
// 	// memset(&server_addr, 0, sizeof(server_addr)); //Initialize to zero
//   // server_addr.sin_family = AF_INET;
//   // server_addr.sin_addr.s_addr = inet_addr(m_IP.c_str());
//   // server_addr.sin_port = htons(atoi(m_Port.c_str()));

//   // // CKim - Connect. socket is set to be non blocking, use select to wait for result
//   // // and return upon error
//   // RCLCPP_INFO(get_logger(),"Connecting to server at %s through port %s\n",m_IP.c_str(),m_Port.c_str());
//   // connect(sock, (struct sockaddr*)&server_addr, sizeof(server_addr));
//   // if(select(sock+1, NULL, &fdset, NULL, &tv)==1)
//   // {
//   //   int so_error;     socklen_t len = sizeof(so_error);
//   //   getsockopt(sock, SOL_SOCKET, SO_ERROR, &so_error, &len);
//   //   if (so_error == 0) 
//   //   {   
//   //     RCLCPP_INFO(get_logger(),"Connected to Server!");  
//   //   }
//   //   else
//   //   {
//   //       RCLCPP_INFO(get_logger(),"Error during connection! Press Ctrl+C to terminate."); 
//   //       close(sock);
//   //       return;
//   //   }
//   // }
//   // else  
//   // {
//   //   RCLCPP_INFO(get_logger(),"Timeout in select()! Press Ctrl+C to terminate."); 
//   //   close(sock);
//   //   return;
//   // }

//   // // CKim - Read from socket and publish. Socket must be set back to blocking mode
//   // // for the code below to work
//   // fcntl(sock, F_SETFL, fcntl(sock, F_GETFL) & ~O_NONBLOCK);
//   std::future_status status;
//   status = future_.wait_for(std::chrono::seconds(0));
//   RCLCPP_INFO(get_logger(),"Entering communication loop!");

//   int timeTest = 0;

//   while(status == std::future_status::timeout)
//   {
//     // // ----------------------------------------------------------- //
//     // // CKim - This code is using no protocol. Just 7 doubles
//     // // ----------------------------------------------------------- //
//     // // CKim - Allocate memory for 7 doubles
//     // int leng = 7*sizeof(double) ;//+ 2*sizeof(int);
//     // char* str2 = new char[leng]; //길이 만큼 배열 동적할당
//     // if (str2 == (char *) 0) {
//     //   RCLCPP_INFO(get_logger(),"Memory error!");
//     //   break;
//     // }
//   	// memset(str2, 0, leng);

//     // // CKim - Read and check the size of data received
//     // int real_recv_len, real_recv_byte;
// 		// real_recv_len = 0;
// 		// real_recv_byte = 0;

// 		// while (real_recv_len < leng) {
// 		// 	real_recv_byte = read(sock, &str2[real_recv_len],
// 		// 			leng - real_recv_len);
// 		// 	real_recv_len += real_recv_byte;
// 		// }

//     // // CKim - Convert received bytes to doubles and ints
//  		// double* val = (double*) str2;
//     // //int* btn = (int*) (str2+6*sizeof(double));

//     // // CKim - Fill the message and publish data
// 		// // First three element X, Y, Z increment. In mm
// 		// // X: -/+ Left Right 		// Y: -/+ Down Up 		// Z: -/+ In / Out
// 		// // Last three element Roll (Z) Pitch (X) Yaw (Y). In degree
//     // for(int i=0; i<3; i++)	{
// 		// 	hapticMsg.array[i] = val[i];			}
// 		// for(int i=3; i<6; i++)	{
//     //         hapticMsg.array[i] = val[i];  }//*2000.0;			}
// 		// hapticMsg.array[6] = val[6];
// 		// hapticMsg.btn[0] = 0;//btn[1];
//     // hapticMsg.btn[1] = 0;//btn[1];

//     // hapticMsg.array[0] = 200*sin(timeTest*0.0002);
//     // hapticMsg.array[1] = 200*sin(timeTest*0.0002);
//     // hapticMsg.array[2] = 200*sin(timeTest*0.0002);
//     // hapticMsg.array[3] = 200*sin(timeTest*0.0002);
//     // hapticMsg.array[4] = 200*sin(timeTest*0.0002);
//     // hapticMsg.array[5] = 200*sin(timeTest*0.0002);
//     // hapticMsg.array[6] = 200*sin(timeTest*0.0002);

//     hapticMsg.array[0] = 0;
//     hapticMsg.array[1] = 0;
//     hapticMsg.array[2] = 0;
//     hapticMsg.array[3] = 0;
//     hapticMsg.array[4] = 0;
//     hapticMsg.array[5] = 0;
//     hapticMsg.array[6] = 0;
    
//     haptic_publisher_->publish(hapticMsg);

//     status = future_.wait_for(std::chrono::seconds(0));

//     timeTest++;
//   }

//   // CKim - End communication
//   RCLCPP_INFO(get_logger(),"Leaving communication loop!");
//   // close(sock);
//   return;
// }

HapticNode::~HapticNode()
{
  // CKim - Trigger exit signal to stop the thread
  exit_signal_.set_value();
  comm_thread_.join();
  comm_read_thread_.join();
  comm_thread_.join();
}

int main(int argc, char * argv[])
{
  // CKim - Node is launched with argument specifying IP and port
  // if(argc<3)
  // {
  //   printf("Usage : %s <IP> <port> \n", "ros2 run input_pkg hapticNode");
  //   exit(1);
  // }

  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<HapticNode>(argv));
  printf("Spinning ended\n");
  rclcpp::shutdown();
  // for(int i=1; i<3; i++)  {   dxl.DisableTorque(i);  }
  // dxl.Disconnect();
  return 0;
}


// -------------------------------

// -------------------------------------------------------- //
// CKim - This ROS node reads HapticDevice command from
// network and publishes it
// -------------------------------------------------------- //

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>
// #include <arpa/inet.h>
// #include <sys/socket.h>
// #include <sys/types.h>
// #include <netinet/in.h>
// #include <string>
// #include <time.h>
// #include "ros/ros.h" // ROS 기본 헤더 파일
// #include <SkillMate/HapticCommand.h>        // CKim - Automatically generated message Header

// #include <iostream>
// #include <fstream>

// using namespace std;

// int main(int argc, char* argv[])
// {
// 	int sock;
// 	struct sockaddr_in server_addr;

//     if(argc<3)
// 	{
//         printf("Usage : %s <IP> <port> \n", argv[3]);
// 		exit(1);
// 	 }

//     // Client Socket
// 	sock = socket(PF_INET, SOCK_STREAM, 0);

// 	//=======
//     ros::init(argc, argv, "HapticCmdPublisher");    //노드 초기화
//     ros::NodeHandle nh; //노드 핸들 선언

//     ros::Publisher haptic_pub =	nh.advertise<SkillMate::HapticCommand>("HapticCmd", 100);
//     ROS_INFO("Starting Haptic Node");
//     //====

// 	// Connect to address
// 	memset(&server_addr, 0, sizeof(server_addr));//서버 주소 초기화
//     server_addr.sin_family = AF_INET;
//     server_addr.sin_addr.s_addr = inet_addr(argv[1]);
//     server_addr.sin_port = htons(atoi(argv[2]));

//     ROS_INFO("Connecting to Server!\n");
// 	if(connect(sock, (struct sockaddr*)&server_addr, sizeof(server_addr))==-1)
// 	{
// 		printf("connect() error\n");
// 		close(sock);
// 		exit(1);
// 	}
//     ROS_INFO("Connected to Server!\n");

// 	//ros::Rate loop_rate(10);
// 	//ros::WallTime currTime = ros::WallTime::now();
// 	while(ros::ok())
// 	{
// 		// ----------------------------------------------------------- //
// 		// CKim - This code is using no protocol. Just 6 doubles
// 		// ----------------------------------------------------------- //
// 		int leng, real_recv_len, real_recv_byte;

//         leng = 6*sizeof(double) + 2*sizeof(int);
// 		char* str2 = new char[leng]; //길이 만큼 배열 동적할당

// 		if (str2 == (char *) 0) {
// 			printf("memory error!\n");
// 			exit(1);
// 		}

// 		memset(str2, 0, leng);
// 		real_recv_len = 0;
// 		real_recv_byte = 0;

// 		//받는 방법 2 : 받는 바이트 확인하며 받기
// 		while (real_recv_len < leng) {
// 			real_recv_byte = read(sock, &str2[real_recv_len],
// 					leng - real_recv_len);
// 			real_recv_len += real_recv_byte;
// 		}

// 		double* val = (double*) str2;
//         int* btn = (int*) (str2+6*sizeof(double));

//         SkillMate::HapticCommand msg;

// 		// CKim - First three element X, Y, Z increment. In mm
// 		// X: -/+ Left Right
// 		// Y: -/+ Down Up
// 		// Z: -/+ In / Out
// 		for(int i=0; i<3; i++)	{
// 			msg.array[i] = val[i];			}

// 		// CKim - Last three element Roll (Z) Pitch (X) Yaw (Y). In degree
// 		for(int i=3; i<6; i++)	{
//             msg.array[i] = val[i];  }//*2000.0;			}
// 		msg.btn[0] = btn[0];
// 		msg.btn[1] = btn[1];

// 		// ----------------------------------------------------------- //

// 		// 메시지를 퍼블리시 한다.
// 		haptic_pub.publish(msg);

// 		//loop_rate.sleep();
// 	}
// 	close(sock);
// 	return 0;
// }

// © 2022 GitHub, Inc.
// Terms
