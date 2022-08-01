// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ecat_msgs:msg/GuiButtonData.idl
// generated code does not contain a copyright notice
#include "ecat_msgs/msg/detail/gui_button_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `spn_target_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ecat_msgs__msg__GuiButtonData__init(ecat_msgs__msg__GuiButtonData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ecat_msgs__msg__GuiButtonData__fini(msg);
    return false;
  }
  // b_init_ecat
  // b_reinit_ecat
  // b_enable_drives
  // b_disable_drives
  // b_enable_cyclic_pos
  // b_enable_cyclic_vel
  // b_enable_vel
  // b_enable_pos
  // b_enter_cyclic_pdo
  // b_emergency_mode
  // b_send
  // b_stop_cyclic_pdo
  // spn_target_values
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->spn_target_values, 0)) {
    ecat_msgs__msg__GuiButtonData__fini(msg);
    return false;
  }
  return true;
}

void
ecat_msgs__msg__GuiButtonData__fini(ecat_msgs__msg__GuiButtonData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // b_init_ecat
  // b_reinit_ecat
  // b_enable_drives
  // b_disable_drives
  // b_enable_cyclic_pos
  // b_enable_cyclic_vel
  // b_enable_vel
  // b_enable_pos
  // b_enter_cyclic_pdo
  // b_emergency_mode
  // b_send
  // b_stop_cyclic_pdo
  // spn_target_values
  rosidl_runtime_c__int32__Sequence__fini(&msg->spn_target_values);
}

ecat_msgs__msg__GuiButtonData *
ecat_msgs__msg__GuiButtonData__create()
{
  ecat_msgs__msg__GuiButtonData * msg = (ecat_msgs__msg__GuiButtonData *)malloc(sizeof(ecat_msgs__msg__GuiButtonData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ecat_msgs__msg__GuiButtonData));
  bool success = ecat_msgs__msg__GuiButtonData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ecat_msgs__msg__GuiButtonData__destroy(ecat_msgs__msg__GuiButtonData * msg)
{
  if (msg) {
    ecat_msgs__msg__GuiButtonData__fini(msg);
  }
  free(msg);
}


bool
ecat_msgs__msg__GuiButtonData__Sequence__init(ecat_msgs__msg__GuiButtonData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ecat_msgs__msg__GuiButtonData * data = NULL;
  if (size) {
    data = (ecat_msgs__msg__GuiButtonData *)calloc(size, sizeof(ecat_msgs__msg__GuiButtonData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ecat_msgs__msg__GuiButtonData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ecat_msgs__msg__GuiButtonData__fini(&data[i - 1]);
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
ecat_msgs__msg__GuiButtonData__Sequence__fini(ecat_msgs__msg__GuiButtonData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ecat_msgs__msg__GuiButtonData__fini(&array->data[i]);
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

ecat_msgs__msg__GuiButtonData__Sequence *
ecat_msgs__msg__GuiButtonData__Sequence__create(size_t size)
{
  ecat_msgs__msg__GuiButtonData__Sequence * array = (ecat_msgs__msg__GuiButtonData__Sequence *)malloc(sizeof(ecat_msgs__msg__GuiButtonData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ecat_msgs__msg__GuiButtonData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ecat_msgs__msg__GuiButtonData__Sequence__destroy(ecat_msgs__msg__GuiButtonData__Sequence * array)
{
  if (array) {
    ecat_msgs__msg__GuiButtonData__Sequence__fini(array);
  }
  free(array);
}
