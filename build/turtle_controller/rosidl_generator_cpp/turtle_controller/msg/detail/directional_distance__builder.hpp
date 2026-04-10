// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_controller:msg/DirectionalDistance.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CONTROLLER__MSG__DETAIL__DIRECTIONAL_DISTANCE__BUILDER_HPP_
#define TURTLE_CONTROLLER__MSG__DETAIL__DIRECTIONAL_DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_controller/msg/detail/directional_distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_controller
{

namespace msg
{

namespace builder
{

class Init_DirectionalDistance_back
{
public:
  explicit Init_DirectionalDistance_back(::turtle_controller::msg::DirectionalDistance & msg)
  : msg_(msg)
  {}
  ::turtle_controller::msg::DirectionalDistance back(::turtle_controller::msg::DirectionalDistance::_back_type arg)
  {
    msg_.back = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_controller::msg::DirectionalDistance msg_;
};

class Init_DirectionalDistance_right
{
public:
  explicit Init_DirectionalDistance_right(::turtle_controller::msg::DirectionalDistance & msg)
  : msg_(msg)
  {}
  Init_DirectionalDistance_back right(::turtle_controller::msg::DirectionalDistance::_right_type arg)
  {
    msg_.right = std::move(arg);
    return Init_DirectionalDistance_back(msg_);
  }

private:
  ::turtle_controller::msg::DirectionalDistance msg_;
};

class Init_DirectionalDistance_left
{
public:
  explicit Init_DirectionalDistance_left(::turtle_controller::msg::DirectionalDistance & msg)
  : msg_(msg)
  {}
  Init_DirectionalDistance_right left(::turtle_controller::msg::DirectionalDistance::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_DirectionalDistance_right(msg_);
  }

private:
  ::turtle_controller::msg::DirectionalDistance msg_;
};

class Init_DirectionalDistance_front
{
public:
  Init_DirectionalDistance_front()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DirectionalDistance_left front(::turtle_controller::msg::DirectionalDistance::_front_type arg)
  {
    msg_.front = std::move(arg);
    return Init_DirectionalDistance_left(msg_);
  }

private:
  ::turtle_controller::msg::DirectionalDistance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_controller::msg::DirectionalDistance>()
{
  return turtle_controller::msg::builder::Init_DirectionalDistance_front();
}

}  // namespace turtle_controller

#endif  // TURTLE_CONTROLLER__MSG__DETAIL__DIRECTIONAL_DISTANCE__BUILDER_HPP_
