#include <stdio.h>

int main(void) {
  int x;
  int result;
  
  printf("Enter the value of x: ");
  scanf("%d", &x);

  result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

  printf("The value of the polynomial is: %d\n", result);
  return 0;
}
