// Prints size of types

#include <stdio.h>

int main(void) {
  printf("Sizeof int: %zu\n", sizeof(int));
  printf("Sizeof short: %zu\n", sizeof(short));
  printf("Sizeof long: %zu\n", sizeof(long));
  printf("Sizeof float: %zu\n", sizeof(float));
  printf("Sizeof double: %zu\n", sizeof(double));
  printf("Sizeof long double: %zu\n", sizeof(long double));

  return 0;
}
