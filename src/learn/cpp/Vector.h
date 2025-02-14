/*
	user.cpp -----> Vector.h <----- Vector.cpp
*/
#include <iostream>

export class Vector
{
public:
	Vector(int s);
	double &operator[](int i); // return reference to ith ele
	int size();

private:
	double∗ elem; // elem points to an array of sz doubles
	int sz;
};
