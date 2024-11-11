// Reads a message and checks whether it's a palindrome
#include <ctype.h>
#include <stdio.h>

#define N 100

void check_message(void);

char message[N] = {0};

int main(void) {
    char ch, *p = message, *q = message;

    printf("Enter a message: ");

    // while input is not a new line character and while the pointer is within
    // the bounds of the message array
    while ((ch = getchar()) != '\n' && p < message + N) {
	// check if ch is a letter
        if (isalpha(ch)) {
            // if ch is a letter then convert it to lowercase
            // store it in the array and then increment pointer p
            *p++ = tolower(ch);
      }
    }
    // decrement p so that it does not point to an undefined value '\0'
    p--;

    // compare q which is at the first element of the array and p which is
    // at the last element. if they don't match then it is not a palindrome
    // move p inward and q outward to check the next values.
    // the while loop does not compare if they are pointing at the same element
    // of the array since it is basically the same.
    while (q < p) {
	if (*q != *p) {
            printf("Not a palindrome.\n");
            return 0;
        }
        q++;
        p--;
    }

    printf("Palindrome.\n");
    return 0;
}
