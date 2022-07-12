// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ecat_msgs:msg/DataReceived.idl
// generated code does not contain a copyright notice

#ifndef ECAT_MSGS__MSG__DETAIL__DATA_RECEIVED__STRUCT_H_
#define ECAT_MSGS__MSG__DETAIL__DATA_RECEIVED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'slave_com_status'
// Member 'actual_pos'
// Member 'actual_vel'
// Member 'actual_tor'
// Member 'status_word'
// Member 'op_mode_display'
// Member 'error_code'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/DataReceived in the package ecat_msgs.
typedef struct ecat_msgs__msg__DataReceived
{
  std_msgs__msg__Header header;
  uint8_t com_status;
  rosidl_runtime_c__uint8__Sequence slave_com_status;
  rosidl_runtime_c__int32__Sequence actual_pos;
  rosidl_runtime_c__int32__Sequence actual_vel;
  rosidl_runtime_c__int16__Sequence actual_tor;
  rosidl_runtime_c__uint16__Sequence status_word;
  rosidl_runtime_c__uint8__Sequence op_mode_display;
  rosidl_runtime_c__uint16__Sequence error_code;
  uint8_t current_lifecycle_state;
  uint8_t left_limit_switch_val;
  uint8_t right_limit_switch_val;
  uint8_t emergency_switch_val;
  uint32_t period_ns;
  uint32_t jitter_ns;
  uint32_t exec_ns;
} ecat_msgs__msg__DataReceived;

// Struct for a sequence of ecat_msgs__msg__DataReceived.
typedef struct ecat_msgs__msg__DataReceived__Sequence
{
  ecat_msgs__msg__DataReceived * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ecat_msgs__msg__DataReceived__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ECAT_MSGS__MSG__DETAIL__DATA_RECEIVED__STRUCT_H_
