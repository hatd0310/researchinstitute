
cmake_minimum_required (VERSION 3.29 FATAL_ERROR)
if (CMAKE_VERSION VERSION_GREATER 3.29)
	set(researchinstitute CXX_STANDARD 20)
	set(researchinstitute C_STANDARD 17)
	set(researchinstitute CMAKE_CXX_STANDARD 20)
	set(researchinstitute CMAKE_C_STANDARD 17)
endif()

project (researchinstitute LANGUAGES CXX C)
enable_language(C CXX)
add_subdirectory("src")
enable_testing()

# https://cmake.org/cmake/help/latest/variable/CMAKE_MODULE_PATH.html#variable:CMAKE_MODULE_PATH
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
#include(CUDA)
include(PostgreSQL)
include(Boost)


target_include_directories(researchinstitute PRIVATE ${PostgreSQL_INCLUDE_DIRS} ${BOOST_ROOT})
target_link_libraries(researchinstitute PRIVATE ${PostgreSQL_LIBRARIES} ${BOOST_LIBRARY_DIRS})

