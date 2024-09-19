// #(hash) preprocessor directive
#include <stdio.h>

// Symbolic Constants
#define PI 3.14159
#define MAX_BUFFER_SIZE 1024

#define LOWER 0     /* lower limit of table */
#define UPPER 300   /* upper limit */
#define STEP  0     /* step size */


int main() {




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


/* getline: read a line into s, return length */
int getLine(char s[], int lim) {

    int c, i;
    for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;


}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
    int i = 0;

    while ((to[i] = from[i]) != '\0') {
        ++i;
    }

}

