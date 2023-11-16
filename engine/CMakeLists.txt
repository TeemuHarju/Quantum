# Create a library for the engine

# Collect all source files in the 'src' directory and its subdirectories
file(GLOB_RECURSE ENGINE_SOURCES "src/*.cpp")
file(GLOB_RECURSE ENGINE_HEADERS "src/*.h")

add_library(engine SHARED
    ${ENGINE_SOURCES}
    ${ENGINE_HEADERS}
)

# Set DLL export macros if needed
target_compile_definitions(engine PRIVATE ENGINE_EXPORTS)

# Find and link fmt using
#find_package(fmt CONFIG REQUIRED)
#target_link_libraries(engine PRIVATE fmt::fmt)

# Set include directories for the engine
target_include_directories(engine 
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/vendor/spdlog/include)

# Add DEBUG_MODE definition for Debug builds
target_compile_definitions(engine PRIVATE $<$<CONFIG:Debug>:DEBUG_MODE>)
