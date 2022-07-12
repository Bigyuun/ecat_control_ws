// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ecat_msgs:msg/DataSent.idl
// generated code does not contain a copyright notice

#ifndef ECAT_MSGS__MSG__DETAIL__DATA_SENT__BUILDER_HPP_
#define ECAT_MSGS__MSG__DETAIL__DATA_SENT__BUILDER_HPP_

#include "ecat_msgs/msg/detail/data_sent__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ecat_msgs
{

namespace msg
{

namespace builder
{

class Init_DataSent_tor_offset
{
public:
  explicit Init_DataSent_tor_offset(::ecat_msgs::msg::DataSent & msg)
  : msg_(msg)
  {}
  ::ecat_msgs::msg::DataSent tor_offset(::ecat_msgs::msg::DataSent::_tor_offset_type arg)
  {
    msg_.tor_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ecat_msgs::msg::DataSent msg_;
};

class Init_DataSent_vel_offset
{
public:
  explicit Init_DataSent_vel_offset(::ecat_msgs::msg::DataSent & msg)
  : msg_(msg)
  {}
  Init_DataSent_tor_offset vel_offset(::ecat_msgs::msg::DataSent::_vel_offset_type arg)
  {
    msg_.vel_offset = std::move(arg);
    return Init_DataSent_tor_offset(msg_);
  }

private:
  ::ecat_msgs::msg::DataSent msg_;
};

class Init_DataSent_op_mode
{
public:
  explicit Init_DataSent_op_mode(::ecat_msgs::msg::DataSent & msg)
  : msg_(msg)
  {}
  Init_DataSent_vel_offset op_mode(::ecat_msgs::msg::DataSent::_op_mode_type arg)
  {
    msg_.op_mode = std::move(arg);
    return Init_DataSent_vel_offset(msg_);
  }

private:
  ::ecat_msgs::msg::DataSent msg_;
};

class Init_DataSent_control_word
{
public:
  explicit Init_DataSent_control_word(::ecat_msgs::msg::DataSent & msg)
  : msg_(msg)
  {}
  Init_DataSent_op_mode control_word(::ecat_msgs::msg::DataSent::_control_word_type arg)
  {
    msg_.control_word = std::move(arg);
    return Init_DataSent_op_mode(msg_);
  }

private:
  ::ecat_msgs::msg::DataSent msg_;
};

class Init_DataSent_target_tor
{
public:
  explicit Init_DataSent_target_tor(::ecat_msgs::msg::DataSent & msg)
  : msg_(msg)
  {}
  Init_DataSent_control_word target_tor(::ecat_msgs::msg::DataSent::_target_tor_type arg)
  {
    msg_.target_tor = std::move(arg);
    return Init_DataSent_control_word(msg_);
  }

private:
  ::ecat_msgs::msg::DataSent msg_;
};

class Init_DataSent_target_vel
{
public:
  explicit Init_DataSent_target_vel(::ecat_msgs::msg::DataSent & msg)
  : msg_(msg)
  {}
  Init_DataSent_target_tor target_vel(::ecat_msgs::msg::DataSent::_target_vel_type arg)
  {
    msg_.target_vel = std::move(arg);
    return Init_DataSent_target_tor(msg_);
  }

private:
  ::ecat_msgs::msg::DataSent msg_;
};

class Init_DataSent_target_pos
{
public:
  explicit Init_DataSent_target_pos(::ecat_msgs::msg::DataSent & msg)
  : msg_(msg)
  {}
  Init_DataSent_target_vel target_pos(::ecat_msgs::msg::DataSent::_target_pos_type arg)
  {
    msg_.target_pos = std::move(arg);
    return Init_DataSent_target_vel(msg_);
  }

private:
  ::ecat_msgs::msg::DataSent msg_;
};

class Init_DataSent_header
{
public:
  Init_DataSent_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataSent_target_pos header(::ecat_msgs::msg::DataSent::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DataSent_target_pos(msg_);
  }

private:
  ::ecat_msgs::msg::DataSent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ecat_msgs::msg::DataSent>()
{
  return ecat_msgs::msg::builder::Init_DataSent_header();
}

}  // namespace ecat_msgs

#endif  // ECAT_MSGS__MSG__DETAIL__DATA_SENT__BUILDER_HPP_
