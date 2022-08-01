// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ecat_msgs:msg/HapticCmd.idl
// generated code does not contain a copyright notice
#include "ecat_msgs/msg/detail/haptic_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ecat_msgs__msg__HapticCmd__init(ecat_msgs__msg__HapticCmd * msg)
{
  if (!msg) {
    return false;
  }
  // array
  // btn
  return true;
}

void
ecat_msgs__msg__HapticCmd__fini(ecat_msgs__msg__HapticCmd * msg)
{
  if (!msg) {
    return;
  }
  // array
  // btn
}

ecat_msgs__msg__HapticCmd *
ecat_msgs__msg__HapticCmd__create()
{
  ecat_msgs__msg__HapticCmd * msg = (ecat_msgs__msg__HapticCmd *)malloc(sizeof(ecat_msgs__msg__HapticCmd));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ecat_msgs__msg__HapticCmd));
  bool success = ecat_msgs__msg__HapticCmd__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ecat_msgs__msg__HapticCmd__destroy(ecat_msgs__msg__HapticCmd * msg)
{
  if (msg) {
    ecat_msgs__msg__HapticCmd__fini(msg);
  }
  free(msg);
}


bool
ecat_msgs__msg__HapticCmd__Sequence__init(ecat_msgs__msg__HapticCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ecat_msgs__msg__HapticCmd * data = NULL;
  if (size) {
    data = (ecat_msgs__msg__HapticCmd *)calloc(size, sizeof(ecat_msgs__msg__HapticCmd));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ecat_msgs__msg__HapticCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ecat_msgs__msg__HapticCmd__fini(&data[i - 1]);
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
ecat_msgs__msg__HapticCmd__Sequence__fini(ecat_msgs__msg__HapticCmd__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ecat_msgs__msg__HapticCmd__fini(&array->data[i]);
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

ecat_msgs__msg__HapticCmd__Sequence *
ecat_msgs__msg__HapticCmd__Sequence__create(size_t size)
{
  ecat_msgs__msg__HapticCmd__Sequence * array = (ecat_msgs__msg__HapticCmd__Sequence *)malloc(sizeof(ecat_msgs__msg__HapticCmd__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ecat_msgs__msg__HapticCmd__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ecat_msgs__msg__HapticCmd__Sequence__destroy(ecat_msgs__msg__HapticCmd__Sequence * array)
{
  if (array) {
    ecat_msgs__msg__HapticCmd__Sequence__fini(array);
  }
  free(array);
}
