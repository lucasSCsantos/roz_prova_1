// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_controller:msg/RobotCmd.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_CMD__STRUCT_H_
#define TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RobotCmd in the package turtle_controller.
typedef struct turtle_controller__msg__RobotCmd
{
  rosidl_runtime_c__String direction;
  float velocity;
  float limit;
} turtle_controller__msg__RobotCmd;

// Struct for a sequence of turtle_controller__msg__RobotCmd.
typedef struct turtle_controller__msg__RobotCmd__Sequence
{
  turtle_controller__msg__RobotCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_controller__msg__RobotCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_CMD__STRUCT_H_
