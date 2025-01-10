#include <iostream>

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

	return 0;
}


