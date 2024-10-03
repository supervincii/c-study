// Reads a 5 x 5 array of integers and prints the row sums and the column sums.

#include <stdio.h>

int main(void) {
  int arr[5][5] = {0}, row_total = 0, col_total = 0;

  for (int i = 0; i < 5; i++) {
    printf("Enter row %d: ", i + 1);
    for (int j = 0; j < 5; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  printf("Row totals: ");
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      row_total += arr[i][j];
    }
    printf("%3d", row_total);
    row_total = 0;
  }
  printf("\n");

  printf("Column totals: ");
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      col_total += arr[j][i];
    }
    printf("%3d", col_total);
    col_total = 0;
  }
  printf("\n");
  
  return 0;
}
