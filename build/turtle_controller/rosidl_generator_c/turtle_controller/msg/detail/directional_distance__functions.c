// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_controller:msg/DirectionalDistance.idl
// generated code does not contain a copyright notice
#include "turtle_controller/msg/detail/directional_distance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
turtle_controller__msg__DirectionalDistance__init(turtle_controller__msg__DirectionalDistance * msg)
{
  if (!msg) {
    return false;
  }
  // front
  // left
  // right
  // back
  return true;
}

void
turtle_controller__msg__DirectionalDistance__fini(turtle_controller__msg__DirectionalDistance * msg)
{
  if (!msg) {
    return;
  }
  // front
  // left
  // right
  // back
}

bool
turtle_controller__msg__DirectionalDistance__are_equal(const turtle_controller__msg__DirectionalDistance * lhs, const turtle_controller__msg__DirectionalDistance * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // front
  if (lhs->front != rhs->front) {
    return false;
  }
  // left
  if (lhs->left != rhs->left) {
    return false;
  }
  // right
  if (lhs->right != rhs->right) {
    return false;
  }
  // back
  if (lhs->back != rhs->back) {
    return false;
  }
  return true;
}

bool
turtle_controller__msg__DirectionalDistance__copy(
  const turtle_controller__msg__DirectionalDistance * input,
  turtle_controller__msg__DirectionalDistance * output)
{
  if (!input || !output) {
    return false;
  }
  // front
  output->front = input->front;
  // left
  output->left = input->left;
  // right
  output->right = input->right;
  // back
  output->back = input->back;
  return true;
}

turtle_controller__msg__DirectionalDistance *
turtle_controller__msg__DirectionalDistance__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_controller__msg__DirectionalDistance * msg = (turtle_controller__msg__DirectionalDistance *)allocator.allocate(sizeof(turtle_controller__msg__DirectionalDistance), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_controller__msg__DirectionalDistance));
  bool success = turtle_controller__msg__DirectionalDistance__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_controller__msg__DirectionalDistance__destroy(turtle_controller__msg__DirectionalDistance * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_controller__msg__DirectionalDistance__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_controller__msg__DirectionalDistance__Sequence__init(turtle_controller__msg__DirectionalDistance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_controller__msg__DirectionalDistance * data = NULL;

  if (size) {
    data = (turtle_controller__msg__DirectionalDistance *)allocator.zero_allocate(size, sizeof(turtle_controller__msg__DirectionalDistance), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_controller__msg__DirectionalDistance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_controller__msg__DirectionalDistance__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtle_controller__msg__DirectionalDistance__Sequence__fini(turtle_controller__msg__DirectionalDistance__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_controller__msg__DirectionalDistance__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtle_controller__msg__DirectionalDistance__Sequence *
turtle_controller__msg__DirectionalDistance__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_controller__msg__DirectionalDistance__Sequence * array = (turtle_controller__msg__DirectionalDistance__Sequence *)allocator.allocate(sizeof(turtle_controller__msg__DirectionalDistance__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_controller__msg__DirectionalDistance__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_controller__msg__DirectionalDistance__Sequence__destroy(turtle_controller__msg__DirectionalDistance__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_controller__msg__DirectionalDistance__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_controller__msg__DirectionalDistance__Sequence__are_equal(const turtle_controller__msg__DirectionalDistance__Sequence * lhs, const turtle_controller__msg__DirectionalDistance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_controller__msg__DirectionalDistance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_controller__msg__DirectionalDistance__Sequence__copy(
  const turtle_controller__msg__DirectionalDistance__Sequence * input,
  turtle_controller__msg__DirectionalDistance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_controller__msg__DirectionalDistance);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_controller__msg__DirectionalDistance * data =
      (turtle_controller__msg__DirectionalDistance *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_controller__msg__DirectionalDistance__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_controller__msg__DirectionalDistance__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_controller__msg__DirectionalDistance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
