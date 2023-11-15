# vcpkg_bootstrap.cmake

# Download and install vcpkg
execute_process(
  COMMAND git submodule update --init
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

# Bootstrap vcpkg
execute_process(
  COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/bootstrap-vcpkg.bat
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

# Install dependencies
execute_process(
  COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/vcpkg install
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)