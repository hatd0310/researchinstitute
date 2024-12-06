#include <iostream>
#include <string>
using namespace std;

// === Efficiency considerations and const references ===

/*
	the function copies of the arguments passed to the function.
*/
string concatenate_by_value(string a, string b) {
	return a + b;
}

/*
	the function do not copy
*/
string concatenate_by_refer(string& a, string& b) {
	return a + b;
}

/*
	reference parameters are not going to be modified by the function
*/
string concatenate_by_const_refer(const string& a, const string& b) {
	return a + b;
}

// === Inline functions ===

/*
	
*/
inline string concatenate_inline(const string& a, const string& b) {
	return a + b;
}

// Template function to find the maximum of two values
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}


// Template class for a simple container
template <typename T>
class Container {
	private:
		T element;
	public:
		Container(T arg) : element(arg) {}
		T getValue() { return element; }
};

template <class T, class U> class AAA {
	T x;
	U y;
	public:
		AAA() { cout << "Constructur Called" << endl; }
};


// namespace
namespace foo {
  int value() { return 5; }
}

namespace bar {
  const double pi = 3.1416;
  double value() { return 2 * pi; }
}

int main () {
	int i=5, j=6, k;
	double f=2.0, g=0.5, h;
	k=max<int>(i,j);
	h=max<double>(f,g);
	cout << "template max function: " << k << '\n';
	cout << "template max function: " << h << '\n';
	
	// class Container
	Container<int> intContainer(5);
    Container<string> stringContainer("Hello");

    cout << "Value in intContainer: " << intContainer.getValue() << endl;
    cout << "Value in stringContainer: " << stringContainer.getValue() << endl;

	// class Template
	AAA<char, char> a;  // Constructor Called
	AAA<int, int> b;	// Constructor Called

	return 0;
}
