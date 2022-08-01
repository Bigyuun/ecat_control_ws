// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ecat_msgs:msg/DataSent.idl
// generated code does not contain a copyright notice

#ifndef ECAT_MSGS__MSG__DETAIL__DATA_SENT__STRUCT_H_
#define ECAT_MSGS__MSG__DETAIL__DATA_SENT__STRUCT_H_

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
// Member 'target_pos'
// Member 'target_vel'
// Member 'target_tor'
// Member 'control_word'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/DataSent in the package ecat_msgs.
typedef struct ecat_msgs__msg__DataSent
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__int32__Sequence target_pos;
  rosidl_runtime_c__int32__Sequence target_vel;
  rosidl_runtime_c__int16__Sequence target_tor;
  rosidl_runtime_c__uint16__Sequence control_word;
  uint8_t op_mode;
  int32_t vel_offset;
  int16_t tor_offset;
} ecat_msgs__msg__DataSent;

// Struct for a sequence of ecat_msgs__msg__DataSent.
typedef struct ecat_msgs__msg__DataSent__Sequence
{
  ecat_msgs__msg__DataSent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ecat_msgs__msg__DataSent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ECAT_MSGS__MSG__DETAIL__DATA_SENT__STRUCT_H_
