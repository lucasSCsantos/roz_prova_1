// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_controller:msg/RobotCmd.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_CMD__STRUCT_HPP_
#define TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtle_controller__msg__RobotCmd __attribute__((deprecated))
#else
# define DEPRECATED__turtle_controller__msg__RobotCmd __declspec(deprecated)
#endif

namespace turtle_controller
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotCmd_
{
  using Type = RobotCmd_<ContainerAllocator>;

  explicit RobotCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
      this->velocity = 0.0f;
      this->limit = 0.0f;
    }
  }

  explicit RobotCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
      this->velocity = 0.0f;
      this->limit = 0.0f;
    }
  }

  // field types and members
  using _direction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _direction_type direction;
  using _velocity_type =
    float;
  _velocity_type velocity;
  using _limit_type =
    float;
  _limit_type limit;

  // setters for named parameter idiom
  Type & set__direction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__limit(
    const float & _arg)
  {
    this->limit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_controller::msg::RobotCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_controller::msg::RobotCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_controller::msg::RobotCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_controller::msg::RobotCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_controller::msg::RobotCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_controller::msg::RobotCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_controller::msg::RobotCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_controller::msg::RobotCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_controller::msg::RobotCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_controller::msg::RobotCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_controller__msg__RobotCmd
    std::shared_ptr<turtle_controller::msg::RobotCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_controller__msg__RobotCmd
    std::shared_ptr<turtle_controller::msg::RobotCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCmd_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->limit != other.limit) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCmd_

// alias to use template instance with default allocator
using RobotCmd =
  turtle_controller::msg::RobotCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_controller

#endif  // TURTLE_CONTROLLER__MSG__DETAIL__ROBOT_CMD__STRUCT_HPP_
