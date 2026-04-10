// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_controller:msg/RobotCmd.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_CMD__BUILDER_HPP_
#define TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_controller/msg/detail/robot_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_controller
{

namespace msg
{

namespace builder
{

class Init_RobotCmd_limit
{
public:
  explicit Init_RobotCmd_limit(::turtle_controller::msg::RobotCmd & msg)
  : msg_(msg)
  {}
  ::turtle_controller::msg::RobotCmd limit(::turtle_controller::msg::RobotCmd::_limit_type arg)
  {
    msg_.limit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_controller::msg::RobotCmd msg_;
};

class Init_RobotCmd_velocity
{
public:
  explicit Init_RobotCmd_velocity(::turtle_controller::msg::RobotCmd & msg)
  : msg_(msg)
  {}
  Init_RobotCmd_limit velocity(::turtle_controller::msg::RobotCmd::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_RobotCmd_limit(msg_);
  }

private:
  ::turtle_controller::msg::RobotCmd msg_;
};

class Init_RobotCmd_direction
{
public:
  Init_RobotCmd_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotCmd_velocity direction(::turtle_controller::msg::RobotCmd::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_RobotCmd_velocity(msg_);
  }

private:
  ::turtle_controller::msg::RobotCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_controller::msg::RobotCmd>()
{
  return turtle_controller::msg::builder::Init_RobotCmd_direction();
}

}  // namespace turtle_controller

#endif  // TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_CMD__BUILDER_HPP_
