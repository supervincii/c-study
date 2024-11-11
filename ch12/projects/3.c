// Reads a message, then prints the reversal of the message
// Take advantage of the fact that an array name can be used as a pointer

#include <stdio.h>

#define MAX 100

char message[MAX] = {0};

int main(void) {
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
    return 0;
}
