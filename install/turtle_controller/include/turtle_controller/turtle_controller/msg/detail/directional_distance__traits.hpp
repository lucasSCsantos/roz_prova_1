// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_controller:msg/DirectionalDistance.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CONTROLLER__MSG__DETAIL__DIRECTIONAL_DISTANCE__TRAITS_HPP_
#define TURTLE_CONTROLLER__MSG__DETAIL__DIRECTIONAL_DISTANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_controller/msg/detail/directional_distance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtle_controller
{

namespace msg
{

inline void to_flow_style_yaml(
  const DirectionalDistance & msg,
  std::ostream & out)
{
  out << "{";
  // member: front
  {
    out << "front: ";
    rosidl_generator_traits::value_to_yaml(msg.front, out);
    out << ", ";
  }

  // member: left
  {
    out << "left: ";
    rosidl_generator_traits::value_to_yaml(msg.left, out);
    out << ", ";
  }

  // member: right
  {
    out << "right: ";
    rosidl_generator_traits::value_to_yaml(msg.right, out);
    out << ", ";
  }

  // member: back
  {
    out << "back: ";
    rosidl_generator_traits::value_to_yaml(msg.back, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DirectionalDistance & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: front
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front: ";
    rosidl_generator_traits::value_to_yaml(msg.front, out);
    out << "\n";
  }

  // member: left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left: ";
    rosidl_generator_traits::value_to_yaml(msg.left, out);
    out << "\n";
  }

  // member: right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right: ";
    rosidl_generator_traits::value_to_yaml(msg.right, out);
    out << "\n";
  }

  // member: back
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "back: ";
    rosidl_generator_traits::value_to_yaml(msg.back, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DirectionalDistance & msg, bool use_flow_style = false)
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
  const turtle_controller::msg::DirectionalDistance & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_controller::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_controller::msg::to_yaml() instead")]]
inline std::string to_yaml(const turtle_controller::msg::DirectionalDistance & msg)
{
  return turtle_controller::msg::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_controller::msg::DirectionalDistance>()
{
  return "turtle_controller::msg::DirectionalDistance";
}

template<>
inline const char * name<turtle_controller::msg::DirectionalDistance>()
{
  return "turtle_controller/msg/DirectionalDistance";
}

template<>
struct has_fixed_size<turtle_controller::msg::DirectionalDistance>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_controller::msg::DirectionalDistance>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_controller::msg::DirectionalDistance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_CONTROLLER__MSG__DETAIL__DIRECTIONAL_DISTANCE__TRAITS_HPP_
