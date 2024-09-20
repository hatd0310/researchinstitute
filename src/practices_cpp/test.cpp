#include "../researchinstitute.h"

int main() {
   
    std::vector<double> v = { 1.2, 3.4, 4.5 };  // v is not a constant
  
    double a = 1.1;
    v.insert(0, a);
    for (int number : v) {
        std::cout << number << " ";
    }

    std::cout << "\n";
  

    return 0;
}






