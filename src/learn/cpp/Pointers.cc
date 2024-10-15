#include <iostream>
#include <vector>
#include <stdint.h>

void increment(int* v) {
    (*v)++;
}

int addition(int* ptr1, int* ptr2) {
    return *ptr1 + *ptr2;
}

int subtraction(int* ptr1, int* ptr2) {
    return abs(*ptr1 - *ptr2);
}

void pointerAndVector() {

    std::vector<int> v = { 11, 2, 4, 55, 88 };
    std::cout << "Address vector: " << &v << "\n";

    for (int i = 0; i < v.size(); i++) {
        std::cout << "Address of v[" << i << "]" << " = " << v[i] << " = " << &v[i] << "\n";
    }
    std::cout << "\n";


    int* p = &v[1];
    std::cout << "Address of pointer: " << &p << " -> &v[1]: " << &v[1] << "\n";
    std::cout << "\n";

    for (int& i : v) {
        std::cout << "v[i] = " << i << " => Address: " << &i << "\n";
    }
}

void test_pointer() {
    /* 
     * Example:
     * 0x12 => (1 * 16^1) + (2 * 16^0) = (1 * 16) + (2 * 1) = 16 + 2 = 18
     * 0x34 => (3 * 16^1) + (4 * 16^0) = (3 * 16) + (4 * 1) = 48 + 4 = 52
     */

    uint8_t arr[4]   = { 0x12, 0x34, 0x56, 0x78 };
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

void referencePointer() {
    int number1 = 88, number2 = 22;

    // Create a pointer pointing to number1
    int* ptrNumber = &number1; // Explicit referencing
    *ptrNumber = 99;           // Explicit dereferencing
    std::cout << "Address of ptrNumber: " << &ptrNumber << " point to " << ptrNumber << " = " << *ptrNumber << "\n";
    std::cout << "Address of number1: " << &number1 << " = " << number1 << "\n";
    std::cout << "Address of number2: " << &number2 << " = " << number2 << "\n\n";

    ptrNumber = &number2; // Pointer can be reassigned to store another address
    std::cout << "Pointer can be reassigned to store another address" << "\n";
    std::cout << "Address of ptrNumber: " << &ptrNumber << " point to " << ptrNumber << " = " << *ptrNumber << "\n";
    std::cout << "Address of number1: " << &number1 << " = " << number1 << "\n";
    std::cout << "Address of number2: " << &number2 << " = " << number2 << "\n\n";
    
    *ptrNumber = 1; // Pointer reassigned to store another address and change value of number2
    std::cout << "Pointer reassigned to store another address and change value of number2" << "\n";
    std::cout << "Address of ptrNumber: " << &ptrNumber << " point to " << ptrNumber << " = " << *ptrNumber << "\n";
    std::cout << "Address of number1: " << &number1 << " = " << number1 << "\n";
    std::cout << "Address of number2: " << &number2 << " = " << number2 << "\n\n";

    // Create a reference (alias) to number1
    int& refNumber1 = number1; // Implicit referencing (NOT &number1)
    refNumber1 = 11;           // Implicit dereferencing (NOT *refNumber1)
    std::cout << "Address of refNumber1: " << &refNumber1 << " = " << refNumber1 << "\n";
    std::cout << "Address of number1: " << &number1 << " = " << number1 << "\n";
    std::cout << "Address of number2: " << &number2 << " = " << number2 << "\n";
    //refNumber1 = &number2;     // Error! Reference cannot be re-assigned
                                 // error: invalid conversion from 'int*' to 'int'
    
    refNumber1 = number2;        // refNumber1 is still an alias to number1.
    // Assign value of number2 (22) to refNumber1 (and number1).
    ++number2;
    std::cout << "Address of refNumber1: " << &refNumber1 << " = " << refNumber1 << "\n";
    std::cout << "Address of number1: " << &number1 << " = " << number1 << "\n";
    std::cout << "Address of number2: " << &number2 << " = " << number2 << "\n\n";

}

/* Pass-by-Value: clone modified inside the function */
int square_value(int n) {
    std::cout << "Address: " << &n << " = Value: " << n << "\n";
    n *= n; // clone modified inside the function
    std::cout << "Address: " << &n << " = Value: " << n << "\n";

    return n;
}

/* Pass-by-Reference with Pointer Arguments: Explicit de-referencing to get the value pointed-to */
void square_pointer(int *n) {
    std::cout << "Address: " << &n << " = Value: " << n << "\n";
    *n *= *n; // Explicit de-referencing to get the value pointed-to
}

/* Pass-by-Reference with Reference Arguments:  */
void square_refer(int &n) {
    std::cout << "Address: " << &n << " = Value: " << n << "\n";
    n *= n;
    std::cout << "Address: " << &n << " = Value: " << n << "\n";
}

/*
 * In the section 1.9 of the book Tour C++ 3rd edition
 * Explain assignment pointer pointer and pointer to new value
 */
void section19_mappingToHardware() {
    int x = 2;
    std::cout << "x: " << x << " = " << &x << "\n";
    
    int y = 3;
    std::cout << "y: " << y << " = " << &y << "\n";
    
    int* p = &x;
    int& r{ x }; // same as int& r = x bind r to x (r refer to x)
    std::cout << "Address of ptr p: " << &p << " point to " << p << "\n";
    
    int* q = &y; // p != q and *p != *q
    std::cout << "Address of ptr q: " << &q << " point to " << q << "\n";

    p = q;
    *p = 20;
    std::cout << "After p becomes &y (obviousily) *p==*q, and also modify value to 20:" << "\n";
    std::cout << "x: " << x << " = " << &x << "\n";
    std::cout << "y: " << y << " = " << &y << "\n";
    std::cout << "Address of ptr p: " << &p << " point to " << p << "\n";
    std::cout << "Address of ptr q: " << &q << " point to " << q << "\n";
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

int main() {
    ptr2ptr();

    return 0;
}