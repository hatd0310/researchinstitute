#include <iostream>
#include "C:\Users\hatd6\source\repos\researchinstitute\src\learn\cpp\tour_of_cpp\input_output.cpp"

using namespace std;



int main (int argc, char* argv[]) {
   	
	const std::filesystem::path project_root = std::filesystem::current_path().parent_path(); 
	read_file(project_root);
	
	
    return 0;
}

