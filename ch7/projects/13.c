// Calculate the average word length for a sentence

#include <stdio.h>

int main(void) {
  float words = 0, letters_per_word = 0;
  char ch;

  printf("Enter a sentence: ");
  
  // skips leading whitespaces
  while ((ch = getchar()) == ' ') ;

  while(ch != '\n') {
    if (ch == ' ') {
      words++;      
    } else if (ch != ' ') {
      letters_per_word++;      
    }
    ch = getchar();
  }
  words++;

  float avg = letters_per_word / words;

  printf("Average word length: %.1f\n", avg);

  return 0;
}
