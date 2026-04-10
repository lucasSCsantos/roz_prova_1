// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_controller:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_controller/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_controller
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_obstacle_distance
{
public:
  explicit Init_RobotStatus_obstacle_distance(::turtle_controller::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::turtle_controller::msg::RobotStatus obstacle_distance(::turtle_controller::msg::RobotStatus::_obstacle_distance_type arg)
  {
    msg_.obstacle_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_controller::msg::RobotStatus msg_;
};

class Init_RobotStatus_orientation
{
public:
  explicit Init_RobotStatus_orientation(::turtle_controller::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_obstacle_distance orientation(::turtle_controller::msg::RobotStatus::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_RobotStatus_obstacle_distance(msg_);
  }

private:
  ::turtle_controller::msg::RobotStatus msg_;
};

class Init_RobotStatus_linear_distance
{
public:
  explicit Init_RobotStatus_linear_distance(::turtle_controller::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_orientation linear_distance(::turtle_controller::msg::RobotStatus::_linear_distance_type arg)
  {
    msg_.linear_distance = std::move(arg);
    return Init_RobotStatus_orientation(msg_);
  }

private:
  ::turtle_controller::msg::RobotStatus msg_;
};

class Init_RobotStatus_angular_velocity
{
public:
  explicit Init_RobotStatus_angular_velocity(::turtle_controller::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_linear_distance angular_velocity(::turtle_controller::msg::RobotStatus::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_RobotStatus_linear_distance(msg_);
  }

private:
  ::turtle_controller::msg::RobotStatus msg_;
};

class Init_RobotStatus_linear_velocity
{
public:
  explicit Init_RobotStatus_linear_velocity(::turtle_controller::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_angular_velocity linear_velocity(::turtle_controller::msg::RobotStatus::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_RobotStatus_angular_velocity(msg_);
  }

private:
  ::turtle_controller::msg::RobotStatus msg_;
};

class Init_RobotStatus_moving
{
public:
  Init_RobotStatus_moving()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_linear_velocity moving(::turtle_controller::msg::RobotStatus::_moving_type arg)
  {
    msg_.moving = std::move(arg);
    return Init_RobotStatus_linear_velocity(msg_);
  }

private:
  ::turtle_controller::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_controller::msg::RobotStatus>()
{
  return turtle_controller::msg::builder::Init_RobotStatus_moving();
}

}  // namespace turtle_controller

#endif  // TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
