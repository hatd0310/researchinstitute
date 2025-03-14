#include <iostream>
#include <vector> // https://en.cppreference.com/w/cpp/container/vector
#include <array> // https://en.cppreference.com/w/cpp/container/array

void dynamic_array() { std::vector<int> v; }

// std::array is a container that encapsulates fixed size arrays.
void static_array() {
  constexpr int size_of_array = 5; // Compile-time constant
  std::array<int, size_of_array> a = {1, 2, 3, 4,
                                      5}; // Size matches initialization
                                          // Use 'a' as needed
}

int main() {
  static_array();
  return 0;
}