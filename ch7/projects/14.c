// Uses Newton's method to compute the square root of a positive floating
// point number

#include <stdio.h>
#include <math.h>

int main(void) {
  double num, avg, guess = 1;
  printf("Enter a positive number: ");
  scanf("%lf", &num);

  while (1) {
    avg = ((num / guess) + guess) / 2;
    
    if (fabs(guess - avg) < 0.00001) {
      break; 
    }
    else {
      guess = avg;      
    }
  }

  printf("Square root: %f\n", avg);
  return 0;
}
