#include "../researchinstitute.h"
using namespace std;


int main() {
    
    //int num = 42;
    //int* ptr = &num;  // ptr holds the address of num

    //cout << "Value of num: " << num << "\n";
    //cout << "Address of num: " << &num << "\n";
    //cout << "Pointer ptr points to address: " << ptr << "\n";
    //cout << "Value at address ptr points to: " << *ptr << "\n";
    
    int num = 10;
    int &ref = num;  // Reference to num
    int *ptr = &num; // Pointer to num

    ref = 20;        // num is now 20
    *ptr = 30;       // num is now 30
    
    cout << "Value of num: " << num << "\n";
    cout << "Address of num: " << &num << "\n";
    
    return 0;
}