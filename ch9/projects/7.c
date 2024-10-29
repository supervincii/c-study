// recursive function that computes x^n.

#include <stdio.h>

int power(int x, int n);

int main(void) {
    int x, n;

    printf("This program computes the value of x^n.\n");
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int value = power(x, n);

    printf("%d^%d = %d\n", x, n, value);
}

int power(int x, int n) {
    int value;
    if (n == 0) return 1;

    if (n % 2 == 0) {
        int half_power = power(x, n / 2);
        return half_power * half_power;
    }
    else {
        return x * power(x, n - 1);
    }

    return value;
}
