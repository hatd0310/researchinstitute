#include <iostream>
#include <vector>

void printArray(int arr[5]);

int main() {


    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr);





    return 0;
}

/* Passing by value */
void printArray(int arr[5]) {
    std::cout << "Address of arr: " << &arr << "\n";

}


/* Passing by reference */
void printArray(int (&arr)[5]) {



}


