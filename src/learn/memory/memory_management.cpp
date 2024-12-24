#include <iostream>
#include <cstdlib> // <stdlib.h>
#include <string>

using namespace std;

/*
	- Dynamic memory allocation:

	Function		Description
	malloc			allocates the specified number of bytes
	aligned_alloc	allocates the specified number of bytes at the specified alignment
	realloc			increases or decreases the size of the specified block of memory,
					moving it if necessary
	calloc			allocates the specified number of bytes and initializes them to zero
	free			releases the specified block of memory back to the system

*/

int main() {

	
}

/*
	The data segment contains initialized static variables,
	i.e. global variables and local static variables
	which have a defined value and can be modified.
*/
void data_segment() {

	int i = 3;
	char a[] = "Hello World";
	static int b = 2023;    // Initialized static global variable
	void foo (void) {
		static int c = 2023; // Initialized static local variable
	}
}


/*
	The BSS segment contains uninitialized static data,
	both variables and constants, i.e. global variables
	and local static variables that are initialized to
	zero or do not have explicit initialization in source code
*/
void bss_segment() {
	static int i;
	static char a[12];
	int a;
	string b;
}
char c;               /* Uninitialized variable stored in bss*/

