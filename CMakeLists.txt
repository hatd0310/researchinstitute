cmake_minimum_required (VERSION 3.30 FATAL_ERROR)
set(researchinstitute CXX_STANDARD 20)
set(researchinstitute C_STANDARD 17)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_C_COMPILER "gcc")

project (researchinstitute)
enable_language(C CXX)
add_subdirectory("src")
include_directories("src")
enable_testing()

# https://cmake.org/cmake/help/latest/variable/CMAKE_MODULE_PATH.html#variable:CMAKE_MODULE_PATH
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
include(CUDA)
include(PostgreSQL)
include(Boost)


target_include_directories(researchinstitute PRIVATE
  ${PostgreSQL_INCLUDE_DIRS}
  ${Boost_INCLUDE_DIRS}
)

target_link_libraries(researchinstitute PRIVATE
  ${PostgreSQL_LIBRARIES}
  ${Boost_LIBRARY_DIRS}
)