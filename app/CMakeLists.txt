# CMakeLists.txt in the 'app' subdirectory

# Define the executable target
add_executable(app
    src/main.cpp  # List your source files here
)

# Link any necessary libraries or dependencies
target_link_libraries(app
    PRIVATE engine
)
