// Enter a three-digit number, then print the number with its digits reversed.

#include <stdio.h>

int main(void) {
  int number, first, second, third;
  printf("Enter a three-digit number: ");
  scanf("%d", &number);

  first = number / 100;
  second = (number % 100) / 10;
  third = (number % 100) % 10;

  printf("The reversal is: %d%d%d\n", third, second, first);
  return 0;
}
