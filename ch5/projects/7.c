// Finds largest and smallest integer.

#include <stdio.h>

int main(void) {
  int i1, i2, i3, i4, largest, smallest;
  printf("Enter four integers: ");
  scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

  if (i1 > i2) {
    largest = i1;
    smallest = i2;
  } else {
    largest = i2;
    smallest = i1;
  }

  if (i3 > largest) {
    largest = i3;
  }
  if (i3 < smallest) {
    smallest = i3;
  }

  if (i4 > largest) {
    largest = i4;
  }
  if (i4 < smallest) {
    smallest = i4;
  }

  printf("Largest: %d\n", largest);
  printf("Smallest: %d\n", smallest);

  return 0;
}
