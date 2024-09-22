// Prints all even squares between 1 and n.

#include <stdio.h>

int main(void) {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  for (int i = 1; (i * i) <= n; i++) {
    if (i % 2 != 0)
      continue;
    else {
      printf("%d\n", i * i);
    }
  }

  return 0;
}
