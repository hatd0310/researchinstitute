#include <iostream>
#include <vector>

void increment(int* v) {
    (*v)++;
}

int addition(int* ptr1, int* ptr2) {
    return *ptr1 + *ptr2;
}

int subtraction(int* ptr1, int* ptr2) {
    return abs(*ptr1 - *ptr2);
}

int main() {
    std::vector<int> v = { 11, 2, 4, 55, 88 };

    for (int i = 0; i < v.size(); i++) {
        std::cout << "v[" << i << "] = " << v[i] << " => Address: " << &v[i] << "\n";
    }

    for (int i : v) {
        std::cout << "Address: " << &i << " => value: " << i << "\n";
    }

    int *p = &v[1]; // pointer store address memory address of variable v[1]
    int &addressSecondElementOfVector = v[1]; // if set &addressSecondElementOfVector = 11 => error: expression is not assignable

    std::cout << "Value p: " << p << " => Address: " << &p << "\n";
    std::cout << "Value addressSecondElementOfVector: " << addressSecondElementOfVector << " => Address: " << &addressSecondElementOfVector << "\n";

    
    /* */
    int a, b;
    scanf("%d\n%d", &a, &b);

    printf("%d\n%d", addition(&a, &b), subtraction(&a, &b));


    std::cout << "a = " << a << " ---> " << &a << "\n";
    
    int *ptr = &a;
    std::cout << "ptr = " << ptr << " ---> " << &ptr << "\n";
    
    int y = *ptr;
    std::cout << "y = " << y << " ---> " << &y << "\n";
    
    *ptr = 20;
    std::cout << "ptr to new value = " << ptr << " ---> " << &ptr << "\n";
    
    
    
    return 0;
}
