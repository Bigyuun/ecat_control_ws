// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ecat_msgs:msg/DataReceived.idl
// generated code does not contain a copyright notice
#include "ecat_msgs/msg/detail/data_received__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `slave_com_status`
// Member `actual_pos`
// Member `actual_vel`
// Member `actual_tor`
// Member `status_word`
// Member `op_mode_display`
// Member `error_code`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ecat_msgs__msg__DataReceived__init(ecat_msgs__msg__DataReceived * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ecat_msgs__msg__DataReceived__fini(msg);
    return false;
  }
  // com_status
  // slave_com_status
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->slave_com_status, 0)) {
    ecat_msgs__msg__DataReceived__fini(msg);
    return false;
  }
  // actual_pos
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->actual_pos, 0)) {
    ecat_msgs__msg__DataReceived__fini(msg);
    return false;
  }
  // actual_vel
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->actual_vel, 0)) {
    ecat_msgs__msg__DataReceived__fini(msg);
    return false;
  }
  // actual_tor
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->actual_tor, 0)) {
    ecat_msgs__msg__DataReceived__fini(msg);
    return false;
  }
  // status_word
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->status_word, 0)) {
    ecat_msgs__msg__DataReceived__fini(msg);
    return false;
  }
  // op_mode_display
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->op_mode_display, 0)) {
    ecat_msgs__msg__DataReceived__fini(msg);
    return false;
  }
  // error_code
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->error_code, 0)) {
    ecat_msgs__msg__DataReceived__fini(msg);
    return false;
  }
  // current_lifecycle_state
  // left_limit_switch_val
  // right_limit_switch_val
  // emergency_switch_val
  // period_ns
  // jitter_ns
  // exec_ns
  return true;
}

void
ecat_msgs__msg__DataReceived__fini(ecat_msgs__msg__DataReceived * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // com_status
  // slave_com_status
  rosidl_runtime_c__uint8__Sequence__fini(&msg->slave_com_status);
  // actual_pos
  rosidl_runtime_c__int32__Sequence__fini(&msg->actual_pos);
  // actual_vel
  rosidl_runtime_c__int32__Sequence__fini(&msg->actual_vel);
  // actual_tor
  rosidl_runtime_c__int16__Sequence__fini(&msg->actual_tor);
  // status_word
  rosidl_runtime_c__uint16__Sequence__fini(&msg->status_word);
  // op_mode_display
  rosidl_runtime_c__uint8__Sequence__fini(&msg->op_mode_display);
  // error_code
  rosidl_runtime_c__uint16__Sequence__fini(&msg->error_code);
  // current_lifecycle_state
  // left_limit_switch_val
  // right_limit_switch_val
  // emergency_switch_val
  // period_ns
  // jitter_ns
  // exec_ns
}

ecat_msgs__msg__DataReceived *
ecat_msgs__msg__DataReceived__create()
{
  ecat_msgs__msg__DataReceived * msg = (ecat_msgs__msg__DataReceived *)malloc(sizeof(ecat_msgs__msg__DataReceived));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ecat_msgs__msg__DataReceived));
  bool success = ecat_msgs__msg__DataReceived__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ecat_msgs__msg__DataReceived__destroy(ecat_msgs__msg__DataReceived * msg)
{
  if (msg) {
    ecat_msgs__msg__DataReceived__fini(msg);
  }
  free(msg);
}


bool
ecat_msgs__msg__DataReceived__Sequence__init(ecat_msgs__msg__DataReceived__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ecat_msgs__msg__DataReceived * data = NULL;
  if (size) {
    data = (ecat_msgs__msg__DataReceived *)calloc(size, sizeof(ecat_msgs__msg__DataReceived));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ecat_msgs__msg__DataReceived__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ecat_msgs__msg__DataReceived__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ecat_msgs__msg__DataReceived__Sequence__fini(ecat_msgs__msg__DataReceived__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ecat_msgs__msg__DataReceived__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ecat_msgs__msg__DataReceived__Sequence *
ecat_msgs__msg__DataReceived__Sequence__create(size_t size)
{
  ecat_msgs__msg__DataReceived__Sequence * array = (ecat_msgs__msg__DataReceived__Sequence *)malloc(sizeof(ecat_msgs__msg__DataReceived__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ecat_msgs__msg__DataReceived__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ecat_msgs__msg__DataReceived__Sequence__destroy(ecat_msgs__msg__DataReceived__Sequence * array)
{
  if (array) {
    ecat_msgs__msg__DataReceived__Sequence__fini(array);
  }
  free(array);
}
