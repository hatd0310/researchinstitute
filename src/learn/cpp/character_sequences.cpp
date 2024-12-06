#include <iostream>

using namespace std;

int main() {
	/*
		- array can store up to 20 elements type char.
		- No need to be fully exhausted capacity
		- the end of strings is the null character \0
	*/
	char foo[20];
	foo[0] = 'H';
	foo[1] = 'e';
	foo[2] = 'l';
	// ... and so on

	char myword[] = { 'H', 'e', 'l', 'l', 'o', '\0' };

	cout << foo << endl;


	return 0;
}