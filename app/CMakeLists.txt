# CMakeLists.txt in the 'app' subdirectory

# Organize files into folders in Visual Studio using the provided code
file(GLOB_RECURSE APP_SOURCE_LIST *.cpp* *.h* *.hpp*)
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${APP_SOURCE_LIST})

# Define the executable target
add_executable(app ${APP_SOURCE_LIST})

# Link any necessary libraries or dependencies
target_link_libraries(app PRIVATE engine)


