#include <iostream>
#include <vector>



void find_index_of_string_in_vector(std::vector<std::string>& v);

int main() {
    std::vector<std::string> str = { "one", "two", "three" };	
	string_match_in_vector(str);
    return 0;
}


void find_index_of_string_in_vector(std::vector<std::string>& vector_string) {
    std::string val;
    std::cin >> val;
    
    //std::vector<std::string>::iterator it
    auto it = std::find(begin(vector_string), end(vector_string), val); 

    if (it != vector_string.end()) {
        std::cout << "Element found: " << *it << std::endl;
        std::cout << "Index: " << std::distance(vector_string.begin(), it) << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }
}

/*

change_speed(double s);   // bad: what does s signify?
change_speed(2.3);        // error: no unit

change_speed(Speed s);    // better: the meaning of s is specified
change_speed(23_m / 10s); // meters per second

*/
