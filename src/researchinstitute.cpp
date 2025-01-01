#include <iostream>
#include <stdio.h>
#include <iterator>
#include <algorithm>

#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics/stats.hpp>
#include <boost/accumulators/statistics/mean.hpp>
#include <boost/accumulators/statistics/moment.hpp>
using namespace boost::accumulators;

// lib database
#include <libpq-fe.h>

// #include "learn\cuda\simpleMultiGPU.cu"
#define BOOST_TEST_MODULE searchinstitute
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(searchinstitute)
{
    BOOST_CHECK(1 + 1 == 2);
    printf("Connection Established\n");
}

using namespace std;

void test_connectDB();
void boostas();

int a (int argc, char* argv[]) {
    test_connectDB();
    boostas();
    
    return 0;
}

void test_connectDB() {
    printf("libpq tutorial\n");

    // Connect to the database
    // conninfo is a string of keywords and values separated by spaces.
    const char* conninfo = "dbname=postgres user=postgres password=postgres host=localhost port=5432";

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

void boostas() {



 // Define an accumulator set for calculating the mean and the
    // 2nd moment ...
    accumulator_set<double, stats<tag::mean, tag::moment<2> > > acc;

    // push in some data ...
    acc(1.2);
    acc(2.3);
    acc(3.4);
    acc(4.5);

    // Display the results ...
    std::cout << "Mean:   " << mean(acc) << std::endl;
    std::cout << "Moment: " << moment<2>(acc) << std::endl;
    
}
