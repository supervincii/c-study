// Enter a two-digit number, then print the number with its digits reversed.

#include <stdio.h>

int main(void) {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  printf("The reversal is: ");

  do {
    printf("%d", number % 10);
    number /= 10;
  } while (number != 0);

  printf("\n");
  return 0;
}
