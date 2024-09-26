// Prints a table of squares using a for statement.

#include <stdio.h>

int main(void) {
  int i, n;

  printf("This program prints a table of squares. \n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);
  
  for (i = 1; i <= n; i++)
    printf("%10d%10d\n", i, i * i);

  printf("\n");
  printf("sizeof long in bytes %zu\n", sizeof(long));
  printf("sizeof int in bytes %zu\n", sizeof(int));
  printf("sizeof short in bytes%zu\n", sizeof(short));

  // The smallest value that causes error for value of n using different types are:
  // short type: sqrt(2^15 - 1) -> 181.01 but since we need int -> 182
  // int type: sqrt(2^31 - 1) -> 46341
  // long type: sqrt(2^63 - 1) -> 3037000500

  return 0;
}
