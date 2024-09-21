// Calculate how many digits a number contains.
// Assume that the number has no more than four digits.

#include <stdio.h>

int main(void) {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  if (number <= 9) {
    printf("%d has one digit.\n", number);
  }
  else if (number <= 99) {
    printf("%d has two digits.\n", number);
  }
  else if (number <= 999) {
    printf("%d has three digits.\n", number);
  }

  return 0;
}
