# CMakeLists.txt in the 'engine' subdirectory

# Organize files into folders in Visual Studio using the provided code
file(GLOB_RECURSE ENGINE_SOURCE_LIST *.cpp* *.h* *.hpp*)
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${ENGINE_SOURCE_LIST})

# Define the library target
add_library(engine STATIC ${ENGINE_SOURCE_LIST})

# Find spdlog package
find_package(spdlog REQUIRED)

# Get the include directories and library directories of spdlog
get_target_property(spdlog_include_dirs spdlog::spdlog INTERFACE_INCLUDE_DIRECTORIES)
#get_target_property(spdlog_library_dirs spdlog::spdlog INTERFACE_LIBRARY_DIRECTORIES)

# Propagate spdlog include directories to the app target
target_include_directories(engine PRIVATE ${spdlog_include_dirs})

# Propagate spdlog library directories to the app target
#target_link_directories(app PRIVATE ${spdlog_library_dirs})

message(${spdlog_include_dirs})

# Set include directories for the engine
target_include_directories(engine PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

# Link against spdlog library
target_link_libraries(engine PRIVATE spdlog::spdlog)

# Add DEBUG_MODE definition for Debug builds
target_compile_definitions(engine PRIVATE $<$<CONFIG:Debug>:DEBUG_MODE>)





