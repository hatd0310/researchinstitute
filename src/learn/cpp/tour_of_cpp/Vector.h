/*
	user.cpp -----> Vector.h <----- Vector.cpp
*/
export module Vector; // defining the module called "Vector"

export class Vector {
	public:
		Vector(int s);
		double& operator[](int i);
		int size();
	private: 
		double* elem; // elem points to an array of sz doubles
		int sz;

};