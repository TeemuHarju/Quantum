# Engine library
add_library(Engine SHARED
    src/engine.cpp
    src/engine.h
)

# Set DLL export macros if needed
target_compile_definitions(Engine PRIVATE ENGINE_EXPORTS)

# Set include directories for the engine
target_include_directories(Engine 
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/vendor/include)
