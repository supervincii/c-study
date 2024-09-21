// Enter two dates and display which comes earlier.

#include <stdio.h>

int main(void) {
  int m1, d1, y1, m2, d2, y2;
  int v1, v2;
  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &m1, &d1, &y1);
  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &m2, &d2, &y2);

  if (y1 > y2) {
    v1 += 10;
  } else if (y1 < y2) {
    v2 += 10;
  }

  if (m1 > m2) {
    v1 += 5;
  } else if (m1 < m2) {
    v2 += 5;
  }

  if (d1 > d2) {
    v1 += 1;
  } else if (d1 < d2) {
    v2 += 1;
  }

  if (v1 > v2) {
    printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", m2, d2, y2, m1, d1, y1);
  } else if (v2 > v1) {
    printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", m1, d1, y1, m2, d2, y2);
  }

  return 0;
}
