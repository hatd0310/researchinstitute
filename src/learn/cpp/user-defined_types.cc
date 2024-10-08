#include <iostream>

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



int main() {

}