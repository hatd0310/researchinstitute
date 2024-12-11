set(PostgreSQL_ADDITIONAL_VERSIONS "16")
set(PostgreSQL_KNOWN_VERSIONS ${PostgreSQL_ADDITIONAL_VERSIONS} "16")

set(PostgreSQL_ROOT_DIRECTORIES $ENV{POSTGRESQL_HOME})
message(STATUS "PostgreSQL_ROOT_DIRECTORIES: ${PostgreSQL_ROOT_DIRECTORIES}")

find_package(PostgreSQL REQUIRED)

# Define additional search paths for root directories.
# This command attempts to find the library, REQUIRED argument is optional

include_directories("${PostgreSQL_LIBRARIES}")
message(STATUS "PostgreSQL_LIBRARIES: ${PostgreSQL_LIBRARIES}")

include_directories("${PostgreSQL_INCLUDE_DIRS}")
message(STATUS "PostgreSQL_INCLUDE_DIRS: ${PostgreSQL_INCLUDE_DIRS}")

include_directories("${PostgreSQL_LIBRARY_DIRS}")
message(STATUS "PostgreSQL_LIBRARY_DIRS: ${PostgreSQL_LIBRARY_DIRS}")

include_directories("${PostgreSQL_VERSION_STRING}")
message(STATUS "PostgreSQL_VERSION_STRING: ${PostgreSQL_VERSION_STRING}")





# Add include directories to your target. PRIVATE is useful with multi-target projects - see documentation of target_include_directories for more info
target_include_directories(researchinstitute PRIVATE ${PostgreSQL_INCLUDE_DIRS})

# Add libraries to link your target againts. Again, PRIVATE is important for multi-target projects
# target_link_libraries(researchinstitute PRIVATE ${PostgreSQL_LIBRARIES})
target_link_libraries(researchinstitute PRIVATE PostgreSQL::PostgreSQL)


set(PostgreSQL_INCLUDE_PATH_DESCRIPTION "top-level directory containing the PostgreSQL include directories. E.g /usr/local/include/PostgreSQL/8.4 or C:/Program Files/PostgreSQL/8.4/include")
set(PostgreSQL_INCLUDE_DIR_MESSAGE "Set the PostgreSQL_INCLUDE_DIR cmake cache entry to the ${PostgreSQL_INCLUDE_PATH_DESCRIPTION}")
set(PostgreSQL_LIBRARY_PATH_DESCRIPTION "top-level directory containing the PostgreSQL libraries.")
set(PostgreSQL_LIBRARY_DIR_MESSAGE "Set the PostgreSQL_LIBRARY_DIR cmake cache entry to the ${PostgreSQL_LIBRARY_PATH_DESCRIPTION}")
set(PostgreSQL_ROOT_DIR_MESSAGE "Set the PostgreSQL_ROOT system variable to where PostgreSQL is found on the machine E.g C:/Program Files/PostgreSQL/8.4")




foreach(suffix ${PostgreSQL_KNOWN_VERSIONS})
  if(WIN32)
    list(APPEND PostgreSQL_LIBRARY_ADDITIONAL_SEARCH_SUFFIXES
        "PostgreSQL/${suffix}/lib")
    list(APPEND PostgreSQL_INCLUDE_ADDITIONAL_SEARCH_SUFFIXES
        "PostgreSQL/${suffix}/include")
    list(APPEND PostgreSQL_TYPE_ADDITIONAL_SEARCH_SUFFIXES
        "PostgreSQL/${suffix}/include/server")
  endif()
  if(UNIX)
    list(APPEND PostgreSQL_LIBRARY_ADDITIONAL_SEARCH_SUFFIXES
        "postgresql${suffix}"
        "postgresql@${suffix}"
        "pgsql-${suffix}/lib")
    list(APPEND PostgreSQL_INCLUDE_ADDITIONAL_SEARCH_SUFFIXES
        "postgresql${suffix}"
        "postgresql@${suffix}"
        "postgresql/${suffix}"
        "pgsql-${suffix}/include")
    list(APPEND PostgreSQL_TYPE_ADDITIONAL_SEARCH_SUFFIXES
        "postgresql${suffix}/server"
        "postgresql@${suffix}/server"
        "postgresql/${suffix}/server"
        "pgsql-${suffix}/include/server")
  endif()
endforeach()

#
# Look for an installation.
#
find_path(PostgreSQL_INCLUDE_DIR
  NAMES libpq-fe.h
  PATHS
   # Look in other places.
   ${PostgreSQL_ROOT_DIRECTORIES}
  PATH_SUFFIXES
    pgsql
    postgresql
    include
    ${PostgreSQL_INCLUDE_ADDITIONAL_SEARCH_SUFFIXES}
  # Help the user find it if we cannot.
  DOC "The ${PostgreSQL_INCLUDE_DIR_MESSAGE}"
)

find_path(PostgreSQL_TYPE_INCLUDE_DIR
  NAMES catalog/pg_type.h
  PATHS
   # Look in other places.
   ${PostgreSQL_ROOT_DIRECTORIES}
  PATH_SUFFIXES
    postgresql
    pgsql/server
    postgresql/server
    include/server
    ${PostgreSQL_TYPE_ADDITIONAL_SEARCH_SUFFIXES}
  # Help the user find it if we cannot.
  DOC "The ${PostgreSQL_INCLUDE_DIR_MESSAGE}"
)

# The PostgreSQL library.
set (PostgreSQL_LIBRARY_TO_FIND pq)
# Setting some more prefixes for the library
set (PostgreSQL_LIB_PREFIX "")
if ( WIN32 )
  set (PostgreSQL_LIB_PREFIX ${PostgreSQL_LIB_PREFIX} "lib")
  set (PostgreSQL_LIBRARY_TO_FIND ${PostgreSQL_LIB_PREFIX}${PostgreSQL_LIBRARY_TO_FIND})
endif()

function(__postgresql_find_library _name)
  find_library(${_name}
   NAMES ${ARGN}
   PATHS
     ${PostgreSQL_ROOT_DIRECTORIES}
   PATH_SUFFIXES
     lib
     ${PostgreSQL_LIBRARY_ADDITIONAL_SEARCH_SUFFIXES}
   # Help the user find it if we cannot.
   DOC "The ${PostgreSQL_LIBRARY_DIR_MESSAGE}"
  )
endfunction()
