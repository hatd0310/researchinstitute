#include <stdio.h>
#include <stdbool.h> // C99 and later for Boolean operations

/* https://www.hackerrank.com/challenges/hello-world-c/problem?isFullScreen=true */
void helloWorld() {

    char c, s[100], sen[100];

    /*
     * Note:
     * [] is the scan set character.
     * ^\n stands for taking input until a newline isn't encountered.
     * %*c
     */
    printf("Enter character = ");
    scanf("%c", &c);
    printf("Out: %c\n", c);

    printf("Enter String = ");
    scanf("%s", s);

    printf("Out: %s\n", s);

    printf("Enter Sentence = ");
    scanf("%[^\n]%*c", sen);
    printf("Out: %s\n", sen);
}


int main() {

    helloWorld();






    return 0;
}


