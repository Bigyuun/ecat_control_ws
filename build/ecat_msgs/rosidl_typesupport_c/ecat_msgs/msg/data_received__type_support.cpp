// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ecat_msgs:msg/DataReceived.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ecat_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "ecat_msgs/msg/detail/data_received__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ecat_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _DataReceived_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DataReceived_type_support_ids_t;

static const _DataReceived_type_support_ids_t _DataReceived_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DataReceived_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DataReceived_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DataReceived_type_support_symbol_names_t _DataReceived_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ecat_msgs, msg, DataReceived)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ecat_msgs, msg, DataReceived)),
  }
};

typedef struct _DataReceived_type_support_data_t
{
  void * data[2];
} _DataReceived_type_support_data_t;

static _DataReceived_type_support_data_t _DataReceived_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DataReceived_message_typesupport_map = {
  2,
  "ecat_msgs",
  &_DataReceived_message_typesupport_ids.typesupport_identifier[0],
  &_DataReceived_message_typesupport_symbol_names.symbol_name[0],
  &_DataReceived_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DataReceived_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DataReceived_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace ecat_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_ecat_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ecat_msgs, msg, DataReceived)() {
  return &::ecat_msgs::msg::rosidl_typesupport_c::DataReceived_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
