// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_controller:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
#define TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'obstacle_distance'
#include "turtle_controller/msg/detail/directional_distance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_controller__msg__RobotStatus __attribute__((deprecated))
#else
# define DEPRECATED__turtle_controller__msg__RobotStatus __declspec(deprecated)
#endif

namespace turtle_controller
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotStatus_
{
  using Type = RobotStatus_<ContainerAllocator>;

  explicit RobotStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obstacle_distance(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->moving = false;
      this->linear_velocity = 0.0f;
      this->angular_velocity = 0.0f;
      this->linear_distance = 0.0f;
      this->orientation = 0.0f;
    }
  }

  explicit RobotStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obstacle_distance(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->moving = false;
      this->linear_velocity = 0.0f;
      this->angular_velocity = 0.0f;
      this->linear_distance = 0.0f;
      this->orientation = 0.0f;
    }
  }

  // field types and members
  using _moving_type =
    bool;
  _moving_type moving;
  using _linear_velocity_type =
    float;
  _linear_velocity_type linear_velocity;
  using _angular_velocity_type =
    float;
  _angular_velocity_type angular_velocity;
  using _linear_distance_type =
    float;
  _linear_distance_type linear_distance;
  using _orientation_type =
    float;
  _orientation_type orientation;
  using _obstacle_distance_type =
    turtle_controller::msg::DirectionalDistance_<ContainerAllocator>;
  _obstacle_distance_type obstacle_distance;

  // setters for named parameter idiom
  Type & set__moving(
    const bool & _arg)
  {
    this->moving = _arg;
    return *this;
  }
  Type & set__linear_velocity(
    const float & _arg)
  {
    this->linear_velocity = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const float & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__linear_distance(
    const float & _arg)
  {
    this->linear_distance = _arg;
    return *this;
  }
  Type & set__orientation(
    const float & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__obstacle_distance(
    const turtle_controller::msg::DirectionalDistance_<ContainerAllocator> & _arg)
  {
    this->obstacle_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_controller::msg::RobotStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_controller::msg::RobotStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_controller::msg::RobotStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_controller::msg::RobotStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_controller::msg::RobotStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_controller::msg::RobotStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_controller::msg::RobotStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_controller::msg::RobotStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_controller::msg::RobotStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_controller::msg::RobotStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_controller__msg__RobotStatus
    std::shared_ptr<turtle_controller::msg::RobotStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_controller__msg__RobotStatus
    std::shared_ptr<turtle_controller::msg::RobotStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotStatus_ & other) const
  {
    if (this->moving != other.moving) {
      return false;
    }
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->linear_distance != other.linear_distance) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->obstacle_distance != other.obstacle_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotStatus_

// alias to use template instance with default allocator
using RobotStatus =
  turtle_controller::msg::RobotStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_controller

#endif  // TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
