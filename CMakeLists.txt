cmake_minimum_required(VERSION 3.15)

# Setup vcpkg script with CMake (note: should be placed before project() call)
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake CACHE STRING "Vcpkg toolchain file")

project(Test)

# Include the vcpkg toolchain file
#include(${CMAKE_TOOLCHAIN_FILE})

message("The value of CMAKE_TOOLCHAIN_FILE is: ${CMAKE_TOOLCHAIN_FILE}")

find_package(fmt REQUIRED)
add_executable(testapp main.cpp)

target_link_libraries(testapp PRIVATE fmt::fmt fmt::fmt-header-only)
