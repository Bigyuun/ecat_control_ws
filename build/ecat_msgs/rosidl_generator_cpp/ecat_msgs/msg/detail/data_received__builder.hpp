// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ecat_msgs:msg/DataReceived.idl
// generated code does not contain a copyright notice

#ifndef ECAT_MSGS__MSG__DETAIL__DATA_RECEIVED__BUILDER_HPP_
#define ECAT_MSGS__MSG__DETAIL__DATA_RECEIVED__BUILDER_HPP_

#include "ecat_msgs/msg/detail/data_received__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ecat_msgs
{

namespace msg
{

namespace builder
{

class Init_DataReceived_exec_ns
{
public:
  explicit Init_DataReceived_exec_ns(::ecat_msgs::msg::DataReceived & msg)
  : msg_(msg)
  {}
  ::ecat_msgs::msg::DataReceived exec_ns(::ecat_msgs::msg::DataReceived::_exec_ns_type arg)
  {
    msg_.exec_ns = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ecat_msgs::msg::DataReceived msg_;
};

class Init_DataReceived_jitter_ns
{
public:
  explicit Init_DataReceived_jitter_ns(::ecat_msgs::msg::DataReceived & msg)
  : msg_(msg)
  {}
  Init_DataReceived_exec_ns jitter_ns(::ecat_msgs::msg::DataReceived::_jitter_ns_type arg)
  {
    msg_.jitter_ns = std::move(arg);
    return Init_DataReceived_exec_ns(msg_);
  }

private:
  ::ecat_msgs::msg::DataReceived msg_;
};

class Init_DataReceived_period_ns
{
public:
  explicit Init_DataReceived_period_ns(::ecat_msgs::msg::DataReceived & msg)
  : msg_(msg)
  {}
  Init_DataReceived_jitter_ns period_ns(::ecat_msgs::msg::DataReceived::_period_ns_type arg)
  {
    msg_.period_ns = std::move(arg);
    return Init_DataReceived_jitter_ns(msg_);
  }

private:
  ::ecat_msgs::msg::DataReceived msg_;
};

class Init_DataReceived_emergency_switch_val
{
public:
  explicit Init_DataReceived_emergency_switch_val(::ecat_msgs::msg::DataReceived & msg)
  : msg_(msg)
  {}
  Init_DataReceived_period_ns emergency_switch_val(::ecat_msgs::msg::DataReceived::_emergency_switch_val_type arg)
  {
    msg_.emergency_switch_val = std::move(arg);
    return Init_DataReceived_period_ns(msg_);
  }

private:
  ::ecat_msgs::msg::DataReceived msg_;
};

class Init_DataReceived_right_limit_switch_val
{
public:
  explicit Init_DataReceived_right_limit_switch_val(::ecat_msgs::msg::DataReceived & msg)
  : msg_(msg)
  {}
  Init_DataReceived_emergency_switch_val right_limit_switch_val(::ecat_msgs::msg::DataReceived::_right_limit_switch_val_type arg)
  {
    msg_.right_limit_switch_val = std::move(arg);
    return Init_DataReceived_emergency_switch_val(msg_);
  }

private:
  ::ecat_msgs::msg::DataReceived msg_;
};

class Init_DataReceived_left_limit_switch_val
{
public:
  explicit Init_DataReceived_left_limit_switch_val(::ecat_msgs::msg::DataReceived & msg)
  : msg_(msg)
  {}
  Init_DataReceived_right_limit_switch_val left_limit_switch_val(::ecat_msgs::msg::DataReceived::_left_limit_switch_val_type arg)
  {
    msg_.left_limit_switch_val = std::move(arg);
    return Init_DataReceived_right_limit_switch_val(msg_);
  }

private:
  ::ecat_msgs::msg::DataReceived msg_;
};

class Init_DataReceived_current_lifecycle_state
{
public:
  explicit Init_DataReceived_current_lifecycle_state(::ecat_msgs::msg::DataReceived & msg)
  : msg_(msg)
  {}
  Init_DataReceived_left_limit_switch_val current_lifecycle_state(::ecat_msgs::msg::DataReceived::_current_lifecycle_state_type arg)
  {
    msg_.current_lifecycle_state = std::move(arg);
    return Init_DataReceived_left_limit_switch_val(msg_);
  }

private:
  ::ecat_msgs::msg::DataReceived msg_;
};

class Init_DataReceived_error_code
{
public:
  explicit Init_DataReceived_error_code(::ecat_msgs::msg::DataReceived & msg)
  : msg_(msg)
  {}
  Init_DataReceived_current_lifecycle_state error_code(::ecat_msgs::msg::DataReceived::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_DataReceived_current_lifecycle_state(msg_);
  }

private:
  ::ecat_msgs::msg::DataReceived msg_;
};

class Init_DataReceived_op_mode_display
{
public:
  explicit Init_DataReceived_op_mode_display(::ecat_msgs::msg::DataReceived & msg)
  : msg_(msg)
  {}
  Init_DataReceived_error_code op_mode_display(::ecat_msgs::msg::DataReceived::_op_mode_display_type arg)
  {
    msg_.op_mode_display = std::move(arg);
    return Init_DataReceived_error_code(msg_);
  }

private:
  ::ecat_msgs::msg::DataReceived msg_;
};

class Init_DataReceived_status_word
{
public:
  explicit Init_DataReceived_status_word(::ecat_msgs::msg::DataReceived & msg)
  : msg_(msg)
  {}
  Init_DataReceived_op_mode_display status_word(::ecat_msgs::msg::DataReceived::_status_word_type arg)
  {
    msg_.status_word = std::move(arg);
    return Init_DataReceived_op_mode_display(msg_);
  }

private:
  ::ecat_msgs::msg::DataReceived msg_;
};

class Init_DataReceived_actual_tor
{
public:
  explicit Init_DataReceived_actual_tor(::ecat_msgs::msg::DataReceived & msg)
  : msg_(msg)
  {}
  Init_DataReceived_status_word actual_tor(::ecat_msgs::msg::DataReceived::_actual_tor_type arg)
  {
    msg_.actual_tor = std::move(arg);
    return Init_DataReceived_status_word(msg_);
  }

private:
  ::ecat_msgs::msg::DataReceived msg_;
};

class Init_DataReceived_actual_vel
{
public:
  explicit Init_DataReceived_actual_vel(::ecat_msgs::msg::DataReceived & msg)
  : msg_(msg)
  {}
  Init_DataReceived_actual_tor actual_vel(::ecat_msgs::msg::DataReceived::_actual_vel_type arg)
  {
    msg_.actual_vel = std::move(arg);
    return Init_DataReceived_actual_tor(msg_);
  }

private:
  ::ecat_msgs::msg::DataReceived msg_;
};

class Init_DataReceived_actual_pos
{
public:
  explicit Init_DataReceived_actual_pos(::ecat_msgs::msg::DataReceived & msg)
  : msg_(msg)
  {}
  Init_DataReceived_actual_vel actual_pos(::ecat_msgs::msg::DataReceived::_actual_pos_type arg)
  {
    msg_.actual_pos = std::move(arg);
    return Init_DataReceived_actual_vel(msg_);
  }

private:
  ::ecat_msgs::msg::DataReceived msg_;
};

class Init_DataReceived_slave_com_status
{
public:
  explicit Init_DataReceived_slave_com_status(::ecat_msgs::msg::DataReceived & msg)
  : msg_(msg)
  {}
  Init_DataReceived_actual_pos slave_com_status(::ecat_msgs::msg::DataReceived::_slave_com_status_type arg)
  {
    msg_.slave_com_status = std::move(arg);
    return Init_DataReceived_actual_pos(msg_);
  }

private:
  ::ecat_msgs::msg::DataReceived msg_;
};

class Init_DataReceived_com_status
{
public:
  explicit Init_DataReceived_com_status(::ecat_msgs::msg::DataReceived & msg)
  : msg_(msg)
  {}
  Init_DataReceived_slave_com_status com_status(::ecat_msgs::msg::DataReceived::_com_status_type arg)
  {
    msg_.com_status = std::move(arg);
    return Init_DataReceived_slave_com_status(msg_);
  }

private:
  ::ecat_msgs::msg::DataReceived msg_;
};

class Init_DataReceived_header
{
public:
  Init_DataReceived_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataReceived_com_status header(::ecat_msgs::msg::DataReceived::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DataReceived_com_status(msg_);
  }

private:
  ::ecat_msgs::msg::DataReceived msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ecat_msgs::msg::DataReceived>()
{
  return ecat_msgs::msg::builder::Init_DataReceived_header();
}

}  // namespace ecat_msgs

#endif  // ECAT_MSGS__MSG__DETAIL__DATA_RECEIVED__BUILDER_HPP_
