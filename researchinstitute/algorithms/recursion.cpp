#include "../researchinstitute.h"
using namespace std;

int sum(int arr[], int i) {
    int total = 0;

    if (i > sizeof(*arr)) {
        return 0;
    }
    return total + sum(arr, arr[i + 1]);

}



int main() {


    // factorial of n
    int n = 10, m = 10;
    long long x = 1;
    for (int i = 0; i < n; i++) {
        x = (x * i) % m;
    }

    cout << x << "\n";

	return 0;
}
