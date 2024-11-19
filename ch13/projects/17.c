// Reads a message and checks whether it's a palindrome

#include <stdio.h>
#include <stdbool.h>

#define N 100

void check_message(void);
bool is_palindrome(const char *message);

int main(void) {
    char message[N];

    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    printf(is_palindrome(message) ?
           "Palindrome\n": "Not a palindrome\n");
    
    return 0;
}

bool is_palindrome(const char *message) {
    const char *p = message, *q = message;

    while (*q != '\n' && *q != '\0')
        q++;

    q--;

    while (p < q) {
        if (*p++ != *q--)
            return false;
    }

    return true;
}
