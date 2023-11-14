# Main application
add_executable(MyGameApp
    src/main.cpp
)

# Link the application with the engine library
target_link_libraries(MyGameApp PRIVATE Engine)

# Set include directories for the app
target_include_directories(MyGameApp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../engine/src)