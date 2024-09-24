// Approximates the value of e.

#include <stdio.h>

int main(void) {
  float e = 1.0, factorial, limit, curr_term = 1;
  printf("Enter term limit value: ");
  scanf("%f", &limit);

  printf("%f %f", curr_term, limit);

  for (int i = 1; ; i++) {
    factorial = 1.0;
    
    for (int j = 1; j <= i; j++) {
      factorial *= j;
    }
    
    curr_term = 1.0 / factorial;
    if (curr_term < limit) break;
    
    e += curr_term;
  }

  printf("The approximation of the value of e is %.5f\n", e);

  return 0;
}
