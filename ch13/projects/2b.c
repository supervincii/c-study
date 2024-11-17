// Prints a one-month reminder list

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50      /* max number of reminders */
#define MSG_LEN 60         /* max length of reminder message */

int read_line(char str[], int n);

int main(void) {
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[9], msg_str[MSG_LEN + 1];
    int day, hour, min, i, j, num_remind = 0;

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day, 24-hour time, and reminder: ");
        scanf("%2d", &day);

        if (day == 0)
            break;
        else if (day < 0 || day > 31) {
            while (getchar() != '\n');
            printf("Day should not be a negative number or greater than 31\n");
            continue;
        }

        scanf("%2d:%2d", &hour, &min);

        if (hour < 0 || hour > 23) {
            while (getchar() != '\n');
            printf("Hour should not be less than zero or greater than 23\n");
            continue;
        }

        if (min < 0 || min > 59) {
            while (getchar() != '\n');
            printf("Minutes should not be less than zero or greater than 59\n");
            continue;
        }

        sprintf(day_str, "%2d %02d:%02d", day, hour, min);

        read_line(msg_str, MSG_LEN);

        for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0)
                break;
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j-1]);

        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++) {
        printf(" %s\n", reminders[i]);
    }

    return 0;
}

int read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
