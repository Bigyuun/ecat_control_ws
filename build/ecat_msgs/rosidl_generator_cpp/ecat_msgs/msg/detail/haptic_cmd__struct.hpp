// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ecat_msgs:msg/HapticCmd.idl
// generated code does not contain a copyright notice

#ifndef ECAT_MSGS__MSG__DETAIL__HAPTIC_CMD__STRUCT_HPP_
#define ECAT_MSGS__MSG__DETAIL__HAPTIC_CMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ecat_msgs__msg__HapticCmd __attribute__((deprecated))
#else
# define DEPRECATED__ecat_msgs__msg__HapticCmd __declspec(deprecated)
#endif

namespace ecat_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HapticCmd_
{
  using Type = HapticCmd_<ContainerAllocator>;

  explicit HapticCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->array.begin(), this->array.end(), 0.0);
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->btn.begin(), this->btn.end(), 0l);
    }
  }

  explicit HapticCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : array(_alloc),
    btn(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->array.begin(), this->array.end(), 0.0);
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->btn.begin(), this->btn.end(), 0l);
    }
  }

  // field types and members
  using _array_type =
    std::array<double, 7>;
  _array_type array;
  using _btn_type =
    std::array<int32_t, 2>;
  _btn_type btn;

  // setters for named parameter idiom
  Type & set__array(
    const std::array<double, 7> & _arg)
  {
    this->array = _arg;
    return *this;
  }
  Type & set__btn(
    const std::array<int32_t, 2> & _arg)
  {
    this->btn = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ecat_msgs::msg::HapticCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const ecat_msgs::msg::HapticCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ecat_msgs::msg::HapticCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ecat_msgs::msg::HapticCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ecat_msgs::msg::HapticCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ecat_msgs::msg::HapticCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ecat_msgs::msg::HapticCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ecat_msgs::msg::HapticCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ecat_msgs::msg::HapticCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ecat_msgs::msg::HapticCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ecat_msgs__msg__HapticCmd
    std::shared_ptr<ecat_msgs::msg::HapticCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ecat_msgs__msg__HapticCmd
    std::shared_ptr<ecat_msgs::msg::HapticCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HapticCmd_ & other) const
  {
    if (this->array != other.array) {
      return false;
    }
    if (this->btn != other.btn) {
      return false;
    }
    return true;
  }
  bool operator!=(const HapticCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HapticCmd_

// alias to use template instance with default allocator
using HapticCmd =
  ecat_msgs::msg::HapticCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ecat_msgs

#endif  // ECAT_MSGS__MSG__DETAIL__HAPTIC_CMD__STRUCT_HPP_
