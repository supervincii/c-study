// Reads a message, then prints the reversal of the message

#include <stdio.h>

#define MAX 100

void clear_array(void);
void reverse_not_pointer(void);
void reverse_pointer();
void reverse(char *message);

int main(void) {
    char message[MAX];

    printf("Enter message: ");
    fgets(message, sizeof(message), stdin);
    
    reverse(message);
    return 0;
}

void reverse(char *message) {
    char temp, *left = message, *original = message;

    // make message pointer point to the end of the string array
    // until it reaches a new line character
    while (*message != '\n' && *message != '\0')
        message++;

    // since at the end of the while loop, the message pointer will point
    // to the newline character, decrement the pointer so that it points
    // to the last character of the string array which is not a new line character
    message--;

    while (left < message) {
        temp = *message;
        *message-- = *left;
        *left++ = temp;
    }

    printf("Reversed: %s\n", original);
}
