#include <stdio.h>

int main(void) {
  int beg, mid, end;
  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &beg, &mid, &end);

  printf("You entered %d.%d.%d\n", beg, mid, end);
  return 0;
}
