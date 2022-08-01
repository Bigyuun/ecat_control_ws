// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ecat_msgs:msg/GuiButtonData.idl
// generated code does not contain a copyright notice
#include "ecat_msgs/msg/detail/gui_button_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ecat_msgs/msg/detail/gui_button_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace ecat_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ecat_msgs
cdr_serialize(
  const ecat_msgs::msg::GuiButtonData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: b_init_ecat
  cdr << ros_message.b_init_ecat;
  // Member: b_reinit_ecat
  cdr << ros_message.b_reinit_ecat;
  // Member: b_enable_drives
  cdr << ros_message.b_enable_drives;
  // Member: b_disable_drives
  cdr << ros_message.b_disable_drives;
  // Member: b_enable_cyclic_pos
  cdr << ros_message.b_enable_cyclic_pos;
  // Member: b_enable_cyclic_vel
  cdr << ros_message.b_enable_cyclic_vel;
  // Member: b_enable_vel
  cdr << ros_message.b_enable_vel;
  // Member: b_enable_pos
  cdr << ros_message.b_enable_pos;
  // Member: b_enter_cyclic_pdo
  cdr << ros_message.b_enter_cyclic_pdo;
  // Member: b_emergency_mode
  cdr << ros_message.b_emergency_mode;
  // Member: b_send
  cdr << ros_message.b_send;
  // Member: b_stop_cyclic_pdo
  cdr << ros_message.b_stop_cyclic_pdo;
  // Member: spn_target_values
  {
    cdr << ros_message.spn_target_values;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ecat_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ecat_msgs::msg::GuiButtonData & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: b_init_ecat
  cdr >> ros_message.b_init_ecat;

  // Member: b_reinit_ecat
  cdr >> ros_message.b_reinit_ecat;

  // Member: b_enable_drives
  cdr >> ros_message.b_enable_drives;

  // Member: b_disable_drives
  cdr >> ros_message.b_disable_drives;

  // Member: b_enable_cyclic_pos
  cdr >> ros_message.b_enable_cyclic_pos;

  // Member: b_enable_cyclic_vel
  cdr >> ros_message.b_enable_cyclic_vel;

  // Member: b_enable_vel
  cdr >> ros_message.b_enable_vel;

  // Member: b_enable_pos
  cdr >> ros_message.b_enable_pos;

  // Member: b_enter_cyclic_pdo
  cdr >> ros_message.b_enter_cyclic_pdo;

  // Member: b_emergency_mode
  cdr >> ros_message.b_emergency_mode;

  // Member: b_send
  cdr >> ros_message.b_send;

  // Member: b_stop_cyclic_pdo
  cdr >> ros_message.b_stop_cyclic_pdo;

  // Member: spn_target_values
  {
    cdr >> ros_message.spn_target_values;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ecat_msgs
get_serialized_size(
  const ecat_msgs::msg::GuiButtonData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: b_init_ecat
  {
    size_t item_size = sizeof(ros_message.b_init_ecat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b_reinit_ecat
  {
    size_t item_size = sizeof(ros_message.b_reinit_ecat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b_enable_drives
  {
    size_t item_size = sizeof(ros_message.b_enable_drives);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b_disable_drives
  {
    size_t item_size = sizeof(ros_message.b_disable_drives);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b_enable_cyclic_pos
  {
    size_t item_size = sizeof(ros_message.b_enable_cyclic_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b_enable_cyclic_vel
  {
    size_t item_size = sizeof(ros_message.b_enable_cyclic_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b_enable_vel
  {
    size_t item_size = sizeof(ros_message.b_enable_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b_enable_pos
  {
    size_t item_size = sizeof(ros_message.b_enable_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b_enter_cyclic_pdo
  {
    size_t item_size = sizeof(ros_message.b_enter_cyclic_pdo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b_emergency_mode
  {
    size_t item_size = sizeof(ros_message.b_emergency_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b_send
  {
    size_t item_size = sizeof(ros_message.b_send);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b_stop_cyclic_pdo
  {
    size_t item_size = sizeof(ros_message.b_stop_cyclic_pdo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: spn_target_values
  {
    size_t array_size = ros_message.spn_target_values.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.spn_target_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ecat_msgs
max_serialized_size_GuiButtonData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: b_init_ecat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: b_reinit_ecat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: b_enable_drives
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: b_disable_drives
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: b_enable_cyclic_pos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: b_enable_cyclic_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: b_enable_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: b_enable_pos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: b_enter_cyclic_pdo
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: b_emergency_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: b_send
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: b_stop_cyclic_pdo
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: spn_target_values
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

static bool _GuiButtonData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ecat_msgs::msg::GuiButtonData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GuiButtonData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ecat_msgs::msg::GuiButtonData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GuiButtonData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ecat_msgs::msg::GuiButtonData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GuiButtonData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GuiButtonData(full_bounded, 0);
}

static message_type_support_callbacks_t _GuiButtonData__callbacks = {
  "ecat_msgs::msg",
  "GuiButtonData",
  _GuiButtonData__cdr_serialize,
  _GuiButtonData__cdr_deserialize,
  _GuiButtonData__get_serialized_size,
  _GuiButtonData__max_serialized_size
};

static rosidl_message_type_support_t _GuiButtonData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GuiButtonData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ecat_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ecat_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ecat_msgs::msg::GuiButtonData>()
{
  return &ecat_msgs::msg::typesupport_fastrtps_cpp::_GuiButtonData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ecat_msgs, msg, GuiButtonData)() {
  return &ecat_msgs::msg::typesupport_fastrtps_cpp::_GuiButtonData__handle;
}

#ifdef __cplusplus
}
#endif
