// Display value of a polynomial (3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6) given x

#include <stdio.h>

int main(void) {
  int x;
  int value;

  printf("Enter the value of x: ");
  scanf("%d", &x);

  printf("The value of the polynomial (3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6) is: %d\n",
         (3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6));

  return 0;
}
