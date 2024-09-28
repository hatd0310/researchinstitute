#include <iostream>

void printArray(int arr[6], int sizeOfArr);

int main() {

    int arr[6] = {1, 2, 3, 4, 5, 6};
    std::cout << "Address of arr real: " << &arr << "\n";
    
    int sizeOfArr = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, sizeOfArr);

    std::cout << sizeof(arr) << "\n";



    return 0;
}

/* Passing by value */
void printArray(int arr[6], int sizeOfArr) {
    std::cout << "Address of arr clone: " << &arr << "\n";
    
    int i;
    for (i = 0; i < sizeOfArr; ++i) {
        arr[i] = 1;
        std::cout << "Address of arr[" << i << "] = " << &arr[i] << " =" << "\n";
    }

}


/* Passing by reference */
void printArray(int(&arr)[5]) {

}

/* Multidimensional */
/* datatype arrayName[size1][size2]...[sizeN] */
void multiDimensional() {
    // creating 2d and 3d array 
    int arr1[2][4];
    int arr2[2][4][8];

    // using sizeof() operator to get the size of the above arrays 
    std::cout << "Size of array arr1: " << sizeof(arr1)
        << " bytes" << "\n";
    std::cout << "Size of array arr2: " << sizeof(arr2)
        << " bytes" << "\n";

}