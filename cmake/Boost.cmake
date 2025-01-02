# Disable searching for system-wide Boost installations
set(Boost_NO_SYSTEM_PATHS ON)
set(Boost_USE_STATIC_RUNTIME ON)

set(BOOST_ROOT "$ENV{BOOST_ROOT}")
set(Boost_DIR "$ENV{BOOST_ROOT}")
set(BOOST_LIBRARY_DIRS "${Boost_DIR}/libs")

set(CMAKE_INCLUDE_PATH ${CMAKE_INCLUDE_PATH} "${BOOST_ROOT}")
set(CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} "${BOOST_LIBRARY_DIRS}")
set(CMAKE_PREFIX_PATH "${BOOST_ROOT}" "${BOOST_LIBRARY_DIRS}" ${CMAKE_PREFIX_PATH}) 


# Find the required Boost components
find_package(Boost REQUIRED)

# Check if Boost was found successfully
if(Boost_FOUND)
  # Use Boost libraries in your project
  message(STATUS "Boost found!")
else()
  message(FATAL_ERROR "Could not find Boost.")
endif()
