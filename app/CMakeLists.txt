# Main application
add_executable(MyGameApp
    src/main.cpp
)

# Link the application with the engine library
target_link_libraries(MyGameApp PRIVATE Engine)