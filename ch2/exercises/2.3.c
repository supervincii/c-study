/* Computes the dimensional weight of a box from input */
/* provided by the user. */

#include <stdio.h>

// defining constants
#define INCHES_PER_POUND 166

int main(void) {
  int height = 8;
  int length = 12;
  int width = 10;
  int volume = (height * length * width);

  printf("Volume (cu. in.): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND);

  return 0;
}
