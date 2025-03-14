#include <iostream>
#include <libpq-fe.h> // PostgreSQL client library

bool testPostgresConnection(const std::string &connInfo) {
  PGconn *conn = PQconnectdb(connInfo.c_str());
  if (PQstatus(conn) != CONNECTION_OK) {
    std::cerr << "Connection to database failed: " << PQerrorMessage(conn)
              << std::endl;
    PQfinish(conn);
    return false;
  }

  // Optionally, perform a simple query to further test the connection.
  PGresult *res = PQexec(conn, "SELECT 1");
  if (PQresultStatus(res) != PGRES_TUPLES_OK) {
    std::cerr << "Query failed: " << PQerrorMessage(conn) << std::endl;
    PQclear(res);
    PQfinish(conn);
    return false;
  }

  PQclear(res);
  PQfinish(conn);
  return true;
}
