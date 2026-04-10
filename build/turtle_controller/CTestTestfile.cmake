# CMake generated Testfile for 
# Source directory: /home/aula-robotica/ros_ws/src/turtle_controller
# Build directory: /home/aula-robotica/ros_ws/build/turtle_controller
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(turtle_controller_test "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/aula-robotica/ros_ws/build/turtle_controller/test_results/turtle_controller/turtle_controller_test.gtest.xml" "--package-name" "turtle_controller" "--output-file" "/home/aula-robotica/ros_ws/build/turtle_controller/ament_cmake_gtest/turtle_controller_test.txt" "--command" "/home/aula-robotica/ros_ws/build/turtle_controller/turtle_controller_test" "--gtest_output=xml:/home/aula-robotica/ros_ws/build/turtle_controller/test_results/turtle_controller/turtle_controller_test.gtest.xml")
set_tests_properties(turtle_controller_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/aula-robotica/ros_ws/build/turtle_controller/turtle_controller_test" TIMEOUT "60" WORKING_DIRECTORY "/home/aula-robotica/ros_ws/build/turtle_controller" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/aula-robotica/ros_ws/src/turtle_controller/CMakeLists.txt;121;ament_add_gtest;/home/aula-robotica/ros_ws/src/turtle_controller/CMakeLists.txt;0;")
subdirs("turtle_controller__py")
subdirs("gtest")
