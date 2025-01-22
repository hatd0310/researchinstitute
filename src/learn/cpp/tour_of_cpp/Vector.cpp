/*
	user.cpp -----> Vector.h <----- Vector.cpp
*/
#include "Vector.h"
#include <iostream>
export module Vector;

Vector::Vector(int s) : elem{new double[s]}, sz{s} {
	
}
double& Vector::operator[](int i) { // return reference to ith ele
	return elem[i];
}

int Vector::size() {
	return sz;
}

export bool operator==(const Vector& v1, const Vector& v2) {
	if (v1.size()!=v2.size())
		return false;
	for (int i = 0; i<v1.size(); ++i)
		if (v1[i]!=v2[i])
			return false;
	return true;
}