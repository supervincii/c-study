// Enter a three-digit number, then print the number with its digits reversed.
// without using arithmetic to split the number into digits

#include <stdio.h>

int main(void) {
  int first, second, third;
  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &first, &second, &third);

  printf("The reversal is: %d%d%d\n", third, second, first);
  return 0;
}
