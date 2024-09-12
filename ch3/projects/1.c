// Display date in yyyymmdd format based on the user input
// of mm/dd/yyyy

#include <stdio.h>

int main(void) {
  int month, day, year;
  printf("Enter date in mm/dd/yyyy format: ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("You entered the date %d%d%d", year, month, day);
  return 0;
}
