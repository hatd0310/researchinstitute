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


    int *p = &v[1];
    std::cout << "Address of pointer: " << &p << " -> &v[1]: " << &v[1] << "\n";
    std::cout << "\n";

    for (int &i : v) {
        std::cout << "v[i] = " << i << " => Address: " << &i << "\n";
    }
}



void test_pointer() {
    /*
     * Example:
     * 0x12 => (1 * 16^1) + (2 * 16^0) = (1 * 16) + (2 * 1) = 16 + 2 = 18
     * 0x34 => (3 * 16^1) + (4 * 16^0) = (3 * 16) + (4 * 1) = 48 + 4 = 52
     */
    uint8_t arr[4] = { 0x12, 0x34, 0x56, 0x78 };
    uint8_t arr_2[4] = { 0x11, 0x22, 0x33, 0x44 };

    // Print the addresses of arr[0], arr[1], arr[2], arr[3]
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
    uint32_t* ptr_1 = (uint32_t*)&arr[0];
    uint32_t* ptr_2 = (uint32_t*)arr[0];

    // Print the addresses stored in ptr_1 and ptr_2
    printf("Address in ptr_1: %p\n", ptr_1);
    printf("Address in ptr_2: %p\n", ptr_2);
    // printf("Address in ptr_1: %p\n", (void*)ptr_1);

    // Print the value pointed to by ptr_1
    // Note: Dereferencing ptr_1 is safe because it points to a valid memory location
    printf("Value pointed to by ptr_1: 0x%08X\n", *ptr_1);

    // Note: Dereferencing ptr_2 is unsafe and can lead to undefined behavior
    // printf("Value pointed to by ptr_2: 0x%08X\n", *ptr_2);

    /*
    For cross-platform code, it's best to use fixed-width integer types
    (like uint32_t, int64_t, etc.) from <cstdint> (C++11 and later) or
    <stdint.h> (in C99) if you need specific sizes.
    */
}

/*
 * The indirection operator (or dereferencing operator) (*) operates on a pointer,
 * and returns the value stored in the address kept in the pointer variable.
 * For example, if pNumber is an int pointer, *pNumber returns the int value "pointed to" by pNumber.
 */
void indirectionOrDereferencingOperator() {
    int number = 88;    // Declare an int variable and assign an initial value
    int* pNumber;      // Declare a pointer variable pointing to an int (or int pointer)
    pNumber = &number;  // assign the address of the variable number to pointer pNumber

    std::cout << pNumber << "\n";  // Print content of pNumber (0x22ccf0)
    std::cout << &number << "\n";  // Print address of number (0x22ccf0)
    std::cout << *pNumber << "\n"; // Print value pointed to by pNumber (88)
    std::cout << number << "\n";   // Print value of number (88)

    *pNumber = 99;            // Re-assign value pointed to by pNumber
    std::cout << pNumber << "\n";  // Print content of pNumber (0x22ccf0)
    std::cout << &number << "\n";  // Print address of number (0x22ccf0)
    std::cout << *pNumber << "\n"; // Print value pointed to by pNumber (99)
    std::cout << number << "\n";   // Print value of number (99)
    // The value of number changes via pointer

    std::cout << &pNumber << "\n"; // Print the address of pointer variable pNumber (0x22ccec)

    /**/
    int a = 100, b = 1000;

    printf("a = %d\nb = %d\na + b = %d\nabs(a - b) = %d\n", a, b, addition(&a, &b), subtraction(&a, &b));

    int* ptr = &a;
    std::cout << "a = " << a << " => address: " << &a << "\n";

    int y = *ptr;
    std::cout << "y = *ptr = " << y << " => address: " << &y << "\n";

    *ptr = 20;
    std::cout << "ptr pointer to address of a = " << ptr << " => address of ptr: " << &ptr << "\n";

    std::cout << "*ptr change to value of a to 20 => a = " << a << " => address: " << &a << "\n";

}

/*
 * Initialize a pointer to 0 or NULL, nullptr (C++11 or later)
 * it points to nothing => called a null pointer.
 * Dereferencing a nul pointer (*p) causes an STATUS_ACCESS_VIOLANTION exception
 * 
 */
void nullPointers() {
    int* ptr1 = 0;              // Declare an int pointer, and initialize the pointer to point to nothing
    std::cout << *ptr1 << "\n"; // ERROR! STATUS_ACCESS_VIOLATION exception

    int* ptr2 = NULL;           // Also declare a NULL pointer points to nothing
    std::cout << *ptr2 << "\n"; 

    int* ptr3 = nullptr;
    std::cout << *ptr3 << "\n";

}

void referAPtr() {
    int number1 = 88, number2 = 22;

    // Create a pointer pointing to number1
    int* pNumber1 = &number1;       // Explicit referencing
    *pNumber1 = 99;                 // Explicit dereferencing
    std::cout << *pNumber1 << "\n"; // 99
    std::cout << &number1 << "\n";  // 0x22ff18
    std::cout << pNumber1 << "\n";  // 0x22ff18 (content of the pointer variable - same as above)
    std::cout << &pNumber1 << "\n"; // 0x22ff10 (address of the pointer variable)
    
    pNumber1 = &number2;            // Pointer can be reassigned to store another address
    std::cout << "pNumber1 = " << pNumber1 << " => address = " << *pNumber1 << "\n";
    std::cout << "number1 = " << number1 << " => address = " << &number1 << "\n";
    std::cout << "number2 = " << number2 << " => address = " << &number2 << "\n";
    
    *pNumber1 = 1; // Pointer reassigned to store another address and change value of number2
    std::cout << "pNumber1 = " << pNumber1 << " => address = " << *pNumber1 << "\n";
    std::cout << "number1 = " << number1 << " => address = " << &number1 << "\n";
    std::cout << "number2 = " << number2 << " => address = " << &number2 << "\n";

    // Create a reference (alias) to number1
    int& refNumber1 = number1; // Implicit referencing (NOT &number1)
    refNumber1 = 11;           // Implicit dereferencing (NOT *refNumber1)
    std::cout << refNumber1 << "\n"; // 11
    std::cout << &number1 << "\n";   // 0x22ff18
    std::cout << &refNumber1 << "\n";// 0x22ff18
    //refNumber1 = &number2;     // Error! Reference cannot be re-assigned
                                 // error: invalid conversion from 'int*' to 'int'
    
    refNumber1 = number2;        // refNumber1 is still an alias to number1.
    // Assign value of number2 (22) to refNumber1 (and number1).
    number2++;
    std::cout << refNumber1 << "\n";  // 22
    std::cout << number1 << "\n";     // 22
    std::cout << number2 << "\n";     // 23
}


/* Pass-by-Value */
int square_value(int n) {
    std::cout << "Address: " << &n << " = Value: " << n << "\n";
    n *= n; // clone modified inside the function
    std::cout << "Address: " << &n << " = Value: " << n << "\n";

    return n;
}

/* Pass-by-Reference with Pointer Arguments */
void square_pointer(int *n) {
    std::cout << "Address: " << &n << " = Value: " << n << "\n";
    *n *= *n; // Explicit de-referencing to get the value pointed-to
}

/* Pass-by-Reference with Reference Arguments */
void square_refer(int &n) {
    std::cout << "Address: " << &n << " = Value: " << n << "\n";
    n *= n;
    std::cout << "Address: " << &n << " = Value: " << n << "\n";
}


int count_x(const char* p, char x) {
    // count the number of occurrences of x in p[]
    // p is assumed to point to a zero-terminated array of char (or to nothing)
    
    if (p == nullptr) {
        return 0;
    }
    int count = 0;
    while (*p) { // equivalent to comparing the value to 0
        if (*p == x) {
            ++count;
        }
        ++p;
    }

    return count;
}

/*
 * In the section 1.9 of the book Tour C++ 3rd edition
 * Explain assignment pointer pointer and pointer to new value
 */
void section19() {
    int x = 2;
    std::cout << "x: " << x << " = " << &x << "\n";
    int y = 3;
    std::cout << "y: " << y << " = " << &y << "\n";
    int* p = &x;
    std::cout << "Address of ptr p: " << &p << " = " << p << "\n";
    int* q = &y;
    std::cout << "Address of ptr q: " << &q << " = " << q << "\n";

    p = q; // p becomes &y (obviousily) *p==*q
    *p = 20;
    std::cout << "After:" << "\n";
    std::cout << "x: " << x << " = " << &x << "\n";
    std::cout << "y: " << y << " = " << &y << "\n";
    std::cout << "Address of ptr p: " << &p << " = " << p << "\n";
    std::cout << "Address of ptr q: " << &q << " = " << q << "\n";
}