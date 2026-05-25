// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_custom_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_custom_interfaces/msg/hardware_status.hpp"


#ifndef MY_CUSTOM_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_
#define MY_CUSTOM_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_custom_interfaces/msg/detail/hardware_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const HardwareStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: version
  {
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: are_motors_ok
  {
    out << "are_motors_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.are_motors_ok, out);
    out << ", ";
  }

  // member: debug_message
  {
    out << "debug_message: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HardwareStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: are_motors_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "are_motors_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.are_motors_ok, out);
    out << "\n";
  }

  // member: debug_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_message: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HardwareStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_custom_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_custom_interfaces::msg::HardwareStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_interfaces::msg::HardwareStatus & msg)
{
  return my_custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_interfaces::msg::HardwareStatus>()
{
  return "my_custom_interfaces::msg::HardwareStatus";
}

template<>
inline const char * name<my_custom_interfaces::msg::HardwareStatus>()
{
  return "my_custom_interfaces/msg/HardwareStatus";
}

template<>
struct has_fixed_size<my_custom_interfaces::msg::HardwareStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_custom_interfaces::msg::HardwareStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_custom_interfaces::msg::HardwareStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_CUSTOM_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_
