#include <iostream>
using namespace std;


int sum(int arr[], int i) {
    int total = 0;

    if (i > sizeof(*arr)) {
        return 0;
    }
	
    return total + sum(arr, arr[i + 1]);

}

unsigned long recursive_factorial(unsigned long n) {
	if (n < 2) return 1;
	return n * factorial(n - 1);
}

unsigned long non_recursive_factorial(unsigned long n) {
	if (n < 2) return 1;
	unsigned long result = 1;
	while (n > 1) {
		result *= --n; // pre increment: result = result * (n = n - 1)
		result *= n--; // post increment: result = result * n; n = n - 1
		cout << "result = " << result << " | n = " << n << endl;
	}
	
	return result;
}

int main() {

	cout << non_factorial(10) << endl;
    

	return 0;
}
