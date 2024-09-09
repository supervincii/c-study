// Computes the volume of a sphere

#include <stdio.h>

#define PI 3.14159

int main(void) {
  int r;
  float volume;
  
  printf("Enter sphere radius: ");
  scanf("%d", &r);

  volume = (4.0f/3.0f) * PI * (r * r * r);

  printf("Volume of the sphere given radius %d is %.2f\n", r, volume);

  return 0;
}
