#include <stdio.h>

const char *months[] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "Decemeber"
};

int main(void) {
    int m, d, y;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf(" %d/ %d/ %d", &m, &d, &y);

    printf("You entered the date %s %02d, %4d\n", months[m - 1], d, y);
    return 0;
}
