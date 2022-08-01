// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ecat_msgs:msg/GuiButtonData.idl
// generated code does not contain a copyright notice

#ifndef ECAT_MSGS__MSG__DETAIL__GUI_BUTTON_DATA__STRUCT_HPP_
#define ECAT_MSGS__MSG__DETAIL__GUI_BUTTON_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ecat_msgs__msg__GuiButtonData __attribute__((deprecated))
#else
# define DEPRECATED__ecat_msgs__msg__GuiButtonData __declspec(deprecated)
#endif

namespace ecat_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GuiButtonData_
{
  using Type = GuiButtonData_<ContainerAllocator>;

  explicit GuiButtonData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->b_init_ecat = 0;
      this->b_reinit_ecat = 0;
      this->b_enable_drives = 0;
      this->b_disable_drives = 0;
      this->b_enable_cyclic_pos = 0;
      this->b_enable_cyclic_vel = 0;
      this->b_enable_vel = 0;
      this->b_enable_pos = 0;
      this->b_enter_cyclic_pdo = 0;
      this->b_emergency_mode = 0;
      this->b_send = 0;
      this->b_stop_cyclic_pdo = 0;
    }
  }

  explicit GuiButtonData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->b_init_ecat = 0;
      this->b_reinit_ecat = 0;
      this->b_enable_drives = 0;
      this->b_disable_drives = 0;
      this->b_enable_cyclic_pos = 0;
      this->b_enable_cyclic_vel = 0;
      this->b_enable_vel = 0;
      this->b_enable_pos = 0;
      this->b_enter_cyclic_pdo = 0;
      this->b_emergency_mode = 0;
      this->b_send = 0;
      this->b_stop_cyclic_pdo = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _b_init_ecat_type =
    uint8_t;
  _b_init_ecat_type b_init_ecat;
  using _b_reinit_ecat_type =
    uint8_t;
  _b_reinit_ecat_type b_reinit_ecat;
  using _b_enable_drives_type =
    uint8_t;
  _b_enable_drives_type b_enable_drives;
  using _b_disable_drives_type =
    uint8_t;
  _b_disable_drives_type b_disable_drives;
  using _b_enable_cyclic_pos_type =
    uint8_t;
  _b_enable_cyclic_pos_type b_enable_cyclic_pos;
  using _b_enable_cyclic_vel_type =
    uint8_t;
  _b_enable_cyclic_vel_type b_enable_cyclic_vel;
  using _b_enable_vel_type =
    uint8_t;
  _b_enable_vel_type b_enable_vel;
  using _b_enable_pos_type =
    uint8_t;
  _b_enable_pos_type b_enable_pos;
  using _b_enter_cyclic_pdo_type =
    uint8_t;
  _b_enter_cyclic_pdo_type b_enter_cyclic_pdo;
  using _b_emergency_mode_type =
    uint8_t;
  _b_emergency_mode_type b_emergency_mode;
  using _b_send_type =
    uint8_t;
  _b_send_type b_send;
  using _b_stop_cyclic_pdo_type =
    uint8_t;
  _b_stop_cyclic_pdo_type b_stop_cyclic_pdo;
  using _spn_target_values_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _spn_target_values_type spn_target_values;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__b_init_ecat(
    const uint8_t & _arg)
  {
    this->b_init_ecat = _arg;
    return *this;
  }
  Type & set__b_reinit_ecat(
    const uint8_t & _arg)
  {
    this->b_reinit_ecat = _arg;
    return *this;
  }
  Type & set__b_enable_drives(
    const uint8_t & _arg)
  {
    this->b_enable_drives = _arg;
    return *this;
  }
  Type & set__b_disable_drives(
    const uint8_t & _arg)
  {
    this->b_disable_drives = _arg;
    return *this;
  }
  Type & set__b_enable_cyclic_pos(
    const uint8_t & _arg)
  {
    this->b_enable_cyclic_pos = _arg;
    return *this;
  }
  Type & set__b_enable_cyclic_vel(
    const uint8_t & _arg)
  {
    this->b_enable_cyclic_vel = _arg;
    return *this;
  }
  Type & set__b_enable_vel(
    const uint8_t & _arg)
  {
    this->b_enable_vel = _arg;
    return *this;
  }
  Type & set__b_enable_pos(
    const uint8_t & _arg)
  {
    this->b_enable_pos = _arg;
    return *this;
  }
  Type & set__b_enter_cyclic_pdo(
    const uint8_t & _arg)
  {
    this->b_enter_cyclic_pdo = _arg;
    return *this;
  }
  Type & set__b_emergency_mode(
    const uint8_t & _arg)
  {
    this->b_emergency_mode = _arg;
    return *this;
  }
  Type & set__b_send(
    const uint8_t & _arg)
  {
    this->b_send = _arg;
    return *this;
  }
  Type & set__b_stop_cyclic_pdo(
    const uint8_t & _arg)
  {
    this->b_stop_cyclic_pdo = _arg;
    return *this;
  }
  Type & set__spn_target_values(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->spn_target_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ecat_msgs::msg::GuiButtonData_<ContainerAllocator> *;
  using ConstRawPtr =
    const ecat_msgs::msg::GuiButtonData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ecat_msgs::msg::GuiButtonData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ecat_msgs::msg::GuiButtonData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ecat_msgs::msg::GuiButtonData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ecat_msgs::msg::GuiButtonData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ecat_msgs::msg::GuiButtonData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ecat_msgs::msg::GuiButtonData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ecat_msgs::msg::GuiButtonData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ecat_msgs::msg::GuiButtonData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ecat_msgs__msg__GuiButtonData
    std::shared_ptr<ecat_msgs::msg::GuiButtonData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ecat_msgs__msg__GuiButtonData
    std::shared_ptr<ecat_msgs::msg::GuiButtonData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GuiButtonData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->b_init_ecat != other.b_init_ecat) {
      return false;
    }
    if (this->b_reinit_ecat != other.b_reinit_ecat) {
      return false;
    }
    if (this->b_enable_drives != other.b_enable_drives) {
      return false;
    }
    if (this->b_disable_drives != other.b_disable_drives) {
      return false;
    }
    if (this->b_enable_cyclic_pos != other.b_enable_cyclic_pos) {
      return false;
    }
    if (this->b_enable_cyclic_vel != other.b_enable_cyclic_vel) {
      return false;
    }
    if (this->b_enable_vel != other.b_enable_vel) {
      return false;
    }
    if (this->b_enable_pos != other.b_enable_pos) {
      return false;
    }
    if (this->b_enter_cyclic_pdo != other.b_enter_cyclic_pdo) {
      return false;
    }
    if (this->b_emergency_mode != other.b_emergency_mode) {
      return false;
    }
    if (this->b_send != other.b_send) {
      return false;
    }
    if (this->b_stop_cyclic_pdo != other.b_stop_cyclic_pdo) {
      return false;
    }
    if (this->spn_target_values != other.spn_target_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const GuiButtonData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GuiButtonData_

// alias to use template instance with default allocator
using GuiButtonData =
  ecat_msgs::msg::GuiButtonData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ecat_msgs

#endif  // ECAT_MSGS__MSG__DETAIL__GUI_BUTTON_DATA__STRUCT_HPP_
