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
     * index:0 index<index>:1   // query index 0 value at 1
     * index:1 index<index>:3   // query index 0 value at 3
     */
    int n, i, j, timesQuery;

    std::cin >> n >> timesQuery; // input n-size of parent array and times query   

    std::vector<std::vector<int>> arr(n);

    for (i = 0; i < n; ++i) {
        // each index contain a reference to an array

        std::cin >> arr.at[i];
        for (j = 0; j < arr.at[i]; ++j) {

        }
    }




    return 0;
}
