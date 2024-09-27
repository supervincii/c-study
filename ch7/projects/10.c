// Counts the number of vowels in a sentence

#include <stdio.h>
#include <ctype.h>

int main(void) {
  char c;
  int vowels = 0;

  printf("Enter a sentence: ");
  while((c = getchar()) != '\n') {
    switch(toupper(c)) {
    case 'A': case 'E': case 'I': case 'O': case 'U':
      vowels++;
      break;
    default:
      break;
    }
  }

  printf("Your sentence has %d vowels.\n", vowels);
  return 0;
}
