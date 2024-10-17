// Reverses the words in a sentence

#include <stdio.h>

#define MAX 100

int main(void) {
  char ch, sentence[MAX] = {0};
  int i = 0, char_count = 0;
  int marker = 0;

  printf("Enter a sentence: ");

  // get the input and store it in the array
  do {
    ch = getchar();
    sentence[i++] = ch;
    char_count++;
  } while (ch != '.' && ch != '?' && ch != '!' && ch != '\n');

  // marks the end of the array
  marker = char_count - 1;
  
  // print the array but the words backwards
  // exclude the exclamation point when printing the words
  for (int i = char_count - 2; i >= 0; i--) {
    if (sentence[i] == ' ') {
      for (int j = i + 1; j < marker; j++) {
        printf("%c", sentence[j]);
      }
      printf(" ");
      marker = i;
    }
  }

  // print the first word
  for (int i = 0; sentence[i] != ' '; i++) {
    printf("%c", sentence[i]);
  }

  printf("%c", sentence[char_count - 1]);
  printf("\n");
  return 0;
}
