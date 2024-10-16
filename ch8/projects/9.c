// Generates a random walk across a 10 x 10 array that prints the alphabet

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void) {
  char grid[SIZE][SIZE], ch = 'A';
  int row, col;
  int up, down, right, left;

  srand((unsigned) time(NULL));

  // Populate the grid with '.' character
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      grid[i][j] = '.';
    }
  }

  // Generate a random position for 'A'
  row = rand() % SIZE;
  col = rand() % SIZE;
  grid[row][col] = ch++;

  while (ch <= 'Z') {
    up = down = right = left = 0;
    
    if (col - 1 >= 0 && grid[row][col - 1] == '.') {
      left++;
    }
    if (col + 1 < SIZE && grid[row][col + 1] == '.') {
      right++;
    }
    if (row - 1 >= 0 && grid[row - 1][col] == '.') {
      up--;
    }
    if (row + 1 < SIZE && grid[row + 1][col] == '.') {
      down++;
    }

    int i = rand() % 4;

    switch(i) {
    case 0:
      if (left) {
        grid[row][--col] = ch++;
        break;
      }
    case 1:
      if (right) {
        grid[row][++col] = ch++;
        break;
      }
    case 2:
      if (up) {
        grid[--row][col] = ch++;
        break;
      }
    case 3:
      if (down) {
        grid[++row][col] = ch++;
        break;
      }
    default:
      break;
    }
  }

  // Prints the grid array
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      printf("%c ", grid[i][j]);
    }
    printf("\n");
  }

  return 0;
}
