// Prints a table of compound interest

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void) {
  int i, low_rate, num_years, month, year = 1;
  double value[5];

  printf("Enter interest rate: ");
  scanf("%d", &low_rate);
  printf("Enter number of years: ");
  scanf("%d", &num_years);

  printf("\nYears");
  for (i = 0; i < NUM_RATES; i++) {
    printf("%6d%%", low_rate + i);
    value[i] = INITIAL_BALANCE;
  }
  printf("\n");

  int total_months = num_years * 12;
  for (month = 1; month <= total_months; month++) {
    for (i = 0; i < NUM_RATES; i++) {
      // calculate the monthly interest rate and update the balance
      double monthly_rate = (low_rate + i) / (100.0 * 12);
      value[i] += value[i] * monthly_rate;
    }
  
    // Print balance at the end of each year
    if (month % 12 == 0) {
      printf("%3d  ", month/12);
      for (i = 0; i < NUM_RATES; i++) {
        printf("%9.2f", value[i]);
      }
      printf("\n");
    }
  }

  return 0;
}
