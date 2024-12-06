#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;

vector<int> parse_ints(string& n);

int main() {
    // https://stackoverflow.com/questions/20594520/what-exactly-does-stringstream-do

    // >> : Extracts formatted data
    // << : Inserts formatted data
    // str() : Gets the contents of underlying string device object
    // str(string): Sets the contents of underlying string device object

    string a;

    cin >> a;

    vector<int> v = parse_ints(a);

    for (int num : v) {
        cout << num << endl;
    }

    return 0;
}

vector<int> parse_ints(string& n) {
    vector<int> v;
    stringstream ss(n);
    char ch;
    int a;

    while (ss >> a) { // >> : Extracts formatted data
        v.push_back(a);
        ss >> ch;     // >> : Extracts formatted data
    }


    return v;
}

void strings() {
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