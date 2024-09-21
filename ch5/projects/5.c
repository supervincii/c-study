// Computes income tax given taxable income.

#include <stdio.h>

int main(void) {
  float income, tax;
  printf("Enter taxable income: ");
  scanf("%f", &income);

  if (income < 750) {
    tax = income * 0.01;
    printf("Tax due: %.2f\n", tax);
  } else if (income >= 750 && income < 2250) {
    tax = 7.50 + (0.02 * (income - 750));
    printf("Tax due: %.2f\n", tax);
  } else if (income >= 2250 && income < 3750) {
    tax = 37.50 + (0.03 * (income - 2250));
    printf("Tax due: %.2f\n", tax);
  } else if (income >= 3750 && income < 5250) {
    tax = 82.50 + (0.04 * (income - 3750));
    printf("Tax due: %.2f\n", tax);
  } else if (income >= 5250 && income <= 7000) {
    tax = 142.50 + (0.05 * (income - 5250));
    printf("Tax due: %.2f\n", tax);
  } else {
    tax = 230.00 + (0.06 * (income - 7000));
    printf("Tax due: %.2f\n", tax);
  }

  return 0;
}
