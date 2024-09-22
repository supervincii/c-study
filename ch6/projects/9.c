// Calculate the remaining balance after a loan

#include <stdio.h>

int main(void) {
  float loan, interest_rate, monthly, monthly_interest_rate;
  int no_payments;

  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly);
  printf("Enter number of payments: ");
  scanf("%d", &no_payments);

  monthly_interest_rate = interest_rate / 100 / 12;

  for (int i = 1; i <= no_payments; i++) {
    loan = (loan + (loan * monthly_interest_rate)) - monthly;
    
    if (loan < 0)
      loan = 0;
    
    printf("Balance remaining after %d payment: %.2f\n", i, loan);

    if (loan == 0) break;
  }
  
  return 0;
}
