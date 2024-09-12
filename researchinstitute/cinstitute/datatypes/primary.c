#include <stdio.h>

void formatSpecific() {
    /*
     * %o for octal
     * %x for hexadecimal
     */

}


void dataTypes_integer() {

    /* signed (positive, negative, zero) size: -2**31 -> 2**31-1 */
    int signedNumber = 10;
    printf("signedNumber = %d has address = %p\n", signedNumber, &signedNumber);

    /* unsigned (positive, zero) size: 0 -> 2**32-1 */
    unsigned int unsignedNumber = 10;
    printf("signedNumber = %u has address = %p\n", unsignedNumber, &unsignedNumber);

    long longNumber = 1234567890l;


}


void dataTypes_floatingPoint() {
    /*
     *
     */
    float floatNumber = 10.10f;

    double doubleNumber = 10.10d;


}


void dataTypes_boolean() {

    bool isTrue = 1; // Equivalent to true
    bool isFalse = 0; // Equivalent to false
}