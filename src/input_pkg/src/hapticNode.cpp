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

// DY
#include <vector>
#include <sstream>
#include <mutex>

#include <cmath> //Jkim

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "sensor_msgs/msg/joy.hpp"
#include "ecat_msgs/msg/haptic_cmd.hpp"   // CKim - Header for custom message

#include "hapticNode.hpp"


#define TCP_BUFFER_SIZE 512
#define NumOfDrivers  7

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
  m_Port = "9800";
  
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

  

  
  // RCLCPP_INFO(get_logger(),"%d", received_data_[0].actual_pos);
  
  }











// Haptic Thread 3 start========================================

void HapticNode::commThread()
{
  RCLCPP_INFO(get_logger(), "Starting Haptic Node");

  // create socket (TCP)
  int server_socket;
  server_socket = socket(PF_INET, SOCK_STREAM, 0); // create socket by using 'socket()'
  if (server_socket == -1)
    printf("socket() error");
  else
  {
    printf("socket() init OK\n");
  }

  // initialize the address info
  struct sockaddr_in server_addr;
  memset(&server_addr, 0, sizeof(server_addr));

  // setting server address info (IP, Port)
  server_addr.sin_family = AF_INET;
  std::string serv_addr = "127.0.0.1 (local)";
  server_addr.sin_addr.s_addr = htonl(INADDR_ANY); // INADDR_ANY는 all client ip enable
  // server_addr.sin_addr.s_addr = ntohl(INADDR_ANY); // INADDR_ANY는 all client ip enable
  // std::string serv_addr = "192.168.5.1";
  //server_addr.sin_addr.s_addr = inet_addr(serv_addr.c_str()); 
  server_addr.sin_port = htons(atoi(m_Port.c_str())); // 프로그램당 포트 1개 사용
  // server_addr.sin_port = ntohs(atoi(m_Port.c_str())); // 프로그램당 포트 1개 사용

  std::cout << "====== server INFO ======" << std::endl;
  std::cout << "server IP : " << serv_addr << std::endl;
  std::cout << server_addr.sin_addr.s_addr << std::endl;
  std::cout << "PORT NUM : " << m_Port << std::endl;
  std::cout << server_addr.sin_port << std::endl;
  std::cout << "=========================" << std::endl;

  // bind() : allocate the IP address & PORT number
  // 소켓 위에서 생성한 주소 정보를 할당.
  if (bind(server_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) == -1)
  {
    printf("bind() error");
  }
  else
  {
    printf("bind() OK\n");
  }
  // listen() : server socket can be ready state of connection
  // 클라이언트가 연결요청이 가능하도록 5크기의 대기실 생성
  if (listen(server_socket, 5) == -1)
  {
    printf("listen() error");
  }
  else
  {
    printf("listen() OK\n");
  }

  // 클라이언트 소켓 생성
  int client_socket;
  struct sockaddr_in client_addr;
  socklen_t client_addr_size;

  // accept() : allow of connection
  // if accept() funcion
  // 실제 데이터를 보낼 수 있는 소켓을 생성하는 함수임.
  client_addr_size = sizeof(client_addr);
  client_socket = accept(server_socket, (struct sockaddr *)&client_addr, &client_addr_size);
  if (client_socket == -1)
  {
    printf("accept() error");
  }
  else
  {
    printf("accept() OK\n");
  }

  // char message[] = "Connected OK (from Server)";
  // write() : transfering data. There is a connection request when write() function has been called(implemented)
  //write(client_socket, message, sizeof(message));

  std::future_status status;
  status = future_.wait_for(std::chrono::seconds(0));
  RCLCPP_INFO(get_logger(), "Entering communication loop!");
  static int count = 0;

  // Non-Blocking Mode
  //int flag = fcntl(client_socket, F_GETFL, 0);
  //fcntl(client_socket, F_SETFL, flag | O_NONBLOCK);

  comm_write_thread_ = std::thread(&HapticNode::commWriteThread, this, client_socket);
  comm_read_thread_ = std::thread(&HapticNode::commReadThread, this, client_socket);

  while (true)
  {
    
    //std::cout << "---------- count " << count++ << " ----------" <<std::endl;
    //status = future_.wait_for(std::chrono::seconds(0));
  }

  // CKim - End communication
  RCLCPP_INFO(get_logger(), "Leaving communication loop!");
  close(client_socket);
  close(server_socket);
  usleep(1000);
  return;
}

void HapticNode::commWriteThread(int fd_client)
{ 
  std::cout << "writing Thread Start" << std::endl;

  static int qd_count = 0;
  static int count_write = 0;
  while(1)
  {

    int data_size = TCP_BUFFER_SIZE;

    // UR Protocol
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


    // Slave
    // actual_q[0] = received_data_[0].actual_pos*1.03999e-05*0.25;
    // actual_q[1] = received_data_[1].actual_pos*1.03999e-05*0.25 * (-1.0);
    // actual_q[2] = received_data_[2].actual_pos*0.000500801*0.25;
    // actual_q[3] = received_data_[3].actual_pos*9.29685e-05*0.25;
    // actual_q[4] = received_data_[4].actual_pos*9.29685e-05*0.25;
    // actual_q[5] = received_data_[5].actual_pos*9.29685e-05*0.25;
    // actual_q[6] = received_data_[6].actual_pos*9.29685e-05*0.25;

    // actual_qd[0] = received_data_[0].actual_vel*0.000177;
    // actual_qd[1] = received_data_[1].actual_vel*0.000177 * (-1.0);
    // actual_qd[2] = received_data_[2].actual_vel*0.008547;
    // actual_qd[3] = received_data_[3].actual_vel*0.001587;
    // actual_qd[4] = received_data_[4].actual_vel*0.001587;
    // actual_qd[5] = received_data_[5].actual_vel*0.001587;
    // actual_qd[6] = received_data_[6].actual_vel*0.001587;
    
    // Master
    actual_q[0] = received_data_[0].actual_pos*0.001055022*0.25 * (-1.0);
    actual_q[1] = received_data_[1].actual_pos*0.000682806*0.25 * (-1.0);
    actual_q[2] = received_data_[2].actual_pos*0.000682806*0.25;
    actual_q[3] = received_data_[3].actual_pos*0.000292187*0.5*0.25;
    actual_q[4] = received_data_[4].actual_pos*0.000292187*0.5*0.25;
    actual_q[5] = received_data_[5].actual_pos*0.000292187*0.5*0.25;
    actual_q[6] = received_data_[6].actual_pos*0.000292187*0.5*0.25;

    actual_qd[0] = received_data_[0].actual_vel*0.008792*(-1.0);
    actual_qd[1] = received_data_[1].actual_vel*0.00569*(-1.0);
    actual_qd[2] = received_data_[2].actual_vel*0.00569;
    actual_qd[3] = received_data_[3].actual_vel*0.004987*0.5;
    actual_qd[4] = received_data_[4].actual_vel*0.004987*0.5;
    actual_qd[5] = received_data_[5].actual_vel*0.004987*0.5;
    actual_qd[6] = received_data_[6].actual_vel*0.004987*0.5;
    
    


    // for testing sine wave position
    // for(int i=0; i<7; i++)
    // {
    //   actual_q[i] = 100*sin(qd_count*0.001);
    // }
    // qd_count++;

    for(int i=0; i<7; i++)
    {
      protocol_MIDAS[i+36] = actual_q[i];
      protocol_MIDAS[i+43] = actual_qd[i];
    }


    buf_size = htonl(buf_size);
    for(int i=0; i<50; i++)
    {
      protocol_MIDAS[i] = htond(protocol_MIDAS[i]);
    }

    char write_msg[TCP_BUFFER_SIZE] = {};
    memcpy(write_msg                    , &buf_size, sizeof(int));
    memcpy(write_msg + sizeof(int)      , &protocol_MIDAS, 50*sizeof(double));

    int send_buf_size_ = write(fd_client, &write_msg, TCP_BUFFER_SIZE);
    std::cout << "[send buf size] : " << send_buf_size_ << "/ [send msg] : " << write_msg << std::endl;
    for(int i=0; i<7; i++)
    {
      std::cout << actual_q[i] << " / ";
    }
    std::cout << "" << std::endl;
    std::cout << "--------- Write count : " << count_write++ << "----------" << std::endl;
    // std::cout << "hapticMsg.string : " << hapticMsg.string << std::endl;
    
    
    
    // check the subscriber
    for(int i=0; i<NumOfDrivers; i++)
    {
      // std::cout << "subscriber" << i << ":" << received_data_[i].actual_pos << std::endl;
    }
    //----------------------------------------------------------------------
    usleep(2000);
  }
}


void HapticNode::commReadThread(int fd_client)
{
  std::cout << "Reading Thread Start" << std::endl;
  static int count_read = 0;
  while(1)
  {
    char msg[TCP_BUFFER_SIZE]={0};

    //tcp_readwrite_mutex.lock();
    //std::scoped_lock lock(r_mutex, w_mutex);
    int read_msg_size_ = read(fd_client, msg, TCP_BUFFER_SIZE);
    msg[read_msg_size_] = '\0';
    //tcp_readwrite_mutex.unlock();

    std::string msg_str = msg;
    std::cout << "[read_msg_size] : " << read_msg_size_ << " / [read msg] : " << msg_str << std::endl;
    std::cout << "--------- Read count : " << count_read++ << "----------" << std::endl;

    // -------------- < Parsing Start > --------------
    // parsing part
    // 'Mode selection code' will be modified...
    // std::string delim_mode = "speedj";
    std::string delim_mode = "torquej";
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
    std::cout << " index is : ";
    for(int i=0; i<5; i++)
    {
      std::cout << index_read_msg[i] << " ";
    }
    std::cout << "" << std::endl;

    // DY
    // if there is no protocol characters, loop restart
    static bool index_err_flag = true;
    for (int i = 0; i < NumOfDrivers; i++)
    {
      if (index_read_msg[i] < 0)
      {
        index_err_flag = false;
        std::cout << "index err : -1" << std::endl;
        break;
      }
      else
        index_err_flag = true;
    }
    if (index_err_flag == false) continue;

    det_str = msg_str.substr(index_read_msg[0], delim_mode.length());
    if(det_str != delim_mode) {
      std::cout << " delimiter error" << std::endl;
      continue;
    }
    det_str = msg_str.substr(index_read_msg[1], delim_start.length());
    if(det_str != delim_start) {
      std::cout << " delimiter error" << std::endl;
      continue;
    }
    det_str = msg_str.substr(index_read_msg[2], delim_substart.length());
    if(det_str != delim_substart){
      std::cout << " delimiter error" << std::endl;
      continue;
    }
    det_str = msg_str.substr(index_read_msg[3], delim_end.length());
    if(det_str != delim_end){
      std::cout << " delimiter error" << std::endl;
      continue;
    }
    det_str = msg_str.substr(index_read_msg[4], delim_subend.length());
    if(det_str != delim_subend){
      std::cout << " delimiter error" << std::endl;
      continue;
    }
    std::cout << det_str << std::endl;



    motor_values = msg_str.substr(index_read_msg[2]+1, (index_read_msg[4]-index_read_msg[2]-1));
    motor_val = split(motor_values, delim_);
    // show result
    std::cout <<  "motor values : " << std::endl;
    for(int i=0; i<motor_val.size(); i++)
    {
      std::cout << motor_val[i] << " / ";
    }
    std::cout << " " << std::endl;

    double val[NumOfDrivers] = {0};
    for(int i=0; i<NumOfDrivers; i++)
    {
      val[i] = std::stod(motor_val[i]);
      std::cout << "val" << i << ":" << (float)val[i] << "  " << std::endl;

      
    }

    // For Publisher - Velocity Mode - Slave
    // hapticMsg.array[0] = val[0]*5634.085;
    // hapticMsg.array[1] = (-1)*val[1]*5634.085;
    // hapticMsg.array[2] = val[2]*117;
    // hapticMsg.array[3] = val[3]*630.2536;
    // hapticMsg.array[4] = val[4]*630.2536;
    // hapticMsg.array[5] = val[5]*630.2536;
    // hapticMsg.array[6] = val[6]*630.2536;
    // hapticMsg.array[0] = 0;
    // hapticMsg.array[1] = 0;
    // hapticMsg.array[2] = 0;
    // hapticMsg.array[3] = 0;
    // hapticMsg.array[4] = 0;
    // hapticMsg.array[5] = 0;
    // hapticMsg.array[6] = 0;


    // For Publisher - Torque Mode - Master
    hapticMsg.array[0] = (-1.0)*val[0]*0.000183559;
    hapticMsg.array[1] = (-1.0)*val[1]*0.000118798;
    hapticMsg.array[2] = val[2]*0.000118798;
    hapticMsg.array[3] = val[3]*0.002978052*0.5;
    hapticMsg.array[4] = val[4]*0.002978052*0.5;
    hapticMsg.array[5] = val[5]*0.002978052*0.5;
    hapticMsg.array[6] = val[6]*0.002978052*0.5;

    // hapticMsg.array[0] = 0;
    // hapticMsg.array[1] = 0;
    // hapticMsg.array[2] = 0;
    // hapticMsg.array[3] = 0;
    // hapticMsg.array[4] = 0;
    // hapticMsg.array[5] = 0;
    // hapticMsg.array[6] = 0;

    // -------------- < Parsing End > --------------


    // if(index_read_msg[0] != std::string::npos) msg_str.erase(0,index_read_msg[0]);
    haptic_publisher_->publish(hapticMsg);
    for(int i=0; i<NumOfDrivers; i++)
    {
      // std::cout << "hapticMsg.array" << i << ":" << hapticMsg.array[i] << std::endl;
    }
    
    // std::system("clear");
    
    // std::cout << "hapticMsg.string : " << hapticMsg.string << std::endl;
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

std::vector<std::string> HapticNode::split(std::string input, char delimiter)
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
