#include <iostream>
#include <vector>
#include <stdint.h>


int main() {

    int arr[5] = { 1, 2, 3, 4, 5 };
    std::cout << "Address of array: " << &arr << "\n";
    std::cout << "Address of array[0]: " << &arr[0] << "\n";

    int* ptr = arr;
    std::cout << "Address of pointer: " << ptr << " point to " << *ptr << "\n";

    int* ptr1 = &arr[0];
    std::cout << "Address of pointer: " << ptr1 << " point to " << *ptr1 << "\n";

    return 0;
}
