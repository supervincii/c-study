// Finds the largest number entered by the user.

#include <stdio.h>

int main(void) {
  float n, largest;
  printf("Enter a number: ");
  scanf("%f", &n);
  largest = n;

  while (1) {
    printf("Enter a number: ");
    scanf("%f", &n);
    if (n == 0) {
      printf("The largest number entered was %.2f\n", largest);
      return 0;
    }
    else if (n > largest) {
      largest = n;      
    }
  }
}
