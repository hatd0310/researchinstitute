#include <iostream>
#include "Circle.cpp"

// source: https://en.cppreference.com/w/cpp/language/access
// https://www.geeksforgeeks.org/access-modifiers-in-c/
// 
 
int main() {
    // creating object of the class
    Circle obj;

    // trying to access private data member
    // directly outside the class
    obj.compute_area(1.5);


    // member function of the derived class can
    // access the protected data members of the base class

    obj.setId(81);
    obj.displayId();


    return 0;
}