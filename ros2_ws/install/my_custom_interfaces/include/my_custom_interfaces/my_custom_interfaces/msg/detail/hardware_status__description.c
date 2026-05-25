// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_custom_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#include "my_custom_interfaces/msg/detail/hardware_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_custom_interfaces
const rosidl_type_hash_t *
my_custom_interfaces__msg__HardwareStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb3, 0x93, 0x9f, 0xea, 0x61, 0x2d, 0xb3, 0x30,
      0xb9, 0xdb, 0xca, 0x06, 0x73, 0xa3, 0x4d, 0x0a,
      0x0c, 0x8f, 0x2c, 0x74, 0x30, 0x85, 0xe5, 0x53,
      0xa5, 0x2f, 0x85, 0x26, 0xee, 0x39, 0x54, 0x8c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_custom_interfaces__msg__HardwareStatus__TYPE_NAME[] = "my_custom_interfaces/msg/HardwareStatus";

// Define type names, field names, and default values
static char my_custom_interfaces__msg__HardwareStatus__FIELD_NAME__version[] = "version";
static char my_custom_interfaces__msg__HardwareStatus__FIELD_NAME__temperature[] = "temperature";
static char my_custom_interfaces__msg__HardwareStatus__FIELD_NAME__are_motors_ok[] = "are_motors_ok";
static char my_custom_interfaces__msg__HardwareStatus__FIELD_NAME__debug_message[] = "debug_message";

static rosidl_runtime_c__type_description__Field my_custom_interfaces__msg__HardwareStatus__FIELDS[] = {
  {
    {my_custom_interfaces__msg__HardwareStatus__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_interfaces__msg__HardwareStatus__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_interfaces__msg__HardwareStatus__FIELD_NAME__are_motors_ok, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_interfaces__msg__HardwareStatus__FIELD_NAME__debug_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_custom_interfaces__msg__HardwareStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_custom_interfaces__msg__HardwareStatus__TYPE_NAME, 39, 39},
      {my_custom_interfaces__msg__HardwareStatus__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 version\n"
  "float64 temperature\n"
  "bool are_motors_ok\n"
  "string debug_message";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_custom_interfaces__msg__HardwareStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_custom_interfaces__msg__HardwareStatus__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 73, 73},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_custom_interfaces__msg__HardwareStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_custom_interfaces__msg__HardwareStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
