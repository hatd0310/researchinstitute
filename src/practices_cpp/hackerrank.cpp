#include <iostream>

int main() {
    int n;
    int index;
    std::cin >> n;
    int a[n];
    
    for (index = 0; index < n; ++index) {
        std::cin >> a[index];
    }

    for (index = n; index >= 0; --index) {
        //std::cout << a[index] << "\t";
    }

}