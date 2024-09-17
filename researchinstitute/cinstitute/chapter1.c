#include <stdio.h>

void exercise16();
void exercise17();

int main() {

    exercise16();




    return 0;
}


/* (?) Verify that the expression getchar() != EOF is 0 or 1. */
void exercise16() {


    int c;
    while ((c = getchar()) != EOF) {
        printf("you input: %d ==> ASCII value: %d\n", c, c);
        putchar(c);
    }



}

/* (?) Write a program to print the value of EOF. */
void exercise17() {

}

