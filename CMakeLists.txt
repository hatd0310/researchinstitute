cmake_minimum_required (VERSION 3.30 FATAL_ERROR)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
include(cmake_config)

project (researchinstitute LANGUAGES C CXX)
enable_language(C CXX)

add_subdirectory(src)

include_directories(src)
enable_testing()

# Detect platform and set Windows-specific definitions
if(WIN32)
  # Define _WIN32_WINNT for Windows 7 (0x0601)
  add_definitions(-D_WIN32_WINNT=0x0601)
elseif(UNIX AND NOT APPLE)
  message(STATUS "Configuring for Linux")
elseif(APPLE)
  message(STATUS "Configuring for macOS")
endif()

# https://cmake.org/cmake/help/latest/variable/CMAKE_MODULE_PATH.html#variable:CMAKE_MODULE_PATH

#include(CUDA)
include(PostgreSQL)
include(Boost)


