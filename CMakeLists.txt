# CMakeList.txt : CMake project for string_switch_statement, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("string_switch_statement")

# Add source to this project's executable.
add_executable (string_switch_statement "string_switch_statement.cpp" "string_switch_statement.h")
# let CMake find external header-only libraries in the root directory
include_directories(${root_SOURCE_DIR}/)
