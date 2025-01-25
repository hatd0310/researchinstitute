set(Boost_NO_SYSTEM_PATHS       ON)
set(Boost_USE_STATIC_RUNTIME    ON)
set(Boost_USE_STATIC_LIBS       ON)  # only find static libs
set(Boost_USE_DEBUG_LIBS        OFF) # ignore debug libs and
set(Boost_USE_RELEASE_LIBS      ON)  # only find release libs
set(Boost_USE_MULTITHREADED     ON)


set(BOOST_ROOT $ENV{BOOST_ROOT})
set(Boost_DIR $ENV{BOOST_ROOT})
set(BOOST_LIBRARYDIR ${BOOST_ROOT}\\libs)
set(CMAKE_INCLUDE_PATH ${CMAKE_INCLUDE_PATH} ${BOOST_ROOT})
set(CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} ${BOOST_LIBRARYDIR})

find_package(Boost PATHS ${BOOST_ROOT})
link_directories(${BOOST_LIBRARYDIR})

if(Boost_FOUND)
  message(STATUS "Found BOOST_ROOT: ${BOOST_ROOT}")
  include_directories(${Boost_INCLUDE_DIRS})
  include_directories(${Boost_INCLUDE_DIR})
  ADD_DEFINITIONS( "-DHAS_BOOST" )
endif()