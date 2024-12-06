#include <iostream>
#include <string>
#include "persistence\connection_db.cpp";

using namespace std;

int main () {

	abc(); // "persistence\connection_db.cpp"
	string mystr;
	cout << "What's your name? "; getline (cin, mystr);
	
	cout << "Hello " << mystr << ".\n";
 	
	cout << "What is your favorite team? "; getline (cin, mystr);

	cout << "I like " << mystr << " too!\n";
	return 0;
}

