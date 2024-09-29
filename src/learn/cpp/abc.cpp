#include <iostream>
#include <vector>


int main() {
    int x = 2;
    std::cout << "x: " << x << " = " << &x << "\n";
    int y = 3;
    std::cout << "y: " << y << " = " << &y << "\n";
    int *p = &x;
    std::cout << "Address of ptr p: " << &p << " = " << p << "\n";
    int *q = &y;
    std::cout << "Address of ptr q: " << &q << " = " << q << "\n";

    p = q; // p becomes &y (obviousily) *p==*q
    *p = 20;
    std::cout << "After:" << "\n";
    std::cout << "x: " << x << " = " << &x << "\n";
    std::cout << "y: " << y << " = " << &y << "\n";
    std::cout << "Address of ptr p: " << &p << " = " << p << "\n";
    std::cout << "Address of ptr q: " << &q << " = " << q << "\n";


}


