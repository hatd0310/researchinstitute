set(PostgreSQL_ROOT $ENV{POSTGRESQL_HOME})
set(PostgreSQL_INCLUDE_DIRS "${PostgreSQL_ROOT}/include")
set(PostgreSQL_LIBRARIES "${PostgreSQL_ROOT}/lib")

find_package(PostgreSQL REQUIRED)
