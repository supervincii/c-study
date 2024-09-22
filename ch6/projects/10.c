// WIP
// Get the earliest date from input

#include <stdio.h>

int main(void) {
  int m, d, y, em, ed, ey;

  printf("Enter a date (mm/dd/yy): ");
  scanf("%d/%d/%d", &m, &d, &y);

  while (m != 0 && d != 0 && y != 0) {

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m, &d, &y);
  }
}
