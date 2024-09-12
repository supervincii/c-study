#include <stdio.h>

int main(void) {
  int item_no, month, day, year;
  float price;

  printf("Enter item number: ");
  scanf("%d", &item_no);
  printf("Enter unit price: ");
  scanf("%f", &price);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\t Unit\t Purchase\n");
  printf("    \t Price\t Date\n");
  printf("%d\t %.2f\t %d/%d/%d\n", item_no, price, month, day, year);

  return 0;
}
