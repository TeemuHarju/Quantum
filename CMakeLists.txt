cmake_minimum_required(VERSION 3.12)
project(MyGameEngine)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Run vcpkg_bootstrap.cmake to download and install vcpkg
include(vcpkg_bootstrap.cmake)

# Include engine and app subdirectories
add_subdirectory(engine)
add_subdirectory(app)


# Set the startup project for Visual Studio
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT app)
