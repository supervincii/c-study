// Converts numerical grade into a letter grade.

#include <stdio.h>

int main(void) {
  int grade, g_tens;
  printf("Enter numerical grade: ");
  scanf("%d", &grade);

  g_tens = grade / 10;

  printf("Letter grade: ");
  switch(g_tens) {
  case 10: case 9:
    printf("A\n");
    break;
  case 8:
    printf("B\n");
    break;
  case 7:
    printf("C\n");
    break;
  case 6:
    printf("D\n");
    break;
  default:
    printf("F\n");
    break;
  }

  return 0;
}
