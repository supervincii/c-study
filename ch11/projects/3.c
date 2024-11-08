// Reduces the fraction to lowest terms.

#include <stdio.h>

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator);

int main(void) {
    int num, denom, gcd, temp, n1, n2;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    n1 = num;
    n2 = denom;

    reduce(n1, n2, &num, &denom);

    printf("In lowest terms: %d/%d\n", num, denom);

    return 0;
}

void reduce(int numerator, int denominator,
            int *reduced_numerator, int *reduced_denominator) {
    int gcd, temp;
    
    while (denominator != 0) {
        temp = denominator;
        denominator = numerator % denominator;
        numerator = temp;
    }

    gcd = numerator;
    *reduced_numerator = *reduced_numerator / gcd;
    *reduced_denominator = *reduced_denominator / gcd;    
}

