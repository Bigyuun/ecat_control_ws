
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include <iostream>
#include <fstream>  // DY - file control

#include <time.h>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "sensor_msgs/msg/joy.hpp"
#include "ecat_msgs/msg/data_received.hpp"
#include "ecat_msgs/msg/data_sent.hpp"

// DY for using golbal variables
#include <ecat_globals.hpp>


#define FILE_TYPE ".csv"
// #define FILE_TYPE ".txt"

const int c_NumberOfMotorDrivers = g_kNumberOfServoDrivers;
// const int c_NumberOfMotorDrivers = 4;

/// Received feedback data from slaves
typedef struct
{
    int32_t   target_pos ;
    int32_t   target_vel ;
    int16_t   target_tor ;
    int16_t   max_tor ;
    uint16_t  control_word ;
    OpMode    op_mode ;
    int32_t   vel_offset ;
    int16_t   tor_offset ;

    int32_t  actual_pos ;
    int32_t  actual_vel ;
    int16_t  actual_cur ;
    int16_t  actual_tor ;
    uint16_t status_word ;
    int8_t   op_mode_display ;
    uint8_t  left_limit_switch_val ;
    uint8_t  right_limit_switch_val ;
    uint8_t  s_emergency_switch_val;
    
    // DY
    uint8_t  p_emergency_switch_val;
    int32_t  right_x_axis;
    int32_t  left_x_axis;
    uint8_t  com_status;
}SlaveData;

namespace DataExtractionNode
{
    
class DataExtraction final : public rclcpp::Node        // 'final' prevents further inheritance
{   
    /** ********************************************************************************
     * @brief c++ part (file stream)
     * @note Creating, Modifying File (csv)
      ******************************************************************************** */
    
    // Functions
    public: 
        DataExtraction();
        ~DataExtraction() override;                     // Keyword 'override' tell compiler that this inherited function must be implemented
    private:
        // basic functions
        uint8_t CreateFile(std::string file_name);
        uint8_t CloseFile(std::ofstream fstream_file_);
        void RecordFile(std::ofstream fstream_file_);

        // thread funtions
        void RecordThread();

    // Variables    
    public:
        SlaveData recv_msg_[g_kNumberOfServoDrivers];
    private:
        time_t system_time;
        rclcpp::Time ROSTime;
        std::ofstream CSVFILE_MANAGER;
        uint8_t file_stream_flag_;
        // std::string file_stream_flag_;

        // thread variables
        std::shared_future<void> future_;
        std::promise<void> exit_signal_;        // for thread
        std::thread record_thread_;


    /** ********************************************************************************
     * @brief ROS part (ROS2 / node control)
     * @note Creating Node, Node Callback Function
     ******************************************************************************** */
    public:
        
    private:
        rclcpp::Time r_time_;
        // DY - create subscriber for saving data (csv) from slave devices
        rclcpp::Subscription<ecat_msgs::msg::DataReceived>::SharedPtr slave_feedback_subscriber_;
        //ecat_msgs::msg::DataReceived extract_msg_; // DY - if publish something you want
        void SlaveFeedbackCallbakcs(const ecat_msgs::msg::DataReceived::SharedPtr msg);
};

}

