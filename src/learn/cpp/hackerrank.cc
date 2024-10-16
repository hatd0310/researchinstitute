#include <iostream>
#include <cmath>
#include <vector>

int main() {
    /*
     * size:2 query:2 time
     * 3 1 5 4      // a[i] = 3 -> pointer to array [1 5 4]
     * 5 1 2 8 9 3  // a[i] = 5 -> pointer to array [1 2 8 9 3]
     * index:0 index<index>:1   // query index 0 value at 1
     * index:1 index<index>:3   // query index 0 value at 3
     */
   

    return 0;
}

void variableSizedArrays_rev01() {
    int sizeOfArr, numberOfQueries;
    int sizeOfSubArr, valueTemp;
    int i, j, k;

    std::cin >> sizeOfArr >> numberOfQueries;

    std::vector<std::vector<int>> arr(sizeOfArr);

    for (i = 0; i < sizeOfArr; ++i) {

        std::cin >> sizeOfSubArr;
        arr[i].resize(sizeOfSubArr);
        for (j = 0; j < sizeOfSubArr; ++j) {
            std::cin >> valueTemp;
            arr[i][j] = valueTemp;
        }

    }

    for (i = 0; i < numberOfQueries; ++i) {
        std::cin >> j >> k;
        std::cout << arr[j][k] << "\n";
    }
}

void variableSizedArrays_rev02() {

    int n, q;
    std::cin >> n >> q;

    // https://www.geeksforgeeks.org/c-pointer-to-pointer-double-pointer/
    // https://www.geeksforgeeks.org/cpp-pointers/?ref=shm
    int** arr = new int* [n];
    
    for (int i = 0; i < n; ++i) {
        int k;
        std::cin >> k;
        arr[i] = new int[k];
        for (int j = 0; j < k; ++j) {
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < q; ++i) {
        int l, r;
        std::cin >> l >> r;
        std::cout << arr[l][r] << "\n";

    }

    // Deallocate memory
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

}