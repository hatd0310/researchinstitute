// #(hash) preprocessor directive
#include <stdio.h>

// Symbolic Constants
#define PI 3.14159
#define MAX_BUFFER_SIZE 1024

#define LOWER 0     /* lower limit of table */
#define UPPER 300   /* upper limit */
#define STEP  0     /* step size */



int main() {

    // getchar() return ASCII code.
    // scanf() 
    int arr[5] = { 1, 2, 3, 4, 5 };

    printf("Memory location of the first element: %p\n", &arr[0]);
    printf("Memory location of the array itself:  %p\n", arr);

    return 0;
}



