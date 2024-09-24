// Approximates the value of e.

#include <stdio.h>

int main(void) {
  int n;
  float e = 1.0, factorial;
  printf("Enter a value of n to approximate the value of e: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    factorial = 1.0;
    
    for (int j = 1; j <= i; j++) {
      factorial *= j;
    }
    e += (1.0 / factorial);
  }

  printf("The approximation of the value of e given %d iterations is %.5f\n", n, e);

  return 0;
}
