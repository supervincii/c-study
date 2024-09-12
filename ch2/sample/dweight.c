/* Computes the dimensional weight of a box from input */
/* provided by the user. */

#include <stdio.h>

// defining constants
#define INCHES_PER_POUND 166

int main(void) {
  int height, length, width, volume, weight;

  printf("Enter height of box: ");
  scanf("%d", &height);
  printf("Enter lengthof box: ");
  scanf("%d", &length);
  printf("Enter width of box: ");
  scanf("%d", &width);

  volume = height * length * width;
  weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

  printf("Volume (cu. in.): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);

  return 0;
}
