// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ecat_msgs:msg/HapticCmd.idl
// generated code does not contain a copyright notice

#ifndef ECAT_MSGS__MSG__DETAIL__HAPTIC_CMD__FUNCTIONS_H_
#define ECAT_MSGS__MSG__DETAIL__HAPTIC_CMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ecat_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ecat_msgs/msg/detail/haptic_cmd__struct.h"

/// Initialize msg/HapticCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ecat_msgs__msg__HapticCmd
 * )) before or use
 * ecat_msgs__msg__HapticCmd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ecat_msgs
bool
ecat_msgs__msg__HapticCmd__init(ecat_msgs__msg__HapticCmd * msg);

/// Finalize msg/HapticCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ecat_msgs
void
ecat_msgs__msg__HapticCmd__fini(ecat_msgs__msg__HapticCmd * msg);

/// Create msg/HapticCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ecat_msgs__msg__HapticCmd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ecat_msgs
ecat_msgs__msg__HapticCmd *
ecat_msgs__msg__HapticCmd__create();

/// Destroy msg/HapticCmd message.
/**
 * It calls
 * ecat_msgs__msg__HapticCmd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ecat_msgs
void
ecat_msgs__msg__HapticCmd__destroy(ecat_msgs__msg__HapticCmd * msg);


/// Initialize array of msg/HapticCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * ecat_msgs__msg__HapticCmd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ecat_msgs
bool
ecat_msgs__msg__HapticCmd__Sequence__init(ecat_msgs__msg__HapticCmd__Sequence * array, size_t size);

/// Finalize array of msg/HapticCmd messages.
/**
 * It calls
 * ecat_msgs__msg__HapticCmd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ecat_msgs
void
ecat_msgs__msg__HapticCmd__Sequence__fini(ecat_msgs__msg__HapticCmd__Sequence * array);

/// Create array of msg/HapticCmd messages.
/**
 * It allocates the memory for the array and calls
 * ecat_msgs__msg__HapticCmd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ecat_msgs
ecat_msgs__msg__HapticCmd__Sequence *
ecat_msgs__msg__HapticCmd__Sequence__create(size_t size);

/// Destroy array of msg/HapticCmd messages.
/**
 * It calls
 * ecat_msgs__msg__HapticCmd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ecat_msgs
void
ecat_msgs__msg__HapticCmd__Sequence__destroy(ecat_msgs__msg__HapticCmd__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ECAT_MSGS__MSG__DETAIL__HAPTIC_CMD__FUNCTIONS_H_
