// Reads a message, then prints the reversal of the message

#include <stdio.h>

#define MAX 100

void clear_array(void);
void reverse_not_pointer(void);
void reverse_pointer();

char message[MAX] = {0};

int main(void) {
    reverse_not_pointer();
    clear_array();
    reverse_pointer();
    clear_array();
    return 0;
}

void clear_array(void) {
    for (int i = 0; i < MAX; i++) {
        message[i] = 0;
    }
    printf("\n");
    printf("ARRAY CLEARED!\n");
}

void reverse_not_pointer(void) {
    int i = 0;
    char ch;
    
    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') {
        message[i++] = ch;
    }

    printf("The reversal is: ");
    for (--i; i >= 0; i--)
        printf("%c", message[i]);
    printf("\n");
}

void reverse_pointer() {
    char ch;
    // pointer p points to the first element of the message array
    char *p = message;
    
    printf("Enter a message: ");
    
    // while the input character is not a new line
    // and p is within the bounds of the message array
    while ((ch = getchar()) != '\n' && p < message + MAX)
        // put the value of ch to the message array in which p is pointing at
        // increment p, -> move p to the next element of the array
        *p++ = ch;
    
    // decrement p so that we won't get \0 when we reverse the array
    p--;

    printf("The reversal is: ");
    // while p (index) is greater than index 0
    while (p >= message)
        // print the value of the message array in which p is pointing at
        // decrement p to print the next character of the message, moving the
        // pointer to the left of the array
        printf("%c", *p--);

    printf("\n");
}
