/*
	user.cpp -----> Vector.h <----- Vector.cpp
*/
// Define Vector

#include "Vector.h" // get Vector interface


Vector::Vector(int s)			  // definition of the constructor
	: elem {new double[s]}, sz{s} {// initialize members

}

double& Vector::operator[](int i) { // definition of subscripting
	return elem[i];
}

int Vector::size() { // definition of size
	
	return sz;
}

export bool operator==(const Vector& v1, const Vector& v2) {

	if (v1.size() != v2.size()) return false;
	
	for (int i = 0; i < v1.size(); ++i) {
		if (v1[i] != v2[i])
			return false;
	}

	return true;
}