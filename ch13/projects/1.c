// Finds the smallest and largest in a series of words

#include <stdio.h>
#include <string.h>

#define MAX_WORD_LENGTH 20

int read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n - 1)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

int main(void) {
    char smallest_word[MAX_WORD_LENGTH], largest_word[MAX_WORD_LENGTH];
    char input[MAX_WORD_LENGTH];

    printf("Enter word: ");
    read_line(input, MAX_WORD_LENGTH);

    // initialize the value of smallest_word and largest_word
    strcpy(smallest_word, input);
    strcpy(largest_word, input);

    while (strlen(input) != 4) {
        if (strcmp(input, smallest_word) < 0)
            strcpy(smallest_word, input);

        if (strcmp(input, largest_word) > 0)
            strcpy(largest_word, input);

        printf("Enter word: ");
        read_line(input, MAX_WORD_LENGTH);
    }
    
    printf("\n");
    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}
