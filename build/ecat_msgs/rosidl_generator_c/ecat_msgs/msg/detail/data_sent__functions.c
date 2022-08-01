// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ecat_msgs:msg/DataSent.idl
// generated code does not contain a copyright notice
#include "ecat_msgs/msg/detail/data_sent__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `target_pos`
// Member `target_vel`
// Member `target_tor`
// Member `control_word`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ecat_msgs__msg__DataSent__init(ecat_msgs__msg__DataSent * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ecat_msgs__msg__DataSent__fini(msg);
    return false;
  }
  // target_pos
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->target_pos, 0)) {
    ecat_msgs__msg__DataSent__fini(msg);
    return false;
  }
  // target_vel
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->target_vel, 0)) {
    ecat_msgs__msg__DataSent__fini(msg);
    return false;
  }
  // target_tor
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->target_tor, 0)) {
    ecat_msgs__msg__DataSent__fini(msg);
    return false;
  }
  // control_word
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->control_word, 0)) {
    ecat_msgs__msg__DataSent__fini(msg);
    return false;
  }
  // op_mode
  // vel_offset
  // tor_offset
  return true;
}

void
ecat_msgs__msg__DataSent__fini(ecat_msgs__msg__DataSent * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // target_pos
  rosidl_runtime_c__int32__Sequence__fini(&msg->target_pos);
  // target_vel
  rosidl_runtime_c__int32__Sequence__fini(&msg->target_vel);
  // target_tor
  rosidl_runtime_c__int16__Sequence__fini(&msg->target_tor);
  // control_word
  rosidl_runtime_c__uint16__Sequence__fini(&msg->control_word);
  // op_mode
  // vel_offset
  // tor_offset
}

ecat_msgs__msg__DataSent *
ecat_msgs__msg__DataSent__create()
{
  ecat_msgs__msg__DataSent * msg = (ecat_msgs__msg__DataSent *)malloc(sizeof(ecat_msgs__msg__DataSent));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ecat_msgs__msg__DataSent));
  bool success = ecat_msgs__msg__DataSent__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ecat_msgs__msg__DataSent__destroy(ecat_msgs__msg__DataSent * msg)
{
  if (msg) {
    ecat_msgs__msg__DataSent__fini(msg);
  }
  free(msg);
}


bool
ecat_msgs__msg__DataSent__Sequence__init(ecat_msgs__msg__DataSent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ecat_msgs__msg__DataSent * data = NULL;
  if (size) {
    data = (ecat_msgs__msg__DataSent *)calloc(size, sizeof(ecat_msgs__msg__DataSent));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ecat_msgs__msg__DataSent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ecat_msgs__msg__DataSent__fini(&data[i - 1]);
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
ecat_msgs__msg__DataSent__Sequence__fini(ecat_msgs__msg__DataSent__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ecat_msgs__msg__DataSent__fini(&array->data[i]);
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

ecat_msgs__msg__DataSent__Sequence *
ecat_msgs__msg__DataSent__Sequence__create(size_t size)
{
  ecat_msgs__msg__DataSent__Sequence * array = (ecat_msgs__msg__DataSent__Sequence *)malloc(sizeof(ecat_msgs__msg__DataSent__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ecat_msgs__msg__DataSent__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ecat_msgs__msg__DataSent__Sequence__destroy(ecat_msgs__msg__DataSent__Sequence * array)
{
  if (array) {
    ecat_msgs__msg__DataSent__Sequence__fini(array);
  }
  free(array);
}
