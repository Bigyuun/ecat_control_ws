// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ecat_msgs:msg/DataSent.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ecat_msgs/msg/detail/data_sent__struct.hpp"
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

void DataSent_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ecat_msgs::msg::DataSent(_init);
}

void DataSent_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ecat_msgs::msg::DataSent *>(message_memory);
  typed_message->~DataSent();
}

size_t size_function__DataSent__target_pos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DataSent__target_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__DataSent__target_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__DataSent__target_pos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DataSent__target_vel(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DataSent__target_vel(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__DataSent__target_vel(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__DataSent__target_vel(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DataSent__target_tor(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DataSent__target_tor(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__DataSent__target_tor(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void resize_function__DataSent__target_tor(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DataSent__control_word(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DataSent__control_word(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__DataSent__control_word(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void resize_function__DataSent__control_word(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DataSent_message_member_array[8] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ecat_msgs::msg::DataSent, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ecat_msgs::msg::DataSent, target_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__DataSent__target_pos,  // size() function pointer
    get_const_function__DataSent__target_pos,  // get_const(index) function pointer
    get_function__DataSent__target_pos,  // get(index) function pointer
    resize_function__DataSent__target_pos  // resize(index) function pointer
  },
  {
    "target_vel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ecat_msgs::msg::DataSent, target_vel),  // bytes offset in struct
    nullptr,  // default value
    size_function__DataSent__target_vel,  // size() function pointer
    get_const_function__DataSent__target_vel,  // get_const(index) function pointer
    get_function__DataSent__target_vel,  // get(index) function pointer
    resize_function__DataSent__target_vel  // resize(index) function pointer
  },
  {
    "target_tor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ecat_msgs::msg::DataSent, target_tor),  // bytes offset in struct
    nullptr,  // default value
    size_function__DataSent__target_tor,  // size() function pointer
    get_const_function__DataSent__target_tor,  // get_const(index) function pointer
    get_function__DataSent__target_tor,  // get(index) function pointer
    resize_function__DataSent__target_tor  // resize(index) function pointer
  },
  {
    "control_word",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ecat_msgs::msg::DataSent, control_word),  // bytes offset in struct
    nullptr,  // default value
    size_function__DataSent__control_word,  // size() function pointer
    get_const_function__DataSent__control_word,  // get_const(index) function pointer
    get_function__DataSent__control_word,  // get(index) function pointer
    resize_function__DataSent__control_word  // resize(index) function pointer
  },
  {
    "op_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ecat_msgs::msg::DataSent, op_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vel_offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ecat_msgs::msg::DataSent, vel_offset),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tor_offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ecat_msgs::msg::DataSent, tor_offset),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DataSent_message_members = {
  "ecat_msgs::msg",  // message namespace
  "DataSent",  // message name
  8,  // number of fields
  sizeof(ecat_msgs::msg::DataSent),
  DataSent_message_member_array,  // message members
  DataSent_init_function,  // function to initialize message memory (memory has to be allocated)
  DataSent_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DataSent_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DataSent_message_members,
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
get_message_type_support_handle<ecat_msgs::msg::DataSent>()
{
  return &::ecat_msgs::msg::rosidl_typesupport_introspection_cpp::DataSent_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ecat_msgs, msg, DataSent)() {
  return &::ecat_msgs::msg::rosidl_typesupport_introspection_cpp::DataSent_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
