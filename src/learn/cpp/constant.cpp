#include <iostream>
#include <vector>
using namespace std;

/*
 * We don't want to modify an argument but still don't want the cost of copying,
 * we use a const reference
 */
double sum(const vector<double> &numbers) {
    double total = 0;
    for (int i = 0; i < numbers.size(); i++) {
        total += numbers.at(i);
        cout << "numbers[" << i << "] = " << numbers.at(i) << " = " << &numbers.at(i) << endl;
    }
    return total;
}

/* 
 * Function to be usable in a constant expression,
 * that will be evaluated by the compiler
 * it must be defined "constexpr" or "consteval" 
 */
constexpr double square(double x) { return x * x; }

/*
 * constexpre or consteval are the notion of pure functions
 */
constexpr double nth(double x, int n) {
    double res = 1;
    int i = 0;
    while (i < n) {
        res *= x;
        ++i;
    }
    return res;
}

int main() {
    
    /* */
    int var = 17;
    constexpr int dmv = 17;       // evaluated at compile time
    const double sqv = sqrt(var); // possibly computed at run time


    vector<double> v = { 1.2, 3.4, 4.5 };  // v is not a constant
    cout << "Address of vector v: " << &v << endl;
    const double s1 = sum(v);       // OK: sum(v) is evaluated at run time
    //constexpr double s2 = sum(v);   // ERROR: sum(v) is not a constant expression

    /* Function square(double x) */
    constexpr double max1 = 1.4 * square(17);  // OK: 1.4 * square(17) is a constant expression
    constexpr double max2 = 1.4 * square(var); // ERROR: var is not a constant, so square(var) is not a constant
    const     double max3 = 1.4 * square(var); // OK: may be evaluated at run time




    return 0;
}






