#include <data_extract_node.hpp>


using namespace DataExtractionNode;
using namespace std::chrono_literals;
using namespace std;

DataExtraction::DataExtraction() : rclcpp::Node("data_extract_node")
{
    //CreateFile();
    file_stream_flag_ = 0;
    
    auto qos = rclcpp::QoS(
    // The "KEEP_LAST" history setting tells DDS to store a fixed-size buffer of values before they
    // are sent, to aid with recovery in the event of dropped messages.
    // "depth" specifies the size of this buffer.
    // In this example, we are optimizing for performance and limited resource usage (preventing
    // page faults), instead of reliability. Thus, we set the size of the history buffer to 1.
    rclcpp::KeepLast(1)
    );

    qos.best_effort();

    slave_feedback_subscriber_ = this->create_subscription<ecat_msgs::msg::DataReceived>("Slave_Feedback", qos,
                                 std::bind(&DataExtraction::SlaveFeedbackCallbakcs, this, std::placeholders::_1));

    future_ = exit_signal_.get_future();
    record_thread_ = std::thread(&DataExtraction::RecordThread, this);
}

DataExtraction::~DataExtraction()
{
    // Trigger exit signal to stop the thread
    exit_signal_.set_value();
    record_thread_.join();
}


uint8_t DataExtraction::CreateFile(std::string file_name)
{
    string directory = "";
    CSVFILE_MANAGER.close();
    CSVFILE_MANAGER.open("./record/" + file_name + FILE_TYPE, std::ios::app);
    

    if(CSVFILE_MANAGER.is_open())
    {   
        CSVFILE_MANAGER << "Created Due : " << std::string(ctime(&system_time)) << "\n";
        CSVFILE_MANAGER << "Time"       << ","
                        << "actual_pos" << "," 
                        << "actual_vel" << ","
                        << "actual_tor" << "\n";
        RCLCPP_INFO(get_logger(), directory + file_name + FILE_TYPE + " is created!");
        return 1;
    }
    else
    {
        RCLCPP_ERROR(get_logger(), "Fail to create file!");
        return -1;
    }
}

uint8_t DataExtraction::CloseFile(std::ofstream fstream_file_)
{

}

void DataExtraction::RecordFile(std::ofstream fstream_file_)
{

}

void DataExtraction::RecordThread()
{
    RCLCPP_INFO(get_logger(), "Record Thread Created..!");

    cout << "*************** Command **************" << endl;
    cout << " c             : create & set file you want " << endl;
    //cout << " c <file name> : create & set file you want " << endl;
    cout << " r             : record start (If didn't input 'c-command', file name will be 'System-Time'" << endl;
    cout << " s             : stop write (record) " << endl;
    cout << " Q             : quit (ctrl+c) " << endl;
    cout << "**************************************" << endl;

    while(true)
    {
        std::string command;
        cin >> command ;

        // file create part
        if(command == "c")
        {
            RCLCPP_INFO(get_logger(), "Command \"c\" : Creating File...");
            system_time = time(NULL);
            CreateFile(std::string(ctime(&system_time)));
            continue;
        }// file create part <<END>>

        if(command == "r")
        {
            RCLCPP_INFO(get_logger(), "Command \"r\" : Start Recording.");

            if(CSVFILE_MANAGER.is_open())
            {
                file_stream_flag_ = 1;
                RCLCPP_INFO(get_logger(), "Now Recording...");
            }
            else
            {
                file_stream_flag_ = 0;
                RCLCPP_ERROR(get_logger(), "File doesn't exist (created) !!");
            }

            continue;
        }
        
        if (command == "s")
        {
            file_stream_flag_ = 0;
            RCLCPP_INFO(get_logger(), "Command \"s\" : Stop Recording.");
            continue;
        }

        if(command =="Q")
        {
            RCLCPP_INFO(get_logger(), "Command \"Q\" : Close File");
            CSVFILE_MANAGER.close();
            continue;
        }

        
    }
}


/**
 * @brief Callback function of the subscriber
 * 
 * @param msg 
 */
void DataExtraction::SlaveFeedbackCallbakcs(const ecat_msgs::msg::DataReceived::SharedPtr msg)
{
    for(int i=0; i<c_NumberOfMotorDrivers; i++)
    {
        recv_msg_[i].actual_pos             = msg->actual_pos[i];
        recv_msg_[i].actual_vel             = msg->actual_vel[i];
        recv_msg_[i].actual_tor             = msg->actual_tor[i];
        recv_msg_[i].left_limit_switch_val  = msg->left_limit_switch_val;
        recv_msg_[i].right_limit_switch_val = msg->right_limit_switch_val;
        recv_msg_[i].p_emergency_switch_val = msg->emergency_switch_val;
        recv_msg_[i].com_status             = msg->com_status;
    }

    if(file_stream_flag_)
    {
        try
        {
            for (int i = 0; i < c_NumberOfMotorDrivers; i++)
            {
                CSVFILE_MANAGER << recv_msg_[i].actual_pos << ","
                                << recv_msg_[i].actual_vel << ","
                                << recv_msg_[i].actual_tor << "\n";
            }
        }
        catch(exception &e)
        {
            RCLCPP_WARN(get_logger(), "Exception Err : ", e.what());
        }
    }
}


/**
 * @brief 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DataExtraction>());
    std::cout << "rclcpp::spin() is ended" << std::endl;
    rclcpp::shutdown();

    return 0;
}



