#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>



int main() {
    /*
     * size:2 query:2 time
     * 3 1 5 4      // a[i] = 3 -> pointer to array [1 5 4]
     * 5 1 2 8 9 3  // a[i] = 5 -> pointer to array [1 2 8 9 3]
     * index:0 index<index>:1          // query index 0 value at 1
     * index:1 index<index>:3          // query index 0 value at 3
     */
    int n, i, timesQuery;
    std::vector<int> childArr;

    std::cin >> n >> timesQuery; // input n-size of parent array and times query   
    int parentArr[n];

    for (i = 0; i < n; ++i) {
        // each index contain a reference to an array
        std::cin >> parentArr[i];

    }




    return 0;
}
