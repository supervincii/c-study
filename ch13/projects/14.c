// Tests two words if they are anagrams

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_WORD_LENGTH 100

bool are_anagrams(const char *word1, const char *word2);

int main(void) {
    char word1[MAX_WORD_LENGTH + 1], word2[MAX_WORD_LENGTH + 1];

    printf("Enter first word: ");
    scanf("%s", word1);

    printf("Enter second word: ");
    scanf("%s", word2);

    printf(are_anagrams(word1, word2) ?
           "The words are anagrams.\n" : "The words are not anagrams.\n");
    
    return 0;
}

bool are_anagrams(const char *word1, const char *word2) {
    char letters[26] = {0};

    while (*word1) {
        letters[*word1++ % 26]++;
    }

    while (*word2) {
        letters[*word2++ % 26]--;
    }

    for (int i = 0; i < 26; i++) {
        if (letters[i] != 0)
            return false;
    }
    
    return true;
}
