// Compute the smallest number of bills

#include <stdio.h>

int main(void) {
  int amt, amt_20, amt_10, amt_5, amt_1;
  
  printf("Enter a dollar amount: ");
  scanf("%d", &amt);

  amt_20 = amt / 20;
  amt_10 = (amt - (amt_20 * 20)) / 10;
  amt_5 = (amt - (amt_20 * 20) - (amt_10 * 10)) / 5;
  amt_1 = (amt - (amt_20 * 20) - (amt_10 * 10) - (amt_5 * 5)) / 1;
  
  printf("$20 bills: %d\n", amt_20);
  printf("$10 bills: %d\n", amt_10);
  printf("$5 bills: %d\n", amt_5);
  printf("$1 bills: %d\n", amt_1);
  
  return 0;
}
