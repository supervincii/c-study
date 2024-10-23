#include <stdio.h>

#define MAX 80

int main(void) {
    char ch, msg[MAX] = {0};
    int shift, i = 0;

    printf("Enter message to be encrypted: ");
    while((ch = getchar()) != '\n') {
        msg[i++] = ch;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    printf("Encrypted message: ");
    for(int i = 0; i < MAX && msg[i] != '\0'; i++) {
        // Using ASCII table, A-Z = 65-90; a-z = 97-122
        int msg_dec = msg[i];
        int shift_val = msg[i] + shift;
        if (msg_dec >= 65 && msg_dec <= 90) {
            if (shift_val > 90) {
                int offset = shift_val - 65 - 1;
                shift_val = shift_val - 91 + 65;
            }
        }
        else if (msg_dec >= 97 && msg_dec <= 122) {
            if (shift_val > 122) {
                int offset = shift_val - 97 - 1;
                shift_val = shift_val - 123 + 97;
            }
        }
        else {
            shift_val -= shift;
        }
        
        printf("%c", shift_val);
    }

    printf("\n");

    return 0;
}
