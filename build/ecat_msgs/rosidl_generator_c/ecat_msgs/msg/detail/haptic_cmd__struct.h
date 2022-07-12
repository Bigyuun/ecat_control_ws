// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ecat_msgs:msg/HapticCmd.idl
// generated code does not contain a copyright notice

#ifndef ECAT_MSGS__MSG__DETAIL__HAPTIC_CMD__STRUCT_H_
#define ECAT_MSGS__MSG__DETAIL__HAPTIC_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/HapticCmd in the package ecat_msgs.
typedef struct ecat_msgs__msg__HapticCmd
{
  double array[7];
  int32_t btn[2];
} ecat_msgs__msg__HapticCmd;

// Struct for a sequence of ecat_msgs__msg__HapticCmd.
typedef struct ecat_msgs__msg__HapticCmd__Sequence
{
  ecat_msgs__msg__HapticCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ecat_msgs__msg__HapticCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ECAT_MSGS__MSG__DETAIL__HAPTIC_CMD__STRUCT_H_
