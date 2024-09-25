#include <iostream>
#include <libpq-fe.h>

int main() {
    PGconn* conn = PQconnectdb("dbname=testdb user=postgres password=secret");

    if (PQstatus(conn) != CONNECTION_OK) {
        std::cerr << "Connection to database failed: " << PQerrorMessage(conn) << std::endl;
        PQfinish(conn);
        return 1;
    }

    std::cout << "Connected to the database successfully!" << std::endl;

    PQfinish(conn);
    return 0;
}