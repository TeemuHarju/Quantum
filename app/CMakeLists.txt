# Main application
add_executable(app
    src/main.cpp
)

# Add the following lines to include and link spdlog
find_package(spdlog CONFIG REQUIRED)
target_link_libraries(app PRIVATE spdlog::spdlog)

# Link the application with the engine library
target_link_libraries(app PRIVATE engine)