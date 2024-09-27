// Displays 12 hour time to 24 hour time format

#include <ctype.h>
#include <stdio.h>

int main(void) {
  int hr, min;
  char c;

  printf("Enter a 12-hour time: ");
  scanf("%d : %d %c", &hr, &min, &c);

  if (toupper(c) == 'P' && hr != 12) {
    hr += 12;
  } else if (toupper(c) == 'A' && hr == 12) {
    hr = 0;
  }

  printf("Equivalent 24-hour time: %d:%d\n", hr, min);
  return 0;
}
