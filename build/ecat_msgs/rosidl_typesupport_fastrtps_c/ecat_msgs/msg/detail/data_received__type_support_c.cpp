// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ecat_msgs:msg/DataReceived.idl
// generated code does not contain a copyright notice
#include "ecat_msgs/msg/detail/data_received__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ecat_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ecat_msgs/msg/detail/data_received__struct.h"
#include "ecat_msgs/msg/detail/data_received__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // actual_pos, actual_tor, actual_vel, error_code, op_mode_display, slave_com_status, status_word
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // actual_pos, actual_tor, actual_vel, error_code, op_mode_display, slave_com_status, status_word
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ecat_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ecat_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ecat_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _DataReceived__ros_msg_type = ecat_msgs__msg__DataReceived;

static bool _DataReceived__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DataReceived__ros_msg_type * ros_message = static_cast<const _DataReceived__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: com_status
  {
    cdr << ros_message->com_status;
  }

  // Field name: slave_com_status
  {
    size_t size = ros_message->slave_com_status.size;
    auto array_ptr = ros_message->slave_com_status.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: actual_pos
  {
    size_t size = ros_message->actual_pos.size;
    auto array_ptr = ros_message->actual_pos.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: actual_vel
  {
    size_t size = ros_message->actual_vel.size;
    auto array_ptr = ros_message->actual_vel.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: actual_tor
  {
    size_t size = ros_message->actual_tor.size;
    auto array_ptr = ros_message->actual_tor.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: status_word
  {
    size_t size = ros_message->status_word.size;
    auto array_ptr = ros_message->status_word.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: op_mode_display
  {
    size_t size = ros_message->op_mode_display.size;
    auto array_ptr = ros_message->op_mode_display.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: error_code
  {
    size_t size = ros_message->error_code.size;
    auto array_ptr = ros_message->error_code.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: current_lifecycle_state
  {
    cdr << ros_message->current_lifecycle_state;
  }

  // Field name: left_limit_switch_val
  {
    cdr << ros_message->left_limit_switch_val;
  }

  // Field name: right_limit_switch_val
  {
    cdr << ros_message->right_limit_switch_val;
  }

  // Field name: emergency_switch_val
  {
    cdr << ros_message->emergency_switch_val;
  }

  // Field name: period_ns
  {
    cdr << ros_message->period_ns;
  }

  // Field name: jitter_ns
  {
    cdr << ros_message->jitter_ns;
  }

  // Field name: exec_ns
  {
    cdr << ros_message->exec_ns;
  }

  return true;
}

static bool _DataReceived__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DataReceived__ros_msg_type * ros_message = static_cast<_DataReceived__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: com_status
  {
    cdr >> ros_message->com_status;
  }

  // Field name: slave_com_status
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->slave_com_status.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->slave_com_status);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->slave_com_status, size)) {
      return "failed to create array for field 'slave_com_status'";
    }
    auto array_ptr = ros_message->slave_com_status.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: actual_pos
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->actual_pos.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->actual_pos);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->actual_pos, size)) {
      return "failed to create array for field 'actual_pos'";
    }
    auto array_ptr = ros_message->actual_pos.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: actual_vel
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->actual_vel.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->actual_vel);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->actual_vel, size)) {
      return "failed to create array for field 'actual_vel'";
    }
    auto array_ptr = ros_message->actual_vel.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: actual_tor
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->actual_tor.data) {
      rosidl_runtime_c__int16__Sequence__fini(&ros_message->actual_tor);
    }
    if (!rosidl_runtime_c__int16__Sequence__init(&ros_message->actual_tor, size)) {
      return "failed to create array for field 'actual_tor'";
    }
    auto array_ptr = ros_message->actual_tor.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: status_word
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->status_word.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->status_word);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->status_word, size)) {
      return "failed to create array for field 'status_word'";
    }
    auto array_ptr = ros_message->status_word.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: op_mode_display
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->op_mode_display.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->op_mode_display);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->op_mode_display, size)) {
      return "failed to create array for field 'op_mode_display'";
    }
    auto array_ptr = ros_message->op_mode_display.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: error_code
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->error_code.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->error_code);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->error_code, size)) {
      return "failed to create array for field 'error_code'";
    }
    auto array_ptr = ros_message->error_code.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: current_lifecycle_state
  {
    cdr >> ros_message->current_lifecycle_state;
  }

  // Field name: left_limit_switch_val
  {
    cdr >> ros_message->left_limit_switch_val;
  }

  // Field name: right_limit_switch_val
  {
    cdr >> ros_message->right_limit_switch_val;
  }

  // Field name: emergency_switch_val
  {
    cdr >> ros_message->emergency_switch_val;
  }

  // Field name: period_ns
  {
    cdr >> ros_message->period_ns;
  }

  // Field name: jitter_ns
  {
    cdr >> ros_message->jitter_ns;
  }

  // Field name: exec_ns
  {
    cdr >> ros_message->exec_ns;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ecat_msgs
size_t get_serialized_size_ecat_msgs__msg__DataReceived(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DataReceived__ros_msg_type * ros_message = static_cast<const _DataReceived__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name com_status
  {
    size_t item_size = sizeof(ros_message->com_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name slave_com_status
  {
    size_t array_size = ros_message->slave_com_status.size;
    auto array_ptr = ros_message->slave_com_status.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actual_pos
  {
    size_t array_size = ros_message->actual_pos.size;
    auto array_ptr = ros_message->actual_pos.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actual_vel
  {
    size_t array_size = ros_message->actual_vel.size;
    auto array_ptr = ros_message->actual_vel.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actual_tor
  {
    size_t array_size = ros_message->actual_tor.size;
    auto array_ptr = ros_message->actual_tor.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_word
  {
    size_t array_size = ros_message->status_word.size;
    auto array_ptr = ros_message->status_word.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name op_mode_display
  {
    size_t array_size = ros_message->op_mode_display.size;
    auto array_ptr = ros_message->op_mode_display.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_code
  {
    size_t array_size = ros_message->error_code.size;
    auto array_ptr = ros_message->error_code.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_lifecycle_state
  {
    size_t item_size = sizeof(ros_message->current_lifecycle_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_limit_switch_val
  {
    size_t item_size = sizeof(ros_message->left_limit_switch_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_limit_switch_val
  {
    size_t item_size = sizeof(ros_message->right_limit_switch_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emergency_switch_val
  {
    size_t item_size = sizeof(ros_message->emergency_switch_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name period_ns
  {
    size_t item_size = sizeof(ros_message->period_ns);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name jitter_ns
  {
    size_t item_size = sizeof(ros_message->jitter_ns);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name exec_ns
  {
    size_t item_size = sizeof(ros_message->exec_ns);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DataReceived__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ecat_msgs__msg__DataReceived(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ecat_msgs
size_t max_serialized_size_ecat_msgs__msg__DataReceived(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: com_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: slave_com_status
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: actual_pos
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: actual_vel
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: actual_tor
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: status_word
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: op_mode_display
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error_code
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: current_lifecycle_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_limit_switch_val
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right_limit_switch_val
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: emergency_switch_val
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: period_ns
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: jitter_ns
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: exec_ns
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _DataReceived__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ecat_msgs__msg__DataReceived(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DataReceived = {
  "ecat_msgs::msg",
  "DataReceived",
  _DataReceived__cdr_serialize,
  _DataReceived__cdr_deserialize,
  _DataReceived__get_serialized_size,
  _DataReceived__max_serialized_size
};

static rosidl_message_type_support_t _DataReceived__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DataReceived,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ecat_msgs, msg, DataReceived)() {
  return &_DataReceived__type_support;
}

#if defined(__cplusplus)
}
#endif
