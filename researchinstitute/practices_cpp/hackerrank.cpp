// #define _CRT_SECURE_NO_WARNINGS // https://stackoverflow.com/questions/22450423/how-to-use-crt-secure-no-warnings
#include "../researchinstitute.h"


using namespace std;


int maxValue(int a, int b, int c, int d) {
	return max({ a, b, c, d });
}

int main() {
	/*
	 * ===== Fundamental Data Types: =====
	 * 
	 * Data Type=====Format Specifier===Typical Size(bytes)
	 * char				%c				1
 	 * unsigned short	%hu				2
 	 * short			%hd				2
	 * unsigned int		%u				4 (32 - bit) or 8 (64 - bit)
	 * unsigned long	%lu				4 (32 - bit) or 8 (64 - bit)
	 * int				%d				4 (32 - bit) or 8 (64 - bit)
	 * long				%ld				4 (32 - bit) or 8 (64 - bit)
	 * float			%f				4
	 * double			%lf				8
	 * 
	 */
	 /*
	 * ===== Format Specifiers: =====
	 * %x	Hexadecimal
	 * %o	Octal
	 * %e	Scientific notation for floating (1.234e+05)
	 * %g	Shorter of %f or %e
	 * %p	Pointer address (hexadecimal format)
	 */
	
	int a, b, c, d;
	//scanf_s("%d\n%d\n%d\n%d\n", &a, &b, &c, &d);
	scanf("%d\n%d\n%d\n%d\n", &a, &b, &c, &d); // https://stackoverflow.com/questions/21434735/difference-between-scanf-and-scanf-s

	//cin >> a >> b >> c >> d;

	int e = maxValue(a, b, c, d);
	printf("Max value: %d\n", e);
	return 0;
}