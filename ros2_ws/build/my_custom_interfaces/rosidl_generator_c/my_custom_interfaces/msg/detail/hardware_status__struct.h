// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_custom_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_custom_interfaces/msg/hardware_status.h"


#ifndef MY_CUSTOM_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__STRUCT_H_
#define MY_CUSTOM_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'debug_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HardwareStatus in the package my_custom_interfaces.
typedef struct my_custom_interfaces__msg__HardwareStatus
{
  int64_t version;
  double temperature;
  bool are_motors_ok;
  rosidl_runtime_c__String debug_message;
} my_custom_interfaces__msg__HardwareStatus;

// Struct for a sequence of my_custom_interfaces__msg__HardwareStatus.
typedef struct my_custom_interfaces__msg__HardwareStatus__Sequence
{
  my_custom_interfaces__msg__HardwareStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_interfaces__msg__HardwareStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_CUSTOM_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__STRUCT_H_
