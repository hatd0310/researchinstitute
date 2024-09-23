#include <iostream>
#include <vector>

double sum(std::vector<double> numbers) {
    double total = 0;
    std::cout << "Address of vector: " << &numbers << "\n";

    for (int i = 0; i < numbers.size(); i++) {
        total += numbers.at(i);
        std::cout << "vector.at(" << i << ")" << " = Address: " << &numbers.at(i) << "\n";
        std::cout << "\n";

    }
    numbers.push_back(total);



    return total;
}

constexpr double square(double x) { return x * x; }

int main() {
    /* Chapter 1.6 Constants */
    int var = 17;
    constexpr int dmv = 17;       // evaluated at compile time
    const double sqv = sqrt(var); // possibly computed at run time

    //std::cout << "Value of sqv is: " << sqv << "\n";
    //std::cout << "Value of dmv is: " << dmv << "\n";

    std::vector<double> v = { 1.2, 3.4, 4.5 };  // v is not a constant
    //const double s1 = sum(v);           // OK: sum(v) is evaluated at run time
    //constexpr double s2 = sum(v);       // error: sum(v) is not a constant expression

    //std::cout << "Value of var s1 is: " << s1 << "\n";
    //std::cout << "Value of var s2 is: " << s2 << "\n";
    double a = 1.1;
    // Iterate over each element and print it
    for (int number : v) {
        std::cout << number << " ";
    }

    std::cout << "\n";
    //sum(v);


    /* Chapter 1.7 Pointers, Arrays, and References */

    return 0;
}






