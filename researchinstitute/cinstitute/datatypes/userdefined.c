#include <stdio.h>

/* Derived Data Type:
 * array:       A collection of elements of the same type
 * pointer:     A variable that stores the memory address of another variable.
 * structure:   A user-defined data type that groups different types of variables.
 * union:       A user-defined data type that allows storing different data types in the same memory location
 */

 /* structure */
struct Person {
    char name[50];
    int age;
};

/* union */
union Data {
    int i;
    float f;
    char str[20];
};

/* Enumeration Data Type:
 * enum:    A user-defined data types that consists of a set of named integer constants
 */
enum Color {
    RED,
    GREEN,
    BLUE
};



int main() {

    integerDataTypes();
    return 0;
}