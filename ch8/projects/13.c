#include <stdio.h>

int main(void) {
  char ch, first;
  char last[20] = {0};
  int i = 0;

  printf("Enter a first and last name: ");

  // skips leading whitespaces
  while((ch = getchar()) == ' ') ;

  // store the first letter of the first name
  first = ch;

  // skips the remaining letters of the first name
  while((ch = getchar()) != ' ') ;

  // skips whitespaces before the last name
  while((ch = getchar()) == ' ') ;

  // get the first letter of the last name
  last[i++] = ch;
  
  // store last name in array
  while((ch = getchar()) != '\n' && ch != ' ' && i < 19) {
    last[i++] = ch;
  }

  printf("You entered the name: ");
  for (int i = 0; i < 20; i++) {
    printf("%c", last[i]);
  }
  printf(", %c.\n", first);

  return 0;
}
