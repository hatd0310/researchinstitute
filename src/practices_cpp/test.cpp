#include "../researchinstitute.h"

int main() {
   
    std::vector<double> v = { 1.2, 3.4, 4.5 };
    
    v.insert(v.begin(), 1.1);
    //v.insert(0, 1.1);

    for (double number : v) {
        std::cout << number << " ";
    }

    std::cout << "\n";
  

    return 0;
}






