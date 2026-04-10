#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "turtle_controller::controller_server_lib" for configuration ""
set_property(TARGET turtle_controller::controller_server_lib APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(turtle_controller::controller_server_lib PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcontroller_server_lib.so"
  IMPORTED_SONAME_NOCONFIG "libcontroller_server_lib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS turtle_controller::controller_server_lib )
list(APPEND _IMPORT_CHECK_FILES_FOR_turtle_controller::controller_server_lib "${_IMPORT_PREFIX}/lib/libcontroller_server_lib.so" )

# Import target "turtle_controller::keyboard_parser_lib" for configuration ""
set_property(TARGET turtle_controller::keyboard_parser_lib APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(turtle_controller::keyboard_parser_lib PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libkeyboard_parser_lib.so"
  IMPORTED_SONAME_NOCONFIG "libkeyboard_parser_lib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS turtle_controller::keyboard_parser_lib )
list(APPEND _IMPORT_CHECK_FILES_FOR_turtle_controller::keyboard_parser_lib "${_IMPORT_PREFIX}/lib/libkeyboard_parser_lib.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
