// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ecat_msgs:msg/HapticCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ecat_msgs/msg/detail/haptic_cmd__rosidl_typesupport_introspection_c.h"
#include "ecat_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ecat_msgs/msg/detail/haptic_cmd__functions.h"
#include "ecat_msgs/msg/detail/haptic_cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void HapticCmd__rosidl_typesupport_introspection_c__HapticCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ecat_msgs__msg__HapticCmd__init(message_memory);
}

void HapticCmd__rosidl_typesupport_introspection_c__HapticCmd_fini_function(void * message_memory)
{
  ecat_msgs__msg__HapticCmd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember HapticCmd__rosidl_typesupport_introspection_c__HapticCmd_message_member_array[2] = {
  {
    "array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(ecat_msgs__msg__HapticCmd, array),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "btn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(ecat_msgs__msg__HapticCmd, btn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HapticCmd__rosidl_typesupport_introspection_c__HapticCmd_message_members = {
  "ecat_msgs__msg",  // message namespace
  "HapticCmd",  // message name
  2,  // number of fields
  sizeof(ecat_msgs__msg__HapticCmd),
  HapticCmd__rosidl_typesupport_introspection_c__HapticCmd_message_member_array,  // message members
  HapticCmd__rosidl_typesupport_introspection_c__HapticCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  HapticCmd__rosidl_typesupport_introspection_c__HapticCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HapticCmd__rosidl_typesupport_introspection_c__HapticCmd_message_type_support_handle = {
  0,
  &HapticCmd__rosidl_typesupport_introspection_c__HapticCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ecat_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ecat_msgs, msg, HapticCmd)() {
  if (!HapticCmd__rosidl_typesupport_introspection_c__HapticCmd_message_type_support_handle.typesupport_identifier) {
    HapticCmd__rosidl_typesupport_introspection_c__HapticCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HapticCmd__rosidl_typesupport_introspection_c__HapticCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
