#include <stdio.h> // #include <cstdio>
#include <stdint.h>

int main() {
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
  
    return 0;
}