# Disable searching for system-wide Boost installations
set(Boost_NO_SYSTEM_PATHS ON)
set(Boost_USE_STATIC_RUNTIME ON)


set(BOOST_ROOT $ENV{BOOST_ROOT})
set(Boost_DIR "${BOOST_ROOT}")
set(BOOST_LIBRARY_DIRS "${BOOST_ROOT}/libs")

set(CMAKE_PREFIX_PATH "${BOOST_ROOT}" "${BOOST_LIBRARY_DIRS}" ${CMAKE_PREFIX_PATH}) 

