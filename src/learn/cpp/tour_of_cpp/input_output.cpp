#include <iostream>
#include <fstream> 	// Stream class to both read (ifstream) and write(ofstream) from/to files
#include <filesystem>

void read_file() {
	std::filesystem::path curr_path = std::filesystem::current_path();
	std::cout << curr_path << std::endl;
}


int main() {
	read_file();

	return 0;

}
