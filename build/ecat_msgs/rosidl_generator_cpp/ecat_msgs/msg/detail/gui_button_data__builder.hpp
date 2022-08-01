// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ecat_msgs:msg/GuiButtonData.idl
// generated code does not contain a copyright notice

#ifndef ECAT_MSGS__MSG__DETAIL__GUI_BUTTON_DATA__BUILDER_HPP_
#define ECAT_MSGS__MSG__DETAIL__GUI_BUTTON_DATA__BUILDER_HPP_

#include "ecat_msgs/msg/detail/gui_button_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ecat_msgs
{

namespace msg
{

namespace builder
{

class Init_GuiButtonData_spn_target_values
{
public:
  explicit Init_GuiButtonData_spn_target_values(::ecat_msgs::msg::GuiButtonData & msg)
  : msg_(msg)
  {}
  ::ecat_msgs::msg::GuiButtonData spn_target_values(::ecat_msgs::msg::GuiButtonData::_spn_target_values_type arg)
  {
    msg_.spn_target_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ecat_msgs::msg::GuiButtonData msg_;
};

class Init_GuiButtonData_b_stop_cyclic_pdo
{
public:
  explicit Init_GuiButtonData_b_stop_cyclic_pdo(::ecat_msgs::msg::GuiButtonData & msg)
  : msg_(msg)
  {}
  Init_GuiButtonData_spn_target_values b_stop_cyclic_pdo(::ecat_msgs::msg::GuiButtonData::_b_stop_cyclic_pdo_type arg)
  {
    msg_.b_stop_cyclic_pdo = std::move(arg);
    return Init_GuiButtonData_spn_target_values(msg_);
  }

private:
  ::ecat_msgs::msg::GuiButtonData msg_;
};

class Init_GuiButtonData_b_send
{
public:
  explicit Init_GuiButtonData_b_send(::ecat_msgs::msg::GuiButtonData & msg)
  : msg_(msg)
  {}
  Init_GuiButtonData_b_stop_cyclic_pdo b_send(::ecat_msgs::msg::GuiButtonData::_b_send_type arg)
  {
    msg_.b_send = std::move(arg);
    return Init_GuiButtonData_b_stop_cyclic_pdo(msg_);
  }

private:
  ::ecat_msgs::msg::GuiButtonData msg_;
};

class Init_GuiButtonData_b_emergency_mode
{
public:
  explicit Init_GuiButtonData_b_emergency_mode(::ecat_msgs::msg::GuiButtonData & msg)
  : msg_(msg)
  {}
  Init_GuiButtonData_b_send b_emergency_mode(::ecat_msgs::msg::GuiButtonData::_b_emergency_mode_type arg)
  {
    msg_.b_emergency_mode = std::move(arg);
    return Init_GuiButtonData_b_send(msg_);
  }

private:
  ::ecat_msgs::msg::GuiButtonData msg_;
};

class Init_GuiButtonData_b_enter_cyclic_pdo
{
public:
  explicit Init_GuiButtonData_b_enter_cyclic_pdo(::ecat_msgs::msg::GuiButtonData & msg)
  : msg_(msg)
  {}
  Init_GuiButtonData_b_emergency_mode b_enter_cyclic_pdo(::ecat_msgs::msg::GuiButtonData::_b_enter_cyclic_pdo_type arg)
  {
    msg_.b_enter_cyclic_pdo = std::move(arg);
    return Init_GuiButtonData_b_emergency_mode(msg_);
  }

private:
  ::ecat_msgs::msg::GuiButtonData msg_;
};

class Init_GuiButtonData_b_enable_pos
{
public:
  explicit Init_GuiButtonData_b_enable_pos(::ecat_msgs::msg::GuiButtonData & msg)
  : msg_(msg)
  {}
  Init_GuiButtonData_b_enter_cyclic_pdo b_enable_pos(::ecat_msgs::msg::GuiButtonData::_b_enable_pos_type arg)
  {
    msg_.b_enable_pos = std::move(arg);
    return Init_GuiButtonData_b_enter_cyclic_pdo(msg_);
  }

private:
  ::ecat_msgs::msg::GuiButtonData msg_;
};

class Init_GuiButtonData_b_enable_vel
{
public:
  explicit Init_GuiButtonData_b_enable_vel(::ecat_msgs::msg::GuiButtonData & msg)
  : msg_(msg)
  {}
  Init_GuiButtonData_b_enable_pos b_enable_vel(::ecat_msgs::msg::GuiButtonData::_b_enable_vel_type arg)
  {
    msg_.b_enable_vel = std::move(arg);
    return Init_GuiButtonData_b_enable_pos(msg_);
  }

private:
  ::ecat_msgs::msg::GuiButtonData msg_;
};

class Init_GuiButtonData_b_enable_cyclic_vel
{
public:
  explicit Init_GuiButtonData_b_enable_cyclic_vel(::ecat_msgs::msg::GuiButtonData & msg)
  : msg_(msg)
  {}
  Init_GuiButtonData_b_enable_vel b_enable_cyclic_vel(::ecat_msgs::msg::GuiButtonData::_b_enable_cyclic_vel_type arg)
  {
    msg_.b_enable_cyclic_vel = std::move(arg);
    return Init_GuiButtonData_b_enable_vel(msg_);
  }

private:
  ::ecat_msgs::msg::GuiButtonData msg_;
};

class Init_GuiButtonData_b_enable_cyclic_pos
{
public:
  explicit Init_GuiButtonData_b_enable_cyclic_pos(::ecat_msgs::msg::GuiButtonData & msg)
  : msg_(msg)
  {}
  Init_GuiButtonData_b_enable_cyclic_vel b_enable_cyclic_pos(::ecat_msgs::msg::GuiButtonData::_b_enable_cyclic_pos_type arg)
  {
    msg_.b_enable_cyclic_pos = std::move(arg);
    return Init_GuiButtonData_b_enable_cyclic_vel(msg_);
  }

private:
  ::ecat_msgs::msg::GuiButtonData msg_;
};

class Init_GuiButtonData_b_disable_drives
{
public:
  explicit Init_GuiButtonData_b_disable_drives(::ecat_msgs::msg::GuiButtonData & msg)
  : msg_(msg)
  {}
  Init_GuiButtonData_b_enable_cyclic_pos b_disable_drives(::ecat_msgs::msg::GuiButtonData::_b_disable_drives_type arg)
  {
    msg_.b_disable_drives = std::move(arg);
    return Init_GuiButtonData_b_enable_cyclic_pos(msg_);
  }

private:
  ::ecat_msgs::msg::GuiButtonData msg_;
};

class Init_GuiButtonData_b_enable_drives
{
public:
  explicit Init_GuiButtonData_b_enable_drives(::ecat_msgs::msg::GuiButtonData & msg)
  : msg_(msg)
  {}
  Init_GuiButtonData_b_disable_drives b_enable_drives(::ecat_msgs::msg::GuiButtonData::_b_enable_drives_type arg)
  {
    msg_.b_enable_drives = std::move(arg);
    return Init_GuiButtonData_b_disable_drives(msg_);
  }

private:
  ::ecat_msgs::msg::GuiButtonData msg_;
};

class Init_GuiButtonData_b_reinit_ecat
{
public:
  explicit Init_GuiButtonData_b_reinit_ecat(::ecat_msgs::msg::GuiButtonData & msg)
  : msg_(msg)
  {}
  Init_GuiButtonData_b_enable_drives b_reinit_ecat(::ecat_msgs::msg::GuiButtonData::_b_reinit_ecat_type arg)
  {
    msg_.b_reinit_ecat = std::move(arg);
    return Init_GuiButtonData_b_enable_drives(msg_);
  }

private:
  ::ecat_msgs::msg::GuiButtonData msg_;
};

class Init_GuiButtonData_b_init_ecat
{
public:
  explicit Init_GuiButtonData_b_init_ecat(::ecat_msgs::msg::GuiButtonData & msg)
  : msg_(msg)
  {}
  Init_GuiButtonData_b_reinit_ecat b_init_ecat(::ecat_msgs::msg::GuiButtonData::_b_init_ecat_type arg)
  {
    msg_.b_init_ecat = std::move(arg);
    return Init_GuiButtonData_b_reinit_ecat(msg_);
  }

private:
  ::ecat_msgs::msg::GuiButtonData msg_;
};

class Init_GuiButtonData_header
{
public:
  Init_GuiButtonData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GuiButtonData_b_init_ecat header(::ecat_msgs::msg::GuiButtonData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GuiButtonData_b_init_ecat(msg_);
  }

private:
  ::ecat_msgs::msg::GuiButtonData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ecat_msgs::msg::GuiButtonData>()
{
  return ecat_msgs::msg::builder::Init_GuiButtonData_header();
}

}  // namespace ecat_msgs

#endif  // ECAT_MSGS__MSG__DETAIL__GUI_BUTTON_DATA__BUILDER_HPP_
