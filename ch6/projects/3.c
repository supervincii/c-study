// Reduces the fraction to lowest terms.

#include <stdio.h>

int main(void) {
  int num, denom, gcd, temp, n1, n2;

  printf("Enter a fraction: ");
  scanf("%d/%d", &num, &denom);

  n1 = num;
  n2 = denom;

  while (n2 != 0) {
    temp = n2;
    n2 = n1 % n2;
    n1 = temp;
  }

  gcd = n1;
  num = num / gcd;
  denom = denom / gcd;

  printf("In lowest terms: %d/%d\n", num, denom);

  return 0;
}
