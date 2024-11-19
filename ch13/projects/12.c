// Reverses the words in a sentence

#include <stdio.h>

#define MAX_WORD_LETTER 20
#define MAX_WORD_COUNT 30

int main(void) {
    char c, terminating_char, sentence[MAX_WORD_COUNT][MAX_WORD_LETTER + 1];
    int i = 0, j = 0;
    
    printf("Enter a sentence: ");
    
    while ((c = getchar()) != '\n' && i < MAX_WORD_COUNT) {
        
        if (c == ' ' || c == '\t') {
            sentence[i][j] = '\0';
            i++;
            j = 0;
            continue;
        }

        if (c == '.' || c == '!' || c == '?') {
            terminating_char = c;
            sentence[i][j] = '\0';
            break;
        }
        else if (j < MAX_WORD_LETTER) {
            sentence[i][j++] = c;
        }
    }

    printf("Reversal of the sentence: ");
    
    while (i > 0) 
        printf("%s ", sentence[i--]);

    printf("%s%c\n", sentence[i], terminating_char);

    return 0;
}
