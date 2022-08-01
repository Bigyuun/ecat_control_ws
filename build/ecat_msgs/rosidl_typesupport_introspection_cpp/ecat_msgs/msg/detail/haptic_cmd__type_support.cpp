// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ecat_msgs:msg/HapticCmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ecat_msgs/msg/detail/haptic_cmd__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ecat_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void HapticCmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ecat_msgs::msg::HapticCmd(_init);
}

void HapticCmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ecat_msgs::msg::HapticCmd *>(message_memory);
  typed_message->~HapticCmd();
}

size_t size_function__HapticCmd__array(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__HapticCmd__array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__HapticCmd__array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

size_t size_function__HapticCmd__btn(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__HapticCmd__btn(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__HapticCmd__btn(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HapticCmd_message_member_array[2] = {
  {
    "array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(ecat_msgs::msg::HapticCmd, array),  // bytes offset in struct
    nullptr,  // default value
    size_function__HapticCmd__array,  // size() function pointer
    get_const_function__HapticCmd__array,  // get_const(index) function pointer
    get_function__HapticCmd__array,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "btn",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(ecat_msgs::msg::HapticCmd, btn),  // bytes offset in struct
    nullptr,  // default value
    size_function__HapticCmd__btn,  // size() function pointer
    get_const_function__HapticCmd__btn,  // get_const(index) function pointer
    get_function__HapticCmd__btn,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HapticCmd_message_members = {
  "ecat_msgs::msg",  // message namespace
  "HapticCmd",  // message name
  2,  // number of fields
  sizeof(ecat_msgs::msg::HapticCmd),
  HapticCmd_message_member_array,  // message members
  HapticCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  HapticCmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HapticCmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HapticCmd_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ecat_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ecat_msgs::msg::HapticCmd>()
{
  return &::ecat_msgs::msg::rosidl_typesupport_introspection_cpp::HapticCmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ecat_msgs, msg, HapticCmd)() {
  return &::ecat_msgs::msg::rosidl_typesupport_introspection_cpp::HapticCmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
