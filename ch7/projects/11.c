#include <stdio.h>

int main(void) {
  char ch, first;

  printf("Enter a first and last name: ");

  // skips leading whitespaces
  while((ch = getchar()) == ' ') ;

  // store the first letter of the first name
  first = ch;

  // skips the remaining letters of the first name
  while((ch = getchar()) != ' ') ;

  // skips whitespaces befor the last name
  while((ch = getchar()) == ' ') ;

  // prints the last name
  while(ch != ' ' && ch != '\n') {
    putchar(ch);
    ch = getchar();
  }

  printf(", %c.\n", first);

  return 0;
}
