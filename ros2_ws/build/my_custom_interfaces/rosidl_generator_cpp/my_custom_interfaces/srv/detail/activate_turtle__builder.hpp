// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_custom_interfaces:srv/ActivateTurtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_custom_interfaces/srv/activate_turtle.hpp"


#ifndef MY_CUSTOM_INTERFACES__SRV__DETAIL__ACTIVATE_TURTLE__BUILDER_HPP_
#define MY_CUSTOM_INTERFACES__SRV__DETAIL__ACTIVATE_TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_custom_interfaces/srv/detail/activate_turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ActivateTurtle_Request_activate
{
public:
  Init_ActivateTurtle_Request_activate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_custom_interfaces::srv::ActivateTurtle_Request activate(::my_custom_interfaces::srv::ActivateTurtle_Request::_activate_type arg)
  {
    msg_.activate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interfaces::srv::ActivateTurtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interfaces::srv::ActivateTurtle_Request>()
{
  return my_custom_interfaces::srv::builder::Init_ActivateTurtle_Request_activate();
}

}  // namespace my_custom_interfaces


namespace my_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ActivateTurtle_Response_moving
{
public:
  Init_ActivateTurtle_Response_moving()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_custom_interfaces::srv::ActivateTurtle_Response moving(::my_custom_interfaces::srv::ActivateTurtle_Response::_moving_type arg)
  {
    msg_.moving = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interfaces::srv::ActivateTurtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interfaces::srv::ActivateTurtle_Response>()
{
  return my_custom_interfaces::srv::builder::Init_ActivateTurtle_Response_moving();
}

}  // namespace my_custom_interfaces


namespace my_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ActivateTurtle_Event_response
{
public:
  explicit Init_ActivateTurtle_Event_response(::my_custom_interfaces::srv::ActivateTurtle_Event & msg)
  : msg_(msg)
  {}
  ::my_custom_interfaces::srv::ActivateTurtle_Event response(::my_custom_interfaces::srv::ActivateTurtle_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interfaces::srv::ActivateTurtle_Event msg_;
};

class Init_ActivateTurtle_Event_request
{
public:
  explicit Init_ActivateTurtle_Event_request(::my_custom_interfaces::srv::ActivateTurtle_Event & msg)
  : msg_(msg)
  {}
  Init_ActivateTurtle_Event_response request(::my_custom_interfaces::srv::ActivateTurtle_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ActivateTurtle_Event_response(msg_);
  }

private:
  ::my_custom_interfaces::srv::ActivateTurtle_Event msg_;
};

class Init_ActivateTurtle_Event_info
{
public:
  Init_ActivateTurtle_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActivateTurtle_Event_request info(::my_custom_interfaces::srv::ActivateTurtle_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ActivateTurtle_Event_request(msg_);
  }

private:
  ::my_custom_interfaces::srv::ActivateTurtle_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interfaces::srv::ActivateTurtle_Event>()
{
  return my_custom_interfaces::srv::builder::Init_ActivateTurtle_Event_info();
}

}  // namespace my_custom_interfaces

#endif  // MY_CUSTOM_INTERFACES__SRV__DETAIL__ACTIVATE_TURTLE__BUILDER_HPP_
