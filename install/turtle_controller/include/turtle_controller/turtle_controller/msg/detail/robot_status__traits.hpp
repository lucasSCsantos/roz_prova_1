// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_controller:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
#define TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_controller/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'obstacle_distance'
#include "turtle_controller/msg/detail/directional_distance__traits.hpp"

namespace turtle_controller
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: moving
  {
    out << "moving: ";
    rosidl_generator_traits::value_to_yaml(msg.moving, out);
    out << ", ";
  }

  // member: linear_velocity
  {
    out << "linear_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_velocity, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
    out << ", ";
  }

  // member: linear_distance
  {
    out << "linear_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_distance, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: obstacle_distance
  {
    out << "obstacle_distance: ";
    to_flow_style_yaml(msg.obstacle_distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotStatus & msg,
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

  // member: linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_velocity, out);
    out << "\n";
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
    out << "\n";
  }

  // member: linear_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_distance, out);
    out << "\n";
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
    out << "\n";
  }

  // member: obstacle_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_distance:\n";
    to_block_style_yaml(msg.obstacle_distance, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotStatus & msg, bool use_flow_style = false)
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

}  // namespace turtle_controller

namespace rosidl_generator_traits
{

[[deprecated("use turtle_controller::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_controller::msg::RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_controller::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_controller::msg::to_yaml() instead")]]
inline std::string to_yaml(const turtle_controller::msg::RobotStatus & msg)
{
  return turtle_controller::msg::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_controller::msg::RobotStatus>()
{
  return "turtle_controller::msg::RobotStatus";
}

template<>
inline const char * name<turtle_controller::msg::RobotStatus>()
{
  return "turtle_controller/msg/RobotStatus";
}

template<>
struct has_fixed_size<turtle_controller::msg::RobotStatus>
  : std::integral_constant<bool, has_fixed_size<turtle_controller::msg::DirectionalDistance>::value> {};

template<>
struct has_bounded_size<turtle_controller::msg::RobotStatus>
  : std::integral_constant<bool, has_bounded_size<turtle_controller::msg::DirectionalDistance>::value> {};

template<>
struct is_message<turtle_controller::msg::RobotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
