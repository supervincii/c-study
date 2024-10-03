// Reverses a series of numbers

#include <stdio.h>

#define N 10
#define ARR_LEN ((int) (sizeof(a) / sizeof(a[0])))

int main(void) {
  int a[N], i;
  
  printf("Enter %d numbers: ", N);
  for (i = 0; i < ARR_LEN; i++) {
    scanf("%d", &a[i]);
  }

  printf("In reverse order:");
  for (i = ARR_LEN - 1; i >= 0; i--) {
    printf(" %d", a[i]);
  }
  printf("\n");

  return 0;
}
