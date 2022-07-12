// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ecat_msgs:msg/DataSent.idl
// generated code does not contain a copyright notice

#ifndef ECAT_MSGS__MSG__DETAIL__DATA_SENT__STRUCT_HPP_
#define ECAT_MSGS__MSG__DETAIL__DATA_SENT__STRUCT_HPP_

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
# define DEPRECATED__ecat_msgs__msg__DataSent __attribute__((deprecated))
#else
# define DEPRECATED__ecat_msgs__msg__DataSent __declspec(deprecated)
#endif

namespace ecat_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DataSent_
{
  using Type = DataSent_<ContainerAllocator>;

  explicit DataSent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->op_mode = 0;
      this->vel_offset = 0l;
      this->tor_offset = 0;
    }
  }

  explicit DataSent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->op_mode = 0;
      this->vel_offset = 0l;
      this->tor_offset = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _target_pos_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _target_pos_type target_pos;
  using _target_vel_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _target_vel_type target_vel;
  using _target_tor_type =
    std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other>;
  _target_tor_type target_tor;
  using _control_word_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _control_word_type control_word;
  using _op_mode_type =
    uint8_t;
  _op_mode_type op_mode;
  using _vel_offset_type =
    int32_t;
  _vel_offset_type vel_offset;
  using _tor_offset_type =
    int16_t;
  _tor_offset_type tor_offset;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__target_pos(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->target_pos = _arg;
    return *this;
  }
  Type & set__target_vel(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->target_vel = _arg;
    return *this;
  }
  Type & set__target_tor(
    const std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other> & _arg)
  {
    this->target_tor = _arg;
    return *this;
  }
  Type & set__control_word(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->control_word = _arg;
    return *this;
  }
  Type & set__op_mode(
    const uint8_t & _arg)
  {
    this->op_mode = _arg;
    return *this;
  }
  Type & set__vel_offset(
    const int32_t & _arg)
  {
    this->vel_offset = _arg;
    return *this;
  }
  Type & set__tor_offset(
    const int16_t & _arg)
  {
    this->tor_offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ecat_msgs::msg::DataSent_<ContainerAllocator> *;
  using ConstRawPtr =
    const ecat_msgs::msg::DataSent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ecat_msgs::msg::DataSent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ecat_msgs::msg::DataSent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ecat_msgs::msg::DataSent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ecat_msgs::msg::DataSent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ecat_msgs::msg::DataSent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ecat_msgs::msg::DataSent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ecat_msgs::msg::DataSent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ecat_msgs::msg::DataSent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ecat_msgs__msg__DataSent
    std::shared_ptr<ecat_msgs::msg::DataSent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ecat_msgs__msg__DataSent
    std::shared_ptr<ecat_msgs::msg::DataSent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataSent_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->target_pos != other.target_pos) {
      return false;
    }
    if (this->target_vel != other.target_vel) {
      return false;
    }
    if (this->target_tor != other.target_tor) {
      return false;
    }
    if (this->control_word != other.control_word) {
      return false;
    }
    if (this->op_mode != other.op_mode) {
      return false;
    }
    if (this->vel_offset != other.vel_offset) {
      return false;
    }
    if (this->tor_offset != other.tor_offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataSent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataSent_

// alias to use template instance with default allocator
using DataSent =
  ecat_msgs::msg::DataSent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ecat_msgs

#endif  // ECAT_MSGS__MSG__DETAIL__DATA_SENT__STRUCT_HPP_
