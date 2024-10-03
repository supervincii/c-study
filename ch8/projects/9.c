// Generates a random walk across a 10 x 10 array that prints the alphabet

#include <stdio.h>
#include <time.h>
#include <math.h>

#define SIZE 10

int main(void) {
  char grid[SIZE][SIZE], ch = 'A';

  // Populate the grid with '.' character
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      grid[i][j] = '.';
    }
  }

  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      printf("%c ", grid[i][j]);
    }
    printf("\n");
  }

  return 0;
}
