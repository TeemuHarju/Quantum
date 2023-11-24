cmake_minimum_required(VERSION 3.14)
project(MyProj VERSION 4.7.2)

# Add the executable target
add_executable(MyApp main.cpp)

# Add a shared library target (AlgoRuntime)
add_library(AlgoRuntime SHARED algo_runtime.cpp)

# Add a static library target (AlgoSDK)
add_library(AlgoSDK STATIC algo_sdk.cpp)

# This concise form requires CMake 3.14 or later
install(TARGETS MyApp AlgoRuntime AlgoSDK)