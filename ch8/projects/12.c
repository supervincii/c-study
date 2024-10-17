// Computes the value of a word at scrabble

#include <ctype.h>
#include <stdio.h>

int main(void) {
  char values[26] = {
    1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5,
    1, 3, 1, 1, 3, 10, 1, 1, 1, 1,
    4, 4, 8, 4, 10};
  int score = 0;
  char c;
  printf("Enter a word: ");
  
  while ((c = getchar()) != '\n') {
    // getting the ascii value of toupper(c) - 65 to correspond to the values array
    score += values[toupper(c) - 65];
  }

  printf("Scrabble value: %d\n", score);
  return 0;
}
