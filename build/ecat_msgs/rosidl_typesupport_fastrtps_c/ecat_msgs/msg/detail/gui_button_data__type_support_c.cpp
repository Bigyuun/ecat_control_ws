// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ecat_msgs:msg/GuiButtonData.idl
// generated code does not contain a copyright notice
#include "ecat_msgs/msg/detail/gui_button_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ecat_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ecat_msgs/msg/detail/gui_button_data__struct.h"
#include "ecat_msgs/msg/detail/gui_button_data__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // spn_target_values
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // spn_target_values
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


using _GuiButtonData__ros_msg_type = ecat_msgs__msg__GuiButtonData;

static bool _GuiButtonData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GuiButtonData__ros_msg_type * ros_message = static_cast<const _GuiButtonData__ros_msg_type *>(untyped_ros_message);
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

  // Field name: b_init_ecat
  {
    cdr << ros_message->b_init_ecat;
  }

  // Field name: b_reinit_ecat
  {
    cdr << ros_message->b_reinit_ecat;
  }

  // Field name: b_enable_drives
  {
    cdr << ros_message->b_enable_drives;
  }

  // Field name: b_disable_drives
  {
    cdr << ros_message->b_disable_drives;
  }

  // Field name: b_enable_cyclic_pos
  {
    cdr << ros_message->b_enable_cyclic_pos;
  }

  // Field name: b_enable_cyclic_vel
  {
    cdr << ros_message->b_enable_cyclic_vel;
  }

  // Field name: b_enable_vel
  {
    cdr << ros_message->b_enable_vel;
  }

  // Field name: b_enable_pos
  {
    cdr << ros_message->b_enable_pos;
  }

  // Field name: b_enter_cyclic_pdo
  {
    cdr << ros_message->b_enter_cyclic_pdo;
  }

  // Field name: b_emergency_mode
  {
    cdr << ros_message->b_emergency_mode;
  }

  // Field name: b_send
  {
    cdr << ros_message->b_send;
  }

  // Field name: b_stop_cyclic_pdo
  {
    cdr << ros_message->b_stop_cyclic_pdo;
  }

  // Field name: spn_target_values
  {
    size_t size = ros_message->spn_target_values.size;
    auto array_ptr = ros_message->spn_target_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _GuiButtonData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GuiButtonData__ros_msg_type * ros_message = static_cast<_GuiButtonData__ros_msg_type *>(untyped_ros_message);
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

  // Field name: b_init_ecat
  {
    cdr >> ros_message->b_init_ecat;
  }

  // Field name: b_reinit_ecat
  {
    cdr >> ros_message->b_reinit_ecat;
  }

  // Field name: b_enable_drives
  {
    cdr >> ros_message->b_enable_drives;
  }

  // Field name: b_disable_drives
  {
    cdr >> ros_message->b_disable_drives;
  }

  // Field name: b_enable_cyclic_pos
  {
    cdr >> ros_message->b_enable_cyclic_pos;
  }

  // Field name: b_enable_cyclic_vel
  {
    cdr >> ros_message->b_enable_cyclic_vel;
  }

  // Field name: b_enable_vel
  {
    cdr >> ros_message->b_enable_vel;
  }

  // Field name: b_enable_pos
  {
    cdr >> ros_message->b_enable_pos;
  }

  // Field name: b_enter_cyclic_pdo
  {
    cdr >> ros_message->b_enter_cyclic_pdo;
  }

  // Field name: b_emergency_mode
  {
    cdr >> ros_message->b_emergency_mode;
  }

  // Field name: b_send
  {
    cdr >> ros_message->b_send;
  }

  // Field name: b_stop_cyclic_pdo
  {
    cdr >> ros_message->b_stop_cyclic_pdo;
  }

  // Field name: spn_target_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->spn_target_values.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->spn_target_values);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->spn_target_values, size)) {
      return "failed to create array for field 'spn_target_values'";
    }
    auto array_ptr = ros_message->spn_target_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ecat_msgs
size_t get_serialized_size_ecat_msgs__msg__GuiButtonData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GuiButtonData__ros_msg_type * ros_message = static_cast<const _GuiButtonData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name b_init_ecat
  {
    size_t item_size = sizeof(ros_message->b_init_ecat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b_reinit_ecat
  {
    size_t item_size = sizeof(ros_message->b_reinit_ecat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b_enable_drives
  {
    size_t item_size = sizeof(ros_message->b_enable_drives);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b_disable_drives
  {
    size_t item_size = sizeof(ros_message->b_disable_drives);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b_enable_cyclic_pos
  {
    size_t item_size = sizeof(ros_message->b_enable_cyclic_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b_enable_cyclic_vel
  {
    size_t item_size = sizeof(ros_message->b_enable_cyclic_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b_enable_vel
  {
    size_t item_size = sizeof(ros_message->b_enable_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b_enable_pos
  {
    size_t item_size = sizeof(ros_message->b_enable_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b_enter_cyclic_pdo
  {
    size_t item_size = sizeof(ros_message->b_enter_cyclic_pdo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b_emergency_mode
  {
    size_t item_size = sizeof(ros_message->b_emergency_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b_send
  {
    size_t item_size = sizeof(ros_message->b_send);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b_stop_cyclic_pdo
  {
    size_t item_size = sizeof(ros_message->b_stop_cyclic_pdo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name spn_target_values
  {
    size_t array_size = ros_message->spn_target_values.size;
    auto array_ptr = ros_message->spn_target_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GuiButtonData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ecat_msgs__msg__GuiButtonData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ecat_msgs
size_t max_serialized_size_ecat_msgs__msg__GuiButtonData(
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
  // member: b_init_ecat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: b_reinit_ecat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: b_enable_drives
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: b_disable_drives
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: b_enable_cyclic_pos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: b_enable_cyclic_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: b_enable_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: b_enable_pos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: b_enter_cyclic_pdo
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: b_emergency_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: b_send
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: b_stop_cyclic_pdo
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: spn_target_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GuiButtonData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ecat_msgs__msg__GuiButtonData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GuiButtonData = {
  "ecat_msgs::msg",
  "GuiButtonData",
  _GuiButtonData__cdr_serialize,
  _GuiButtonData__cdr_deserialize,
  _GuiButtonData__get_serialized_size,
  _GuiButtonData__max_serialized_size
};

static rosidl_message_type_support_t _GuiButtonData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GuiButtonData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ecat_msgs, msg, GuiButtonData)() {
  return &_GuiButtonData__type_support;
}

#if defined(__cplusplus)
}
#endif
