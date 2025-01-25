#include <iostream>

#include "learn/cpp/tour_of_cpp/input_output.cpp"
#include "learn/cpp/connect_databases.cpp"
#include "learn/cpp/library_boost.cpp"

int main (int argc, char* argv[]) {

	const std::filesystem::path project_root = std::filesystem::current_path().parent_path();
	abc();
	read_file(project_root);

	test_connect_db();

	return 0;
}

