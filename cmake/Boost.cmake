set(Boost_USE_STATIC_LIBS       ON)  # only find static libs
set(Boost_USE_DEBUG_LIBS        OFF) # ignore debug libs and
set(Boost_USE_RELEASE_LIBS      ON)	 # only find release libs
set(Boost_USE_MULTITHREADED		ON)
set(Boost_USE_STATIC_RUNTIME    OFF)
set(Boost_NO_BOOST_CMAKE 		ON)  # to disable the search for boost-cmake
set(Boost_NO_SYSTEM_PATHS 		ON)

set(BOOST_ROOT $ENV{BOOST_ROOT})
set(Boost_DIR ${BOOST_ROOT})
set(Boost_LIBRARY_DIRS "${BOOST_ROOT}/lib")

find_package(Boost)

if(Boost_FOUND)
  message(STATUS "Found BOOST_ROOT: ${BOOST_ROOT}")
  message(STATUS "Found Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
  message(STATUS "Found Boost_LIBRARY_DIRS: ${Boost_LIBRARY_DIRS}")

endif()
