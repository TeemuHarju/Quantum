cmake_minimum_required(VERSION 3.28)
project(MyApp)

# Add library targets
add_library(Collector src1.cpp)
add_library(Algo src2.cpp)
add_library(Engine src3.cpp)
add_library(Ui src4.cpp)

# Add executable target
add_executable(MyApp main.cpp)

# Link libraries to targets
target_link_libraries(Collector
    PUBLIC Ui
    PRIVATE Algo Engine
)

target_link_libraries(MyApp PRIVATE Collector)
