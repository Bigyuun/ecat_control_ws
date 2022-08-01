// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ecat_msgs:msg/HapticCmd.idl
// generated code does not contain a copyright notice

#ifndef ECAT_MSGS__MSG__DETAIL__HAPTIC_CMD__BUILDER_HPP_
#define ECAT_MSGS__MSG__DETAIL__HAPTIC_CMD__BUILDER_HPP_

#include "ecat_msgs/msg/detail/haptic_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ecat_msgs
{

namespace msg
{

namespace builder
{

class Init_HapticCmd_btn
{
public:
  explicit Init_HapticCmd_btn(::ecat_msgs::msg::HapticCmd & msg)
  : msg_(msg)
  {}
  ::ecat_msgs::msg::HapticCmd btn(::ecat_msgs::msg::HapticCmd::_btn_type arg)
  {
    msg_.btn = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ecat_msgs::msg::HapticCmd msg_;
};

class Init_HapticCmd_array
{
public:
  Init_HapticCmd_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HapticCmd_btn array(::ecat_msgs::msg::HapticCmd::_array_type arg)
  {
    msg_.array = std::move(arg);
    return Init_HapticCmd_btn(msg_);
  }

private:
  ::ecat_msgs::msg::HapticCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ecat_msgs::msg::HapticCmd>()
{
  return ecat_msgs::msg::builder::Init_HapticCmd_array();
}

}  // namespace ecat_msgs

#endif  // ECAT_MSGS__MSG__DETAIL__HAPTIC_CMD__BUILDER_HPP_
