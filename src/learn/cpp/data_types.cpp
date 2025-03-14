#include <cstdint>
#include <iostream>
#include <stdfloat>

void data_types() {
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
   * long double			%Lf			8 (16 Some other
   systems)
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
  char letter = 'A';
  unsigned char color = 255;
  short temperature = -10;
  unsigned short height = 180;
  int age = 25;
  unsigned int count = 150;
  long population = 7800000000L;
  unsigned long area = 4000000000UL;
  long long distance = 1234567890123456789LL;
  unsigned long long bigNumber = 18446744073709551615ULL;
  float pi = 3.14159f;
  double e = 2.718281828459;
  long double bigPi = 3.1415926535897932384626L;
  bool isValid = true;

  printf("char: %c == ", letter);
  printf("sizeof(char) = %zu byte(s)\n", sizeof(char));
  printf("unsigned char: %c == ", color);
  printf("sizeof(unsigned char) = %zu byte(s)\n", sizeof(unsigned char));
  printf("short: %hd == ", temperature);
  printf("sizeof(short) = %zu byte(s)\n", sizeof(short));
  printf("unsigned short: %hu == ", height);
  printf("sizeof(unsigned short) = %zu byte(s)\n", sizeof(unsigned short));
  printf("int: %d == ", age);
  printf("sizeof(int) = %zu byte(s)\n", sizeof(int));
  printf("unsigned int: %u == ", count);
  printf("sizeof(unsigned int) = %zu byte(s)\n", sizeof(unsigned int));
  printf("long: %ld == ", population);
  printf("sizeof(long) = %zu byte(s)\n", sizeof(long));
  printf("unsigned long: %lu == ", area);
  printf("sizeof(unsigned long) = %zu byte(s)\n", sizeof(unsigned long));
  printf("long long: %lld == ", distance);
  printf("sizeof(long long) = %zu byte(s)\n", sizeof(long long));
  printf("unsigned long long: %llu == ", bigNumber);
  printf("sizeof(unsigned long long) = %zu byte(s)\n",
         sizeof(unsigned long long));
  printf("float: %f == ", pi);
  printf("sizeof(float) = %zu byte(s)\n", sizeof(float));
  printf("double: %lf == ", e);
  printf("sizeof(double) = %zu byte(s)\n", sizeof(double));
  printf("long double: %Lf == ", bigPi);
  printf("sizeof(long double) = %zu byte(s)\n", sizeof(long double));
  printf("bool: %d == ", isValid);
  printf("sizeof(bool) = %zu byte(s)\n",
         sizeof(bool)); // `%d` used for bool, prints 1 for true, 0 for false
}

void bitwise_operator() {
  /*
   * x & y	bitwise and
   * x | y	bitwise or
   * x ^ y bitwise exclusive or
   * ~x	bitwise complement
   * x&&y	logical and
   * x||y	logical or
   * !x	logical not (negation)
   */
}

void strings() {

  /* C-Style */
  char s_c[] = "GeeksforGeeks";

  /* C++-Style */
  std::string s_cpp; // string define in the <string> header file
}

/*
        � The value of argc shall be nonnegative >= 0.
        � argv[argc] shall be a null pointer.
*/
int main(int argc, char *argv[]) {
  data_types();

  return 0;
}