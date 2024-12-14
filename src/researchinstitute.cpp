#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <libpq-fe.h>
using namespace std;

void test_connectDB(char* db_name, char* user, char* password, char* host, char* port);

int main (int argc, char* argv[]) {

	test_connectDB(argv[0], argv[1], argv[2], argv[3], argv[4]);

	return 0;
}

void test_connectDB(char* db_name, char* user, char* password, char* host, char* port) {
    printf("libpq tutorial\n");

    // Connect to the database
    // conninfo is a string of keywords and values separated by spaces.
    const char* conninfo = "dbname=researchinstitute user=postgres password=postgres host=localhost port=5432";

    // Create a connection
    // PGconn *PQconnectdb(const char *conninfo);
    PGconn* conn = PQconnectdb(conninfo);

    // Check if the connection is successful
    if (PQstatus(conn) != CONNECTION_OK) {
        // If not successful, print the error message and finish the connection
        cout << "Error while connecting to the database server: %s\n" << PQerrorMessage(conn) << endl;

        // Finish the connection
        PQfinish(conn);

        // Exit the program
        exit(1);
    }

    // We have successfully established a connection to the database server
    printf("Connection Established\n");
    printf("Port: %s\n", PQport(conn));
    printf("Host: %s\n", PQhost(conn));
    printf("DBName: %s\n", PQdb(conn));

    // Close the connection and free the memory
    PQfinish(conn);
}
