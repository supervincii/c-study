// Display Beaufort scale based on user input of wind speed in knots.

#include <stdio.h>

int main(void) {
  float speed;

  printf("Enter wind speed in knots: ");
  scanf("%f", &speed);

  if (speed < 1) {
    printf("Calm\n");
  } else if (speed >= 1 && speed < 4) {
    printf("Light air\n");
  } else if (speed >= 4 && speed < 28) {
    printf("Breeze\n");
  } else if (speed >= 28 && speed < 48) {
    printf("Gale\n");
  } else if (speed >= 48 && speed < 64) {
    printf ("Storm\n");
  } else {
    printf("Hurricane\n");
  }

  return 0;
}
