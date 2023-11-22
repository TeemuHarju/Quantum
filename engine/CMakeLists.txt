# CMakeLists.txt in the 'engine' subdirectory

# Get all source files in the 'src' directory (including subdirectories)
file(GLOB_RECURSE ENGINE_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c"
)

# Get all header files in the 'src' directory (including subdirectories)
file(GLOB_RECURSE ENGINE_HEADERS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.hpp"
)

# Define the library target
add_library(engine STATIC ${ENGINE_SOURCES} ${ENGINE_HEADERS})

# Include directories if needed
target_include_directories(engine
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include  # Include directory for public header files
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src      # Include directory for internal header files
)


# Link any necessary libraries or dependencies
find_package(spdlog)
target_link_libraries(engine PRIVATE spdlog::spdlog)
