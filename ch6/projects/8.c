// Prints a calendar

#include <stdio.h>

int main(void) {
  int i, day, week, n;
  int week_counter, day_counter;
  printf("Enter the number of days in month: ");
  scanf("%d", &day);
  printf("Enter starting day of the week (1-Sun, 7-Sat): ");
  scanf("%d", &week);

  for (i = 1, n = 1; i <= day + week - 1; i++) {
    if (i < week) {
      printf("    ");
    }
    else {
      printf("%4d", n++);
    }

    if (i % 7 == 0) {
      printf("\n");
    }
  }
  printf("\n");
  return 0;
}
