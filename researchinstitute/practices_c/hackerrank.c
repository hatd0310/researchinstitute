#include "library.h"

/* https://www.hackerrank.com/challenges/hello-world-c/problem?isFullScreen=true */
void helloWorld() {

    char c, s[100], sen[100];

    /*
     * Note:
     * [] is the scan set character.
     * ^\n stands for taking input until a newline isn't encountered.
     * %*c
     */
    scanf("%c\n%s\n%[^\n]%*c", &c, s, sen);

    printf("%c == %s == %s", c, s, sen);

}


int main() {

    helloWorld();






    return 0;
}


