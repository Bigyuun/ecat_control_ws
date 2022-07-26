// ---------------------------------------------------------------
// Ckim - Haptic Device Node (client) for ROS2
// Connects to haptic device PC (master) by TCP/IP
// reads incoming data and publishes HapticCmd
// Based on ROS2 joystick node code at
// https://github.com/ros-drivers/joystick_drivers/tree/ros2/joy
// ---------------------------------------------------------------

#ifndef HAPTICNODE
#define HAPTICNODE

// CKim - SDL = Simple DirectMedia Layer is cross-platform development library designed 
// to provide low level access to audio, keyboard, mouse, joystick, and graphics hardware via
// OpenGL and Direct3D.  Used for joystickinput processing here
#include <SDL2/SDL.h>

// CKim - C++  headers
#include <future>
#include <memory>
#include <string>
#include <thread>

#include <rclcpp/rclcpp.hpp>
#include "ecat_msgs/msg/haptic_cmd.hpp"  // CKim - Header for custom message

// Message file headers, -custom and built-in-
#include "sensor_msgs/msg/joy.hpp"
#include "std_msgs/msg/u_int8.hpp"
#include "ecat_msgs/msg/data_received.hpp"
#include "ecat_msgs/msg/data_sent.hpp"

// DY - for g_kNumberOfServoDrivers / TCP server
#include "ecat_globals.hpp"
#include "TCPcomm.hpp"

/** 
 * @brief DY
 *        remark this structure(RecievedData) 
 *        because same name of structure is created in 'ecat_definitions.hpp (in global.hpp)'
 */
// struct ReceivedData
// {
//     int32_t   target_pos ;
//     int32_t   target_vel ;
//     int16_t   target_tor ;
//     int16_t   max_tor ;
//     uint16_t  control_word ;
//     int32_t   vel_offset ;
//     int16_t   tor_offset ;

//     int32_t  actual_pos ;
//     int32_t  actual_vel ;
//     int16_t  actual_cur ;
//     int16_t  actual_tor ;
//     uint16_t status_word ;
//     int8_t   op_mode_display ;
//     uint8_t  left_limit_switch_val ;
//     uint8_t  right_limit_switch_val ;
//     int32_t  right_x_axis;
//     int32_t  left_x_axis;
//     uint8_t  p_emergency_switch_val;
//     uint8_t  com_status;
// };

/**
 * @brief DY
 *        Type of Operation (Master / Slave)       
 */
typedef enum
{
    kMasterType = 1,
    kSlaveType = 2,
} OpType ;


class HapticNode final : public rclcpp::Node  // keyword 'final' prevents further inheritance
{
public:

  // CKim - Keyword 'explicit' restricts implicit conversion
  explicit HapticNode(char * argv[]);
  
  // CKim - Restrict copy constructors and assignment operator =
  // keyword 'delete' tells these functions will not be implemented. 
  HapticNode(HapticNode && c) = delete;
  HapticNode & operator=(HapticNode && c) = delete;
  HapticNode(const HapticNode & c) = delete;
  HapticNode & operator=(const HapticNode & c) = delete;

  // CKim - Keyword 'override' tell compiler that this inherited function must be implemented
  ~HapticNode() override;

  ReceivedData received_data_[g_kNumberOfServoDrivers] = {};

private:
  void commThread();

  void CommWriteThread(int fd_client);           // DY
  void CommReadThread(int fd_client);            // DY
  void DoubleToIntByte(char *buf, double data);  // DY
  double htond(double &x);                       // DY

  //void HandleSlaveFeedbackCallbacks(const ecat_msgs::msg::DataReceived::SharedPtr msg); // DY
  std::vector<std::string> Parsing(char read_msg[], int read_msg_size);
  std::vector<std::string> Split(std::string input, char delimiter);  // DY

  // CKim - C++ standard thread, 
  // std::future/shared_future and promise provides a mechanism to
  // control therad....
  std::thread comm_thread_;

  std::thread comm_write_thread_;    // DY
  std::thread comm_read_thread_;     // DY
  
  std::shared_future<void> future_;
  std::promise<void> exit_signal_;

  std::string m_IP;
  std::string m_Port;

  // CKim - Publisher
  rclcpp::Publisher<ecat_msgs::msg::HapticCmd>::SharedPtr haptic_publisher_;

  // JKim - Subscriber
  rclcpp::Subscription<ecat_msgs::msg::DataReceived>::SharedPtr slave_feedback_;

  // CKim - Published message
  ecat_msgs::msg::HapticCmd hapticMsg;
  // rclcpp::Publisher<sensor_msgs::msg::Joy>::SharedPtr pub_;
  // rclcpp::Subscription<sensor_msgs::msg::JoyFeedback>::SharedPtr feedback_sub_;
  // sensor_msgs::msg::Joy joy_msg_;

  void HandleSlaveFeedbackCallbacks(const ecat_msgs::msg::DataReceived::SharedPtr msg);
};


#endif  // JOY__JOY_HPP_