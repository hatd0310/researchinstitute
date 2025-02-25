#include <iostream>
#include <fstream> // Stream class to both read (ifstream) and write(ofstream) from/to files
#include <filesystem>

// Define the root directory of your project workspace
// const std::filesystem::path project_root = std::filesystem::current_path().parent_path();

void read_file(const std::filesystem::path dir_resourse)
{

	// Example: Access a file within the "resources" folder
	std::filesystem::path data_file_path = dir_resourse / "resources" / "input.lst";

	// Check if the file exists
	if (std::filesystem::exists(data_file_path))
	{
		std::cout << "File found: " << data_file_path << std::endl;
		// Proceed to open and read the file
	}
	else
	{
		std::cerr << "File not found: " << data_file_path << std::endl;
	}
}
