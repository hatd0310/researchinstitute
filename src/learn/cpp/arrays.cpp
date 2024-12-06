#include <iostream>
#include <array> // https://en.cppreference.com/w/cpp/container/array

using namespace std;

/*
    declareation array: 
    - type array_name[size1][size2]...[sizeN]
 */


/*
    Multidimensional arrays can be decribed as "arrays of arrays"

*/
void multiDimensional() {
    // Use library #include <array>
    std::array<int, 3> a = {1, 2, 3};


    // Create and Initialize the 3-dimensional array
    int arr[2][3][2] = {
                        { { 1, 1 }, { 2, 3 }, { 4, 5 } },
                        { { 6, 7 }, { 8, 9 }, { 10, 11 } }
                       };

    // Loop through the depth
    for (int i = 0; i < 2; ++i) {

        // Loop through the rows of each depth
        for (int j = 0; j < 3; ++j) {

            // Loop through the columns of each row
            for (int k = 0; k < 2; ++k)
                printf("arr[%i][%i][%i] = %d  ", i, j, k, arr[i][j][k]);
            printf("\n");
        }
        printf("\n\n");
    }
}

/*
 * https://www.geeksforgeeks.org/dynamic-array-in-c/
 */
void dynamicArray() {

}


int main() {

    multiDimensional();


    return 0;
}

