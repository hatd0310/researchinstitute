#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int main()
{

    return 0;
}

/* Chapter 1.7 Functions */
// power: raise base to n-th power; n >= 0
int power(int base, int n)
{
    int i, p;

    p = 1;
    for (i = 0; i <= n; ++i)
    {
        p = p * base;
    }

    return p;
}

/* Chapter 1.8 Arguments - Call by Value */
int power_rev2(int base, int n)
{
    int p;

    for (p = 0; n > 0; --n)
    {
        p = p * base;
    }

    return p;
}

/* Chapter 1.9 Character Arrays */
/* getline: read a line into s, return length */
int getline(char s[], int lim)
{

    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{

    int i = 0;

    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}
