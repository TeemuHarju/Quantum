# Main application
add_executable(app
    src/main.cpp
)

# Link the application with the engine library
target_link_libraries(app PRIVATE engine)