// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ecat_msgs:msg/HapticCmd.idl
// generated code does not contain a copyright notice

#ifndef ECAT_MSGS__MSG__DETAIL__HAPTIC_CMD__TRAITS_HPP_
#define ECAT_MSGS__MSG__DETAIL__HAPTIC_CMD__TRAITS_HPP_

#include "ecat_msgs/msg/detail/haptic_cmd__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ecat_msgs::msg::HapticCmd>()
{
  return "ecat_msgs::msg::HapticCmd";
}

template<>
inline const char * name<ecat_msgs::msg::HapticCmd>()
{
  return "ecat_msgs/msg/HapticCmd";
}

template<>
struct has_fixed_size<ecat_msgs::msg::HapticCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ecat_msgs::msg::HapticCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ecat_msgs::msg::HapticCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ECAT_MSGS__MSG__DETAIL__HAPTIC_CMD__TRAITS_HPP_
