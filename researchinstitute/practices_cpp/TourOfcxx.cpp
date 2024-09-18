#include "../researchinstitute.h"

Elem* next_elem() { // no argument; return a pointer to Elem (an Elem*)
    return nullptr;
};

vector<int> vectorGlobal; // vectorGlobal is global integer[]

double sum(const vector<double>&);  // sum will not modify its argument (§1.7)

constexpr double square(double x) {
    return x ∗ x;
}

int main() {
    int var = 17;
    vector<double> v{ 1.2, 3.4, 4.5 };
    
    constexpr   int     dmv = 17;             // dmv is a named constant
    const       double  sqv = sqrt(var);       // sqv is a named constant, possibly computed at run time
    const       double  s1 = sum(v);           // OK: sum(v) is evaluated at run time
    constexpr   double  s2 = sum(v);       // error: sum(v) is not a constant expression


    return 0;
}






