// Translates alphabetic phone number into numeric form

#include <stdio.h>

int main(void) {
  char c;
  char phone_num[15] = {0};
  char numeric[15] = {0};
  int i = 0;

  printf("Enter phone number: ");
  while((c = getchar()) != '\n') {
    phone_num[i++] = c;
  }

  printf("In numeric form: ");
  for (int i = 0; i < 15; i++) {
    char c = phone_num[i];
    switch(c) {
    case 'A': case 'B': case 'C':
      numeric[i] = '2';
      break;
    case 'D': case 'E': case 'F':
      numeric[i] = '3';
      break;
    case 'G': case 'H': case 'I':
      numeric[i] ='4';
      break;
    case 'J': case 'K': case 'L':
      numeric[i] = '5';
      break;
    case 'M': case 'N': case 'O':
      numeric[i] = '6';
      break;
    case 'P': case 'R': case 'S':
      numeric[i] = '7';
      break;
    case 'T': case 'U': case 'V':
      numeric[i] = '8';
      break;
    case 'W': case 'X': case 'Y':
      numeric[i] = '9';
      break;
    default:
      numeric[i] = c;
      break;
    }
  }

  for (int i = 0; i < 15; i++) {
    printf("%c", numeric[i]);
  }
  
  printf("\n");
  return 0;
}
