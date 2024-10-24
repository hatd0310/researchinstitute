#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>
#include <algorithms>



int main() {

    // Declaration:
    string a = "abc";

    int len = a.size(); // size of string

    // Concatenate two string
    string b = "def";
    string c = a + b; //=> c = "abcdef"

    // Accessing ith element
    char c0 = c[0]; // c0 = 'a'
    char c1 = c[1]; // c1 = 'b'

    c[0] = 'z';     // c = "zbcdef"

    return 0;
}

