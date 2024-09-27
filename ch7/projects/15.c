// computes the factorial of a positive integer

#include <stdio.h>

int main(void) {
  int num;
  unsigned long int factorial = 1;

  printf("Enter a positive integer: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++) {
    factorial *= i;
  }

  printf("Factorial of %d: %lu\n", num, factorial);

  return 0;
}
