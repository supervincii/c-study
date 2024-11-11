// Reverses the words in a sentence

// Use a pointer to keep track of the current position in the array that contains
// the sentence.

#include <stdio.h>

#define MAX 100

int main(void) {
    char ch, terminating_char, sentence[MAX] = {0}, *p = sentence, *q;
    
    printf("Enter a sentence: ");

    // get the input and store it in the array
    while ((ch = getchar()) != '\n' && p < sentence + MAX) {
        if (ch == '.' || ch == '?' || ch == '!') {
            terminating_char = ch;
            break;
        }
        *p++ = ch;
    }
    
    p--;

    while (p >= sentence) {
        while (*--p != ' ' && p != sentence) ;
        q = p == sentence ? sentence : p + 1;
        while (*q != ' ' && *q != '\0') {
            putchar(*q++);
        }
        if (p >= sentence)
            putchar(' ');
    }

    printf("\b%c\n", terminating_char);
    return 0;
}
