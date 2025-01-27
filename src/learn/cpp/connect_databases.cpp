#include <iostream>
#include <libpq-fe.h>
#include <cstdint>


void test_connect_db() {
    // Connect to the database
    // conninfo is a string of keywords and values separated by spaces.
    const char* conninfo = "dbname=postgres user=postgres password=postgres host=localhost port=5432";

    // Create a connection
    // PGconn *PQconnectdb(const char *conninfo);
    PGconn* conn = PQconnectdb(conninfo);

    // Check if the connection is successful
    if (PQstatus(conn) != CONNECTION_OK) {
        // If not successful, print the error message and finish the connection
        std::cout << "Error while connecting to the database server: %s\n" << PQerrorMessage(conn) << std::endl;

        // Finish the connection
        PQfinish(conn);

        // Exit the program
        exit(1);
    }

    // We have successfully established a connection to the database server
    printf("Connection successfully Name Database %s == Host: %s:%s\n", PQdb(conn), PQhost(conn), PQport(conn));
    
    PQfinish(conn);
}
