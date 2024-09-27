// evaluates an expression
// no operator takes precedence over the other and is evaluated from
// left to right

#include <stdio.h>

int main(void) {
  double total = 0;
  float number;
  char c;
  printf("Enter an expression: ");
  scanf("%lf", &total);

  while ((c = getchar()) != '\n') {
    switch (c) {
    case '+':
      scanf("%f", &number);
      total += number;
      break;
    case '-':
      scanf("%f", &number);
      total -= number;
      break;
    case '*':
      scanf("%f", &number);
      total *= number;
      break;
    case '/':
      scanf("%f", &number);
      total /= number;
      break;
    }
  }

  printf("Value of expression: %.2f\n", total);

  return 0;
}
