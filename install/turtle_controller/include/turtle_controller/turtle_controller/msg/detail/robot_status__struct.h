// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_controller:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obstacle_distance'
#include "turtle_controller/msg/detail/directional_distance__struct.h"

/// Struct defined in msg/RobotStatus in the package turtle_controller.
typedef struct turtle_controller__msg__RobotStatus
{
  bool moving;
  float linear_velocity;
  float angular_velocity;
  float linear_distance;
  float orientation;
  turtle_controller__msg__DirectionalDistance obstacle_distance;
} turtle_controller__msg__RobotStatus;

// Struct for a sequence of turtle_controller__msg__RobotStatus.
typedef struct turtle_controller__msg__RobotStatus__Sequence
{
  turtle_controller__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_controller__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
