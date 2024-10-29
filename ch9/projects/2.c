// Computes income tax given taxable income.

#include <stdio.h>

float tax_due(float income);

int main(void) {
    float income, tax;
    printf("Enter taxable income: ");
    scanf("%f", &income);

    tax = tax_due(income);
    printf("Tax due: %.2f\n", tax);

    return 0;
}

float tax_due(float income) {
    float tax;
    
    if (income < 750) {
        tax = income * 0.01;
    } else if (income >= 750 && income < 2250) {
        tax = 7.50 + (0.02 * (income - 750));
    } else if (income >= 2250 && income < 3750) {
        tax = 37.50 + (0.03 * (income - 2250));
    } else if (income >= 3750 && income < 5250) {
        tax = 82.50 + (0.04 * (income - 3750));
    } else if (income >= 5250 && income <= 7000) {
        tax = 142.50 + (0.05 * (income - 5250));
    } else {
        tax = 230.00 + (0.06 * (income - 7000));
    }

    return tax;
}
