#include <iostream>
#include <vector>
#include <stdint.h>


void definition_pointer() {
    int* num1 = new int(11);
    int* num2 = num1;

    *num1 = 22;

    std::cout << "num1 = " << *num1 << std::endl;
    std::cout << "num2 = " << *num2 << std::endl;
}
int main() {
	definition_pointer();
	
	return 0;

}

void test_pointer() {
    /*
     * Example:
     * 0x12 => (1 * 16^1) + (2 * 16^0) = (1 * 16) + (2 * 1) = 16 + 2 = 18
     * 0x34 => (3 * 16^1) + (4 * 16^0) = (3 * 16) + (4 * 1) = 48 + 4 = 52
     */

    uint8_t arr[4] = { 0x12, 0x34, 0x56, 0x78 };
    uint8_t arr_2[4] = { 0x11, 0x22, 0x33, 0x44 };

    printf("Address of arr   : %p\n", (void*)&arr);
    printf("Address of arr[0]: %p\n", (void*)&arr[0]);
    printf("Address of arr[1]: %p\n", (void*)&arr[1]);
    printf("Address of arr[2]: %p\n", (void*)&arr[2]);
    printf("Address of arr[3]: %p\n\n", (void*)&arr[3]);

    printf("Address of arr_2   : %p\n", (void*)&arr_2);
    printf("Address of arr_2[0]: %p\n", (void*)&arr_2[0]);
    printf("Address of arr_2[1]: %p\n", (void*)&arr_2[1]);
    printf("Address of arr_2[2]: %p\n", (void*)&arr_2[2]);
    printf("Address of arr_2[3]: %p\n\n", (void*)&arr_2[3]);

    // Casting (= explicit conversion) [cf. implicit conversion]
    // Casting the address of first element (which is of type uint8_t*) to a uint32_t*
    // Note: Dereferencing ptr_1 is safe because it points to a valid memory location
    uint32_t* ptr_1 = (uint32_t*)&arr[0];
    printf("Address in ptr_1: %p\n", ptr_1);
    printf("Address in ptr_1: %p\n", (void*)ptr_1);
    printf("Value pointed to by ptr_1: 0x%08X\n", *ptr_1);

    printf("\n");

    // Note: Dereferencing ptr_2 is unsafe and can lead to undefined behavior
    /*
    uint32_t* ptr_2 = (uint32_t*)arr[0];
    printf("Address in ptr_2: %p\n", ptr_2);
    printf("Address in ptr_2: %p\n", (void*)ptr_2);
    printf("Value pointed to by ptr_2: 0x%08X\n", *ptr_2);
    */

}

// Pass-by-Value: clone modified inside the function
int square_value(int n) {
    std::cout << "Address: " << &n << " = Value: " << n << std::endl;
    n *= n; // clone modified inside the function
    std::cout << "Address: " << &n << " = Value: " << n << std::endl;

    return n;
}

// Pass-by-Reference with Pointer Arguments: Explicit de-referencing to get the value pointed-to
int* square_pointer(int *n) {
    std::cout << "Address: " << &n << " = Value: " << n << std::endl;
    *n *= *n; // Explicit de-referencing to get the value pointed-to
    std::cout << "Address: " << &n << " = Value: " << n << std::endl;

    return n;
}

// Pass-by-Reference with Reference Arguments:
int square_refer(int &n) {
    std::cout << "Address: " << &n << " = Value: " << n << std::endl;
    n *= n;
    std::cout << "Address: " << &n << " = Value: " << n << std::endl;
    return n;

}

/*
 * In the section 1.9 of the book Tour C++ 3rd edition
 * Explain assignment pointer pointer and pointer to new value
 */
void section19_mappingToHardware() {
    int x = 2;
    std::cout << "x: " << x << " = " << &x << std::endl;
    
    int y = 3;
    std::cout << "y: " << y << " = " << &y << std::endl;
    
    int* p = &x;
    int& r{ x }; // same as int& r = x bind r to x (r refer to x)
    std::cout << "Address of ptr p: " << &p << " point to " << p << std::endl;
    
    int* q = &y; // p != q and *p != *q
    std::cout << "Address of ptr q: " << &q << " point to " << q << std::endl;

    p = q;
    *p = 20;
    std::cout << "After p becomes &y (obviousily) *p==*q, and also modify value to 20:" << std::endl;
    std::cout << "x: " << x << " = " << &x << std::endl;
    std::cout << "y: " << y << " = " << &y << std::endl;
    std::cout << "Address of ptr p: " << &p << " point to " << p << std::endl;
    std::cout << "Address of ptr q: " << &q << " point to " << q << std::endl;
}

void ptr2ptr() {

   
    int n = 5;
    int** arr = new int* [n];

    // Initialize each pointer in the array to point to a dynamically allocated integer
    for (int i = 0; i < n; i++) {
        arr[i] = new int;
        *arr[i] = i * 10; // Assign a value to the integer pointed to by arr[i]
    }

    // Access and print the values pointed to by the pointers in the array
    for (int i = 0; i < n; i++) {
        std::cout << *arr[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate the memory for each integer and the array of pointers
    for (int i = 0; i < n; i++) {
        delete arr[i];
    }
    delete[] arr;

}
