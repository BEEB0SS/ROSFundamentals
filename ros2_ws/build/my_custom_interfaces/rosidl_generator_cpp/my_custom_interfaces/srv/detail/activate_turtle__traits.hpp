// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_custom_interfaces:srv/ActivateTurtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_custom_interfaces/srv/activate_turtle.hpp"


#ifndef MY_CUSTOM_INTERFACES__SRV__DETAIL__ACTIVATE_TURTLE__TRAITS_HPP_
#define MY_CUSTOM_INTERFACES__SRV__DETAIL__ACTIVATE_TURTLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_custom_interfaces/srv/detail/activate_turtle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ActivateTurtle_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: activate
  {
    out << "activate: ";
    rosidl_generator_traits::value_to_yaml(msg.activate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActivateTurtle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: activate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "activate: ";
    rosidl_generator_traits::value_to_yaml(msg.activate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActivateTurtle_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_custom_interfaces::srv::ActivateTurtle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_interfaces::srv::ActivateTurtle_Request & msg)
{
  return my_custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_interfaces::srv::ActivateTurtle_Request>()
{
  return "my_custom_interfaces::srv::ActivateTurtle_Request";
}

template<>
inline const char * name<my_custom_interfaces::srv::ActivateTurtle_Request>()
{
  return "my_custom_interfaces/srv/ActivateTurtle_Request";
}

template<>
struct has_fixed_size<my_custom_interfaces::srv::ActivateTurtle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_custom_interfaces::srv::ActivateTurtle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_custom_interfaces::srv::ActivateTurtle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ActivateTurtle_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: moving
  {
    out << "moving: ";
    rosidl_generator_traits::value_to_yaml(msg.moving, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActivateTurtle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moving: ";
    rosidl_generator_traits::value_to_yaml(msg.moving, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActivateTurtle_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_custom_interfaces::srv::ActivateTurtle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_interfaces::srv::ActivateTurtle_Response & msg)
{
  return my_custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_interfaces::srv::ActivateTurtle_Response>()
{
  return "my_custom_interfaces::srv::ActivateTurtle_Response";
}

template<>
inline const char * name<my_custom_interfaces::srv::ActivateTurtle_Response>()
{
  return "my_custom_interfaces/srv/ActivateTurtle_Response";
}

template<>
struct has_fixed_size<my_custom_interfaces::srv::ActivateTurtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_custom_interfaces::srv::ActivateTurtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_custom_interfaces::srv::ActivateTurtle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace my_custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ActivateTurtle_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActivateTurtle_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActivateTurtle_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_custom_interfaces::srv::ActivateTurtle_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_interfaces::srv::ActivateTurtle_Event & msg)
{
  return my_custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_interfaces::srv::ActivateTurtle_Event>()
{
  return "my_custom_interfaces::srv::ActivateTurtle_Event";
}

template<>
inline const char * name<my_custom_interfaces::srv::ActivateTurtle_Event>()
{
  return "my_custom_interfaces/srv/ActivateTurtle_Event";
}

template<>
struct has_fixed_size<my_custom_interfaces::srv::ActivateTurtle_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_custom_interfaces::srv::ActivateTurtle_Event>
  : std::integral_constant<bool, has_bounded_size<my_custom_interfaces::srv::ActivateTurtle_Request>::value && has_bounded_size<my_custom_interfaces::srv::ActivateTurtle_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<my_custom_interfaces::srv::ActivateTurtle_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_custom_interfaces::srv::ActivateTurtle>()
{
  return "my_custom_interfaces::srv::ActivateTurtle";
}

template<>
inline const char * name<my_custom_interfaces::srv::ActivateTurtle>()
{
  return "my_custom_interfaces/srv/ActivateTurtle";
}

template<>
struct has_fixed_size<my_custom_interfaces::srv::ActivateTurtle>
  : std::integral_constant<
    bool,
    has_fixed_size<my_custom_interfaces::srv::ActivateTurtle_Request>::value &&
    has_fixed_size<my_custom_interfaces::srv::ActivateTurtle_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_custom_interfaces::srv::ActivateTurtle>
  : std::integral_constant<
    bool,
    has_bounded_size<my_custom_interfaces::srv::ActivateTurtle_Request>::value &&
    has_bounded_size<my_custom_interfaces::srv::ActivateTurtle_Response>::value
  >
{
};

template<>
struct is_service<my_custom_interfaces::srv::ActivateTurtle>
  : std::true_type
{
};

template<>
struct is_service_request<my_custom_interfaces::srv::ActivateTurtle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_custom_interfaces::srv::ActivateTurtle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_CUSTOM_INTERFACES__SRV__DETAIL__ACTIVATE_TURTLE__TRAITS_HPP_
