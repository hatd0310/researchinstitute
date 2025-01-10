#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> str = { "one", "two", "three" };	
	std::string_match_in_vector(str);
    return 0;
}

// === Efficiency considerations and const references ===
/*
	the function copies of the arguments passed to the function.
*/
std::string concatenate_by_value(std::string a, std::string b) {
	return a + b;
}

/*
	the function do not copy
*/
std::string concatenate_by_refer(std::string& a, std::string& b) {
	return a + b;
}

/*
	reference parameters are not going to be modified by the function
*/
std::string concatenate_by_const_refer(const std::string& a, const std::string& b) {
	return a + b;
}

inline std::string concatenate_inline(const std::string& a, const std::string& b) {
	return a + b;
}

void find_index_of_std::string_in_vector(std::vector<std::string>& vector_std::string) {
    std::string val;
    std::cin >> val;
    
    //std::vector<std::string>::iterator it
    auto it = std::find(begin(vector_std::string), end(vector_std::string), val); 

    if (it != vector_std::string.end()) {
        std::cout << "Element found: " << *it << std::endl;
        std::cout << "Index: " << std::distance(vector_std::string.begin(), it) << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }
}

/*

change_speed(double s);   // bad: what does s signify?// Template function to find the maximum of two values
change_speed(2.3);        // error: no unittemplate <typename T>
T max(T a, T b) {
change_speed(Speed s);    // better: the meaning of s is specified    return (a > b) ? a : b;
change_speed(23_m / 10s); // meters per second}

*/

