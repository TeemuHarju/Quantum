# CMakeLists.txt in the 'engine' subdirectory

# Create interface library for spdlog
find_package(spdlog REQUIRED)
add_library(spdlog INTERFACE)
target_include_directories(spdlog INTERFACE ${spdlog_INCLUDE_DIRS})

# Organize files into folders in Visual Studio using the provided code
file(GLOB_RECURSE ENGINE_SOURCE_LIST *.cpp* *.h* *.hpp*)
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${ENGINE_SOURCE_LIST})

# Define the library target
add_library(engine STATIC ${ENGINE_SOURCE_LIST})
target_link_libraries(engine PRIVATE spdlog::spdlog)

# Set include directories for the engine
target_include_directories(engine 
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

# Add DEBUG_MODE definition for Debug builds
target_compile_definitions(engine PRIVATE $<$<CONFIG:Debug>:DEBUG_MODE>)


