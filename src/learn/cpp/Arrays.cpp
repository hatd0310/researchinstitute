#include <iostream>
#include <vector>


int main() {

    int arr[5] = {1, 2, 3, 4, 5};






    return 0;
}

/* Passing by value */
void printArray(int arr[5]) {
    std::cout << "Address of arr: " << &arr << "\n";

}


/* Passing by reference */
void printArray(int(&arr)[5]) {

}


