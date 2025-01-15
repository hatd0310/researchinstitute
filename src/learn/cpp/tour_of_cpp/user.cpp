/*
	user.cpp -----> Vector.h <----- Vector.cpp
*/
// use Vector

#include <iostream>
//#include "Vector.h" // get Vector interface
import Vector;

#include <cmath>	// get the standard-library math function interface including sqrt()

double sqrt_sum(const Vector& v) {
	double sum = 0;
	for (int i = 0; i != v.size(); ++i) {
		sum += std::sqrt(v[i]);	// sum of square roots
	}

	return sum;
	
}