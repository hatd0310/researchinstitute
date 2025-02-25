#include <iostream>

// === Efficiency considerations and const references ===
/*
	the function copies of the arguments passed to the function.
*/
std::string concatenate_by_value(std::string a, std::string b)
{
	return a + b;
}

/*
	the function do not copy
*/
std::string concatenate_by_refer(std::string& a, std::string& b)
{
	return a + b;
}

/*
	reference parameters are not going to be modified by the function
*/
std::string concatenate_by_const_refer(const std::string& a, const std::string& b)
{
	return a + b;
}

inline std::string concatenate_inline(const std::string& a, const std::string& b)
{
	return a + b;
}
