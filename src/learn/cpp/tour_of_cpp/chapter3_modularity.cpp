#include<iostream>
#include<vector>


namespace My_code {
	class complex {
		int real, img;
		public:
			complex() {
				//default constructor to initialize complex number to 0+0i
				real = 0; img = 0;
			}
			
			complex(int r, int i) {
				//parameterized constructor to initialize complex number.
				real = r; img = i;
			}
	};
	
	complex sqrt(complex);
	// ...
	
	int main();
	
}

int My_code::main() {
	complex z{1,2};
	auto z2 = sqrt(z);
	std::cout << '{' << z2.real() << ',' << z2.imag() << "}\n";
	// ...
}

/* 3.4 Function arguments and Return value

void arg_passing(std::vector<int> v, std::vector<int>& rv) { // v is passed by value,
															 // rv is passed by reference
	v[1] = 99; 	// modify v (a local variable)
	rv[2] = 66; // modify whatever rv refer to
}

std::vector<int> fib = {1, 2, 3, 5, 8, 13, 21};
arg_passing(fib,fib);
cout << fib[1] << ' ' << fib[2] << '\n'; // prints 2 66

*/


/* 3.4.2 Value Return

int& bad() {
	int x = 2;
	// ...
	
	return x; // bad: return a reference to the local variable x	
}
- Local Variable goes out of scope
- returning a dangling reference, which leads to undefined behavior
int& ref = bad();  // ref is a dangling reference.
std::cout << ref;  // Undefined behavior: accessing ref leads to a problem.

=> correct approach:
1. return the value directly (by value)
2. return the reference to exists beyond the function scope such as a static variable.
int& good()
{
    static int x = 42; 	// Static variable persists after function returns.
    return x;			// Safe, since x is static and does not go out of scope.
}

How about?:
Matrix operator+(const Matrix& x, const Matrix& y) {
	Matrix res;
	// ... for all res[i, j], res[i, j] = x[i,j] + y[i, j] ...
	return res;
}
Matrix m1, m2;
// ...
Matrix m3 = m1 + m2; // no copy



*/


