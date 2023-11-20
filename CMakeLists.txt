cmake_minimum_required(VERSION 3.27)
project(windows)

# Specify the path to the vcpkg toolchain file
set(CMAKE_TOOLCHAIN_FILE "")


find_package(fmt REQUIRED)
add_executable(windows main.cpp)

target_link_libraries(windows PRIVATE fmt::fmt)
