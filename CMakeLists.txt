﻿# GLOBAL CONFIGURATION
# https://github.com/Kitware/CMake
#
cmake_minimum_required (VERSION 3.26 FATAL_ERROR)
if (CMAKE_VERSION VERSION_GREATER 3.26)
	set(researchinstitute CXX_STANDARD 20)
	set(researchinstitute CMAKE_CXX_STANDARD 20)
	set(researchinstitute CMAKE_C_STANDARD 17)
    #set(CMAKE_C_COMPILER "gcc")
    #set(CMAKE_CXX_COMPILER "g++")
endif()

enable_language(C CXX)
project (researchinstitute LANGUAGES CXX C)
#enable_language(C CXX CUDA)
#project (researchinstitute LANGUAGES C CXX CUDA)

add_subdirectory ("src")
enable_testing()

set(CMAKE_CUDA_ARCHITECTURES "native")


set_property(GLOBAL PROPERTY ALLOW_DUPLICATE_CUSTOM_TARGETS TRUE)

# https://cmake.org/cmake/help/latest/variable/CMAKE_MODULE_PATH.html#variable:CMAKE_MODULE_PATH
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
#include(CUDA)
include(PostgreSQL)

