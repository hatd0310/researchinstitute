# GLOBAL CONFIGURATION
# https://github.com/Kitware/CMake
#
enable_language(C CXX CUDA)
cmake_minimum_required (VERSION 3.20 FATAL_ERROR)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD 17)

project ("researchinstitute")
add_subdirectory ("src")
enable_testing()
set_property(GLOBAL PROPERTY ALLOW_DUPLICATE_CUSTOM_TARGETS TRUE)

# https://cmake.org/cmake/help/latest/variable/CMAKE_MODULE_PATH.html#variable:CMAKE_MODULE_PATH
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
include(CUDA)		# Loads ${CMAKE_CURRENT_SOURCE_DIR}/cmake/CUDA.cmake
include(PostgreSQL) # Loads ${CMAKE_CURRENT_SOURCE_DIR}/cmake/FindPostgreSQL.cmake
