#include "fibonacci.h"
#include "reverse.h"
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

  int i = 1;

  if (i < argc) {
    print_fib(atoi(argv[i])); // ASCII to Integer
    i++;
  }

  if (i < argc) {
    reverse(argv[i], strlen(argv[i]));
    i++;
  }

  return 0;
}
