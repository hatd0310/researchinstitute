#include <iostream>
#include <vector> // https://en.cppreference.com/w/cpp/container/vector
#include <array> // https://en.cppreference.com/w/cpp/container/array

void dynamic_array()
{
	std::vector<int> v;
}


// std::array is a container that encapsulates fixed size arrays.
void static_array(int size_of_array)
{
	std::array<int, size_of_array> a = { 1, 2, 3 };
	int arr[size_of_array];
}


int main()
{

	return 0;
}