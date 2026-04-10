// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_controller:msg/DirectionalDistance.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_CONTROLLER__MSG__DETAIL__DIRECTIONAL_DISTANCE__STRUCT_HPP_
#define TURTLE_CONTROLLER__MSG__DETAIL__DIRECTIONAL_DISTANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtle_controller__msg__DirectionalDistance __attribute__((deprecated))
#else
# define DEPRECATED__turtle_controller__msg__DirectionalDistance __declspec(deprecated)
#endif

namespace turtle_controller
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DirectionalDistance_
{
  using Type = DirectionalDistance_<ContainerAllocator>;

  explicit DirectionalDistance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front = 0.0f;
      this->left = 0.0f;
      this->right = 0.0f;
      this->back = 0.0f;
    }
  }

  explicit DirectionalDistance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front = 0.0f;
      this->left = 0.0f;
      this->right = 0.0f;
      this->back = 0.0f;
    }
  }

  // field types and members
  using _front_type =
    float;
  _front_type front;
  using _left_type =
    float;
  _left_type left;
  using _right_type =
    float;
  _right_type right;
  using _back_type =
    float;
  _back_type back;

  // setters for named parameter idiom
  Type & set__front(
    const float & _arg)
  {
    this->front = _arg;
    return *this;
  }
  Type & set__left(
    const float & _arg)
  {
    this->left = _arg;
    return *this;
  }
  Type & set__right(
    const float & _arg)
  {
    this->right = _arg;
    return *this;
  }
  Type & set__back(
    const float & _arg)
  {
    this->back = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_controller::msg::DirectionalDistance_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_controller::msg::DirectionalDistance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_controller::msg::DirectionalDistance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_controller::msg::DirectionalDistance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_controller::msg::DirectionalDistance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_controller::msg::DirectionalDistance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_controller::msg::DirectionalDistance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_controller::msg::DirectionalDistance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_controller::msg::DirectionalDistance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_controller::msg::DirectionalDistance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_controller__msg__DirectionalDistance
    std::shared_ptr<turtle_controller::msg::DirectionalDistance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_controller__msg__DirectionalDistance
    std::shared_ptr<turtle_controller::msg::DirectionalDistance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DirectionalDistance_ & other) const
  {
    if (this->front != other.front) {
      return false;
    }
    if (this->left != other.left) {
      return false;
    }
    if (this->right != other.right) {
      return false;
    }
    if (this->back != other.back) {
      return false;
    }
    return true;
  }
  bool operator!=(const DirectionalDistance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DirectionalDistance_

// alias to use template instance with default allocator
using DirectionalDistance =
  turtle_controller::msg::DirectionalDistance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_controller

#endif  // TURTLE_CONTROLLER__MSG__DETAIL__DIRECTIONAL_DISTANCE__STRUCT_HPP_
