#include <iostream>

#include "learn/cpp/input_output.cpp"
#include "learn/cpp/connect_databases.cpp"
#include "learn/cpp/library_boost.cpp"

int main (int argc, char* argv[]) {

	const std::filesystem::path project_root = std::filesystem::current_path().parent_path();
	read_file(project_root); // input_output.cpp
	test_boost_library(); // library_boost.cpp
	test_connect_db(); // connect_databases.cpp

	return 0;
}

