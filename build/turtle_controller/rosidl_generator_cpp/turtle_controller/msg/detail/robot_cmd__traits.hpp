// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_controller:msg/RobotCmd.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_CMD__TRAITS_HPP_
#define TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_controller/msg/detail/robot_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtle_controller
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: limit
  {
    out << "limit: ";
    rosidl_generator_traits::value_to_yaml(msg.limit, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "limit: ";
    rosidl_generator_traits::value_to_yaml(msg.limit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotCmd & msg, bool use_flow_style = false)
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
  const turtle_controller::msg::RobotCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_controller::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_controller::msg::to_yaml() instead")]]
inline std::string to_yaml(const turtle_controller::msg::RobotCmd & msg)
{
  return turtle_controller::msg::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_controller::msg::RobotCmd>()
{
  return "turtle_controller::msg::RobotCmd";
}

template<>
inline const char * name<turtle_controller::msg::RobotCmd>()
{
  return "turtle_controller/msg/RobotCmd";
}

template<>
struct has_fixed_size<turtle_controller::msg::RobotCmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_controller::msg::RobotCmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_controller::msg::RobotCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_CMD__TRAITS_HPP_
