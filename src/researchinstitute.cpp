#include <boost/asio.hpp>
#include <stdexcept>
#include "database.cpp"

int main() {
    try {
        boost::asio::io_context io_context; // You can use asio for other network operations in your app.
        std::string connInfo = "host=localhost port=5432 dbname=postgres user=postgres password=postgres"; // Replace with your credentials.

        if (testPostgresConnection(connInfo)) {
            std::cout << "Database connection successful!" << std::endl;
        } else {
            std::cout << "Database connection failed." << std::endl;
        }

    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
