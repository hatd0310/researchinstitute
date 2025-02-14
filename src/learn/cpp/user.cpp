/*
	user.cpp -----> Vector.h <----- Vector.cpp
*/
import Vector;
#include <cmath> // get the standard-library math function interface including sqrt()

double sqrt_sum(Vector &v)
{
	double sum = 0;
	for (int i = 0; i != v.size(); ++i)
	{
		sum += std::sqrt(v[i]);
	}

	return sum;
}

int main()
{

	return 0;
}