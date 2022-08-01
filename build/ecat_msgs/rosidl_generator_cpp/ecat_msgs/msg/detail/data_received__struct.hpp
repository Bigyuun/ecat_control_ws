// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ecat_msgs:msg/DataReceived.idl
// generated code does not contain a copyright notice

#ifndef ECAT_MSGS__MSG__DETAIL__DATA_RECEIVED__STRUCT_HPP_
#define ECAT_MSGS__MSG__DETAIL__DATA_RECEIVED__STRUCT_HPP_

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
# define DEPRECATED__ecat_msgs__msg__DataReceived __attribute__((deprecated))
#else
# define DEPRECATED__ecat_msgs__msg__DataReceived __declspec(deprecated)
#endif

namespace ecat_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DataReceived_
{
  using Type = DataReceived_<ContainerAllocator>;

  explicit DataReceived_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->com_status = 0;
      this->current_lifecycle_state = 0;
      this->left_limit_switch_val = 0;
      this->right_limit_switch_val = 0;
      this->emergency_switch_val = 0;
      this->period_ns = 0ul;
      this->jitter_ns = 0ul;
      this->exec_ns = 0ul;
    }
  }

  explicit DataReceived_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->com_status = 0;
      this->current_lifecycle_state = 0;
      this->left_limit_switch_val = 0;
      this->right_limit_switch_val = 0;
      this->emergency_switch_val = 0;
      this->period_ns = 0ul;
      this->jitter_ns = 0ul;
      this->exec_ns = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _com_status_type =
    uint8_t;
  _com_status_type com_status;
  using _slave_com_status_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _slave_com_status_type slave_com_status;
  using _actual_pos_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _actual_pos_type actual_pos;
  using _actual_vel_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _actual_vel_type actual_vel;
  using _actual_tor_type =
    std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other>;
  _actual_tor_type actual_tor;
  using _status_word_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _status_word_type status_word;
  using _op_mode_display_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _op_mode_display_type op_mode_display;
  using _error_code_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _error_code_type error_code;
  using _current_lifecycle_state_type =
    uint8_t;
  _current_lifecycle_state_type current_lifecycle_state;
  using _left_limit_switch_val_type =
    uint8_t;
  _left_limit_switch_val_type left_limit_switch_val;
  using _right_limit_switch_val_type =
    uint8_t;
  _right_limit_switch_val_type right_limit_switch_val;
  using _emergency_switch_val_type =
    uint8_t;
  _emergency_switch_val_type emergency_switch_val;
  using _period_ns_type =
    uint32_t;
  _period_ns_type period_ns;
  using _jitter_ns_type =
    uint32_t;
  _jitter_ns_type jitter_ns;
  using _exec_ns_type =
    uint32_t;
  _exec_ns_type exec_ns;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__com_status(
    const uint8_t & _arg)
  {
    this->com_status = _arg;
    return *this;
  }
  Type & set__slave_com_status(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->slave_com_status = _arg;
    return *this;
  }
  Type & set__actual_pos(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->actual_pos = _arg;
    return *this;
  }
  Type & set__actual_vel(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->actual_vel = _arg;
    return *this;
  }
  Type & set__actual_tor(
    const std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other> & _arg)
  {
    this->actual_tor = _arg;
    return *this;
  }
  Type & set__status_word(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->status_word = _arg;
    return *this;
  }
  Type & set__op_mode_display(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->op_mode_display = _arg;
    return *this;
  }
  Type & set__error_code(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__current_lifecycle_state(
    const uint8_t & _arg)
  {
    this->current_lifecycle_state = _arg;
    return *this;
  }
  Type & set__left_limit_switch_val(
    const uint8_t & _arg)
  {
    this->left_limit_switch_val = _arg;
    return *this;
  }
  Type & set__right_limit_switch_val(
    const uint8_t & _arg)
  {
    this->right_limit_switch_val = _arg;
    return *this;
  }
  Type & set__emergency_switch_val(
    const uint8_t & _arg)
  {
    this->emergency_switch_val = _arg;
    return *this;
  }
  Type & set__period_ns(
    const uint32_t & _arg)
  {
    this->period_ns = _arg;
    return *this;
  }
  Type & set__jitter_ns(
    const uint32_t & _arg)
  {
    this->jitter_ns = _arg;
    return *this;
  }
  Type & set__exec_ns(
    const uint32_t & _arg)
  {
    this->exec_ns = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ecat_msgs::msg::DataReceived_<ContainerAllocator> *;
  using ConstRawPtr =
    const ecat_msgs::msg::DataReceived_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ecat_msgs::msg::DataReceived_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ecat_msgs::msg::DataReceived_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ecat_msgs::msg::DataReceived_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ecat_msgs::msg::DataReceived_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ecat_msgs::msg::DataReceived_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ecat_msgs::msg::DataReceived_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ecat_msgs::msg::DataReceived_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ecat_msgs::msg::DataReceived_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ecat_msgs__msg__DataReceived
    std::shared_ptr<ecat_msgs::msg::DataReceived_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ecat_msgs__msg__DataReceived
    std::shared_ptr<ecat_msgs::msg::DataReceived_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataReceived_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->com_status != other.com_status) {
      return false;
    }
    if (this->slave_com_status != other.slave_com_status) {
      return false;
    }
    if (this->actual_pos != other.actual_pos) {
      return false;
    }
    if (this->actual_vel != other.actual_vel) {
      return false;
    }
    if (this->actual_tor != other.actual_tor) {
      return false;
    }
    if (this->status_word != other.status_word) {
      return false;
    }
    if (this->op_mode_display != other.op_mode_display) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->current_lifecycle_state != other.current_lifecycle_state) {
      return false;
    }
    if (this->left_limit_switch_val != other.left_limit_switch_val) {
      return false;
    }
    if (this->right_limit_switch_val != other.right_limit_switch_val) {
      return false;
    }
    if (this->emergency_switch_val != other.emergency_switch_val) {
      return false;
    }
    if (this->period_ns != other.period_ns) {
      return false;
    }
    if (this->jitter_ns != other.jitter_ns) {
      return false;
    }
    if (this->exec_ns != other.exec_ns) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataReceived_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataReceived_

// alias to use template instance with default allocator
using DataReceived =
  ecat_msgs::msg::DataReceived_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ecat_msgs

#endif  // ECAT_MSGS__MSG__DETAIL__DATA_RECEIVED__STRUCT_HPP_
