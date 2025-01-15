#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int i;
	std::cout << "Please enter an integer value: ";
	std::cin >> i;
	std::cout << "The value you entered is " << i;
	std::cout << " and its double is " << i * 2 << ".\n";
	
	string mystr;
	float price = 0;
	int quantity = 0;

	std::cout << "Enter price: ";
	getline(std::cin, mystr);
	stringstream(mystr) >> price;

	std::cout << "Enter quantity: ";
	getline(std::cin, mystr);
	stringstream(mystr) >> quantity;
	
	std::cout << "Total price: " << price * quantity << std::endl;

	return 0;

}
