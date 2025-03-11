set(PostgreSQL_ROOT $ENV{POSTGRESQL_HOME})


find_package(PostgreSQL REQUIRED)

if(PostgreSQL_FOUND)
  message(STATUS "PostgreSQL found:")
  message(STATUS "  include: ${PostgreSQL_INCLUDE_DIRS}")
  message(STATUS "  library: ${PostgreSQL_LIBRARIES}")

  target_include_directories(researchinstitute PRIVATE ${PostgreSQL_INCLUDE_DIRS})
  target_link_libraries(researchinstitute PRIVATE ${PostgreSQL_LIBRARIES})

else()
  message(FATAL_ERROR "PostgreSQL not found.")
endif()

#Optional: if you want to use PostgreSQL client libraries, you might want to specify which components you need:
#find_package(PostgreSQL REQUIRED COMPONENTS client)
#or
#find_package(PostgreSQL REQUIRED COMPONENTS server)
#or
#find_package(PostgreSQL REQUIRED COMPONENTS client server)
#and so on.