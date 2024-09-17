#include "../researchinstitute.h"
using namespace std;


int main() {
    
    int num = 42;
    int* ptr = &num;  // ptr holds the address of num

    cout << "Value of num: " << num << "\n";
    cout << "Address of num: " << &num << "\n";
    cout << "Pointer ptr points to address: " << ptr << "\n";
    cout << "Value at address ptr points to: " << *ptr << "\n";
    return 0;
}