// Display a time in 12-hour format given 24-hour time.

#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int hour, min;
  printf("Enter a 24-hour time (HH:MM): ");
  scanf("%d:%d", &hour, &min);

  if (hour - 12 > 0) {
    printf("Equivalent 12-hour time: %d:%d", hour-12, min);
  }
  else if (hour - 12 < 0) {
    printf("Equivalent 12-hour time: %d:%d", hour, min);
  }
  else {
    printf("Equivalent 12-hour time: 12:%d", min);
  }

  if (hour >= 12) printf(" PM.\n");
  else printf(" AM.\n");

  return 0;
}
