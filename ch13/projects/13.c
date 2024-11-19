#include <stdio.h>

#define MAX 80

void encrypt(char *message, int shift);

int main(void) {
    char msg[MAX];
    int shift;

    printf("Enter message to be encrypted: ");
    fgets(msg, sizeof(msg), stdin);

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    encrypt(msg, shift);



    return 0;
}

void encrypt(char *message, int shift) {
    // save the pointer before incrementing the message pointer for printing
    char *original_message = message;
    
    printf("Encrypted message: ");

    while (*message != '\n' && *message != '\0') {
        if (*message >= 'A' && *message <= 'Z')
            *message = ((*message - 'A' + shift) % 26) + 'A';
        else if (*message >= 'a' && *message <= 'z')
            *message = ((*message - 'a' + shift) % 26) + 'a';

        message++;
    }

    printf("%s", original_message);
}
