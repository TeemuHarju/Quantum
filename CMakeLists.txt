cmake_minimum_required(VERSION 3.27)
project(windows)

set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake")

# Include the vcpkg toolchain file
include(${CMAKE_TOOLCHAIN_FILE})

message("The value of CMAKE_TOOLCHAIN_FILE is: ${CMAKE_TOOLCHAIN_FILE}")

find_package(fmt REQUIRED)
add_executable(windows main.cpp)

target_link_libraries(windows PRIVATE fmt::fmt)
