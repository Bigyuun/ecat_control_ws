// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ecat_msgs:msg/DataReceived.idl
// generated code does not contain a copyright notice
#include "ecat_msgs/msg/detail/data_received__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ecat_msgs/msg/detail/data_received__struct.hpp"

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
  const ecat_msgs::msg::DataReceived & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: com_status
  cdr << ros_message.com_status;
  // Member: slave_com_status
  {
    cdr << ros_message.slave_com_status;
  }
  // Member: actual_pos
  {
    cdr << ros_message.actual_pos;
  }
  // Member: actual_vel
  {
    cdr << ros_message.actual_vel;
  }
  // Member: actual_tor
  {
    cdr << ros_message.actual_tor;
  }
  // Member: status_word
  {
    cdr << ros_message.status_word;
  }
  // Member: op_mode_display
  {
    cdr << ros_message.op_mode_display;
  }
  // Member: error_code
  {
    cdr << ros_message.error_code;
  }
  // Member: current_lifecycle_state
  cdr << ros_message.current_lifecycle_state;
  // Member: left_limit_switch_val
  cdr << ros_message.left_limit_switch_val;
  // Member: right_limit_switch_val
  cdr << ros_message.right_limit_switch_val;
  // Member: emergency_switch_val
  cdr << ros_message.emergency_switch_val;
  // Member: period_ns
  cdr << ros_message.period_ns;
  // Member: jitter_ns
  cdr << ros_message.jitter_ns;
  // Member: exec_ns
  cdr << ros_message.exec_ns;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ecat_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ecat_msgs::msg::DataReceived & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: com_status
  cdr >> ros_message.com_status;

  // Member: slave_com_status
  {
    cdr >> ros_message.slave_com_status;
  }

  // Member: actual_pos
  {
    cdr >> ros_message.actual_pos;
  }

  // Member: actual_vel
  {
    cdr >> ros_message.actual_vel;
  }

  // Member: actual_tor
  {
    cdr >> ros_message.actual_tor;
  }

  // Member: status_word
  {
    cdr >> ros_message.status_word;
  }

  // Member: op_mode_display
  {
    cdr >> ros_message.op_mode_display;
  }

  // Member: error_code
  {
    cdr >> ros_message.error_code;
  }

  // Member: current_lifecycle_state
  cdr >> ros_message.current_lifecycle_state;

  // Member: left_limit_switch_val
  cdr >> ros_message.left_limit_switch_val;

  // Member: right_limit_switch_val
  cdr >> ros_message.right_limit_switch_val;

  // Member: emergency_switch_val
  cdr >> ros_message.emergency_switch_val;

  // Member: period_ns
  cdr >> ros_message.period_ns;

  // Member: jitter_ns
  cdr >> ros_message.jitter_ns;

  // Member: exec_ns
  cdr >> ros_message.exec_ns;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ecat_msgs
get_serialized_size(
  const ecat_msgs::msg::DataReceived & ros_message,
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
  // Member: com_status
  {
    size_t item_size = sizeof(ros_message.com_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: slave_com_status
  {
    size_t array_size = ros_message.slave_com_status.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.slave_com_status[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: actual_pos
  {
    size_t array_size = ros_message.actual_pos.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.actual_pos[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: actual_vel
  {
    size_t array_size = ros_message.actual_vel.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.actual_vel[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: actual_tor
  {
    size_t array_size = ros_message.actual_tor.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.actual_tor[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_word
  {
    size_t array_size = ros_message.status_word.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.status_word[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: op_mode_display
  {
    size_t array_size = ros_message.op_mode_display.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.op_mode_display[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_code
  {
    size_t array_size = ros_message.error_code.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.error_code[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_lifecycle_state
  {
    size_t item_size = sizeof(ros_message.current_lifecycle_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_limit_switch_val
  {
    size_t item_size = sizeof(ros_message.left_limit_switch_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_limit_switch_val
  {
    size_t item_size = sizeof(ros_message.right_limit_switch_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: emergency_switch_val
  {
    size_t item_size = sizeof(ros_message.emergency_switch_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: period_ns
  {
    size_t item_size = sizeof(ros_message.period_ns);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: jitter_ns
  {
    size_t item_size = sizeof(ros_message.jitter_ns);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: exec_ns
  {
    size_t item_size = sizeof(ros_message.exec_ns);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ecat_msgs
max_serialized_size_DataReceived(
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

  // Member: com_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: slave_com_status
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: actual_pos
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: actual_vel
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: actual_tor
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: status_word
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: op_mode_display
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: error_code
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: current_lifecycle_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left_limit_switch_val
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right_limit_switch_val
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: emergency_switch_val
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: period_ns
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: jitter_ns
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: exec_ns
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _DataReceived__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ecat_msgs::msg::DataReceived *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DataReceived__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ecat_msgs::msg::DataReceived *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DataReceived__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ecat_msgs::msg::DataReceived *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DataReceived__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DataReceived(full_bounded, 0);
}

static message_type_support_callbacks_t _DataReceived__callbacks = {
  "ecat_msgs::msg",
  "DataReceived",
  _DataReceived__cdr_serialize,
  _DataReceived__cdr_deserialize,
  _DataReceived__get_serialized_size,
  _DataReceived__max_serialized_size
};

static rosidl_message_type_support_t _DataReceived__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DataReceived__callbacks,
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
get_message_type_support_handle<ecat_msgs::msg::DataReceived>()
{
  return &ecat_msgs::msg::typesupport_fastrtps_cpp::_DataReceived__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ecat_msgs, msg, DataReceived)() {
  return &ecat_msgs::msg::typesupport_fastrtps_cpp::_DataReceived__handle;
}

#ifdef __cplusplus
}
#endif
