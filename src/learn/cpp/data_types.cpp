#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	/*
	 * https://cplusplus.com/doc/tutorial/variables/
	 * ===== Fundamental Data Types: =====
	 *
	 * Data Type=====Format Specifier===Typical Size(bytes)
	 *
	 * https://en.cppreference.com/w/cpp/language/types
	 * unsigned short		%hu			2
	 * short				%hd			2
	 * int					%d			4
	 * unsigned int			%u			8
	 * long					%ld			8
	 * long long			%lld		8
     * unsigned long		%lu			8
	 * unsigned long long	%llu		8
	 *
	 * https://en.cppreference.com/w/cpp/language/types#Floating-point_types
	 * float				%f			4
	 * double				%lf			8
	 * long double			%Lf			8 (16 Some other systems)
	 *
	 * char (unsigned char)	%c			1
	 * bool					%d			1

	 * ===== Format Specifiers: =====
	 * %x	Hexadecimal
	 * %o	Octal
	 * %e	Scientific notation for floating (1.234e+05)
	 * %g	Shorter of %f or %e
	 * %p	Pointer address (hexadecimal format)
	 */
	char letter					 = 'A';
	unsigned char color			 = 255;
	short temperature			 = -10;
	unsigned short height		 = 180;
	int age						 = 25;
	unsigned int count			 = 150;
	long population				 = 7800000000L;
	unsigned long area			 = 4000000000UL;
	long long distance			 = 1234567890123456789LL;
	unsigned long long bigNumber = 18446744073709551615ULL;
	float pi					 = 3.14159f;
	double e					 = 2.718281828459;
	long double bigPi			 = 3.1415926535897932384626L;
	bool isValid				 = true;

	printf("char: %c\n", letter);
	printf("unsigned char: %c\n", color);
	printf("short: %hd\n", temperature);
	printf("unsigned short: %hu\n", height);
	printf("int: %d\n", age);
	printf("unsigned int: %u\n", count);
	printf("long: %ld\n", population);
	printf("unsigned long: %lu\n", area);
	printf("long long: %lld\n", distance);
	printf("unsigned long long: %llu\n", bigNumber);
	printf("float: %f\n", pi);
	printf("double: %lf\n", e);
	printf("long double: %Lf\n", bigPi);
	printf("bool: %d\n", isValid); // `%d` used for bool, prints 1 for true, 0 for false


	printf("sizeof(short) = %zu byte(s)\n", sizeof(short));
	printf("sizeof(unsigned short) = %zu byte(s)\n", sizeof(unsigned short));
	printf("sizeof(unsigned int) = %zu byte(s)\n", sizeof(unsigned int));
	printf("sizeof(int) = %zu byte(s)\n", sizeof(int));
	printf("sizeof(unsigned long) = %zu byte(s)\n", sizeof(unsigned long));
	printf("sizeof(long) = %zu byte(s)\n", sizeof(long));
	printf("sizeof(long long) = %zu byte(s)\n", sizeof(long long));
	printf("sizeof(unsigned long long) = %zu byte(s)\n", sizeof(unsigned long long));
	printf("sizeof(double) = %zu byte(s)\n", sizeof(double));
	printf("sizeof(long double) = %zu byte(s)\n", sizeof(long double));
	printf("sizeof(char) = %zu byte(s)\n", sizeof(char));
	printf("sizeof(unsigned char) = %zu byte(s)\n", sizeof(unsigned char));
	printf("sizeof(bool) = %zu byte(s)\n", sizeof(bool));

	return 0;
}

void bitwiseOperator() {
	/*
	 * x & y	bitwise and
	 * x | y	bitwise or
	 * x ^ y    bitwise exclusive or
	 * ~x		bitwise complement
	 * x && y	logical and
	 * x || y	logical or
	 * !x		logical not (negation)
	 */
}

void strings() {

	/* C-Style */
	char s_c[] = "GeeksforGeeks";

	/* C++-Style */
	string s_cpp; // string define in the <string> header file


}