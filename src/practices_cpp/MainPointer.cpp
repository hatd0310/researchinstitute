#include "FuncPointer.cpp"

int main() {

	int n = 10;
	std::cout << "n = " << n << " Address = " << &n << "\n";
	square_refer(&n);
	std::cout << "n = " << n << " Address = " << &n << "\n";
	

	return 0;
}