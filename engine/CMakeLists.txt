# Engine library
add_library(engine SHARED
    src/engine.cpp
    src/engine.h
)

# Set DLL export macros if needed
target_compile_definitions(engine PRIVATE ENGINE_EXPORTS)

# Find and link fmt using
find_package(fmt CONFIG REQUIRED)
target_link_libraries(engine PRIVATE fmt::fmt)

# Set include directories for the engine
target_include_directories(engine 
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
