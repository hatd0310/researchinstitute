#include <iostream>
#include "two_sum.cc"

int main() {

    TwoSum twosum;
    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    twosum.twoSum_rev01(&arr, 5);
    return 0;
}


