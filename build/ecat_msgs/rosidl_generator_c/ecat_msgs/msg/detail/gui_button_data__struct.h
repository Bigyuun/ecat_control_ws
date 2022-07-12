// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ecat_msgs:msg/GuiButtonData.idl
// generated code does not contain a copyright notice

#ifndef ECAT_MSGS__MSG__DETAIL__GUI_BUTTON_DATA__STRUCT_H_
#define ECAT_MSGS__MSG__DETAIL__GUI_BUTTON_DATA__STRUCT_H_

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
// Member 'spn_target_values'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/GuiButtonData in the package ecat_msgs.
typedef struct ecat_msgs__msg__GuiButtonData
{
  std_msgs__msg__Header header;
  uint8_t b_init_ecat;
  uint8_t b_reinit_ecat;
  uint8_t b_enable_drives;
  uint8_t b_disable_drives;
  uint8_t b_enable_cyclic_pos;
  uint8_t b_enable_cyclic_vel;
  uint8_t b_enable_vel;
  uint8_t b_enable_pos;
  uint8_t b_enter_cyclic_pdo;
  uint8_t b_emergency_mode;
  uint8_t b_send;
  uint8_t b_stop_cyclic_pdo;
  rosidl_runtime_c__int32__Sequence spn_target_values;
} ecat_msgs__msg__GuiButtonData;

// Struct for a sequence of ecat_msgs__msg__GuiButtonData.
typedef struct ecat_msgs__msg__GuiButtonData__Sequence
{
  ecat_msgs__msg__GuiButtonData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ecat_msgs__msg__GuiButtonData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ECAT_MSGS__MSG__DETAIL__GUI_BUTTON_DATA__STRUCT_H_
