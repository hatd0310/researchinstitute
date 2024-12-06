#include <iostream>
using namespace std;

// The first step in building a new type is often to organize
// the elements it needs into a data structure
struct Vector {
	double* elem; // pointer to elements
	int sz;		  // number of elements
};

// Example:
void vector_init(Vector& v, int s) { // initialize a Vector
	v.elem = new double[s]; // allocate an array of s doubles
	v.sz = s;
}

double read_and_sum(int s) {
	// read s integers from cin and return their sum
	// s is assumed to be positive
	Vector v;
	vector_init(v, s); // allocate s elements for v

	for (int i = 0; i != s; ++i) {
		cin >> v.elem[i]; // read into elements
	}

	double sum = 0;
	for (int i = 0; i != s; ++i) {
		sum += v.elem[i]; // compute the sum of the elements
	}

	return sum;
}

void f(Vector v, Vector& rv, Vector* pv) {
	int i1 = v.sz;	 // access through name
	int i2 = rv.sz;	 // access through reference
	int i3 = pv->sz; // access through pointer
}



class Vector {

public:
	Vector(int s) : elem{ new double[s] }, sz{ s } {} // construct a Vector
	double& operator[](int i) { return elem[i]; }	  // element access: subscripting
	int size() { return sz; }
private:
	double* elem; // pointer to the elements
	int sz;		  // the number of elements

};