#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void) {
    int amt, amt_20, amt_10, amt_5, amt_1;
  
    printf("Enter a dollar amount: ");
    scanf("%d", &amt);

    pay_amount(amt, &amt_20, &amt_10, &amt_5, &amt_1);

    printf("$20 bills: %d\n", amt_20);
    printf("$10 bills: %d\n", amt_10);
    printf("$5 bills: %d\n", amt_5);
    printf("$1 bills: %d\n", amt_1);

    return 0;
}

/*
 * paid_amount: determines the smallest number of $20, $10, $5, and $1 bills
 *              necessary to pay the amount represented by the dollars parameter.
 */
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
    *twenties = dollars / 20;
    *tens = (dollars - (*twenties * 20)) / 10;
    *fives = (dollars - (*twenties * 20) - (*tens * 10)) / 5;
    *ones = (dollars - (*twenties * 20) - (*tens * 10) - (*fives * 5)) / 1;
}
