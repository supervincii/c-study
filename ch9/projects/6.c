// computes the value of the polynomial
// 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6

#include <stdio.h>

int compute_value(int x);

int main(void) {
    int x;

    printf("Enter value of x: ");
    scanf("%d", &x);

    int value = compute_value(x);

    printf("The value of 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 with x as %d is %d.\n", x, value);

    return 0;
}

int compute_value(int x) {
    int value;

    int a = 3 * (x * x * x * x * x);
    int b = 2 * (x * x * x * x);
    int c = 5 * (x * x * x);
    int d = x * x;
    int e = 7 * x;
    int f = 6;

    value = a + b - c - d + e - f;
    
    return value;
}
