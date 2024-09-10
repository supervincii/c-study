// Calculate the remaining balance after a loan

#include <stdio.h>

int main(void) {
  float loan, interest_rate, monthly, monthly_interest_rate;
  float first, second, third;

  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly);

  monthly_interest_rate = interest_rate / 100 / 12;
  first = (loan + (loan * monthly_interest_rate)) - monthly;
  second = (first + (first * monthly_interest_rate)) - monthly;
  third = (second + (second * monthly_interest_rate)) - monthly;

  printf("Balance remaining after first payment: %.2f\n", first);
  printf("Balance remaining after second payment: %.2f\n", second);
  printf("Balance remaining after third payment: %.2f\n", third);

  return 0;
}
