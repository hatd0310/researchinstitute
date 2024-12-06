find_package(PostgreSQL REQUIRED)

# Define additional search paths for root directories.
set(PostgreSQL_HOME_DIR $ENV{POSTGRESQL_HOME})
set(PostgreSQL_KNOWN_VERSIONS ${PostgreSQL_ADDITIONAL_VERSIONS} "16")


# This command attempts to find the library, REQUIRED argument is optional


include_directories("${PostgreSQL_LIBRARIES}")
include_directories("${PostgreSQL_INCLUDE_DIRS}")
include_directories("${PostgreSQL_LIBRARY_DIRS}")
include_directories("${PostgreSQL_VERSION_STRING}")

message(STATUS "PostgreSQL_HOME_DIR: ${PostgreSQL_HOME_DIR}")
message(STATUS "PostgreSQL_LIBRARIES: ${PostgreSQL_LIBRARIES}")
message(STATUS "PostgreSQL_LIBRARY_DIRS: ${PostgreSQL_LIBRARY_DIRS}")
message(STATUS "PostgreSQL_INCLUDE_DIRS: ${PostgreSQL_INCLUDE_DIRS}")



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

find_path(PostgreSQL_INCLUDE_DIRS
  NAMES libpq-fe.h
  PATHS
   # Look in other places.
   $ENV{POSTGRESQL_HOME}
  PATH_SUFFIXES
    pgsql
    postgresql
    include
    ${PostgreSQL_INCLUDE_ADDITIONAL_SEARCH_SUFFIXES}
  # Help the user find it if we cannot.
  DOC "The ${PostgreSQL_INCLUDE_DIR_MESSAGE}"
)