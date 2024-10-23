// Tests two words if they are anagrams
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    int letter_count[26] = {0};

    printf("Enter first word: ");
    while((ch = getchar()) != '\n') {
        // ASCII a-z = 97-122
        ch = tolower(ch);
        letter_count[ch - 97]++;
    }

    printf("Enter second word: ");
    while((ch = getchar()) != '\n') {
        ch = tolower(ch);
        letter_count[ch - 97]--;
    }

    for(int i = 0; i < 26; i++) {
        if(letter_count[i] != 0) {
            printf("The words are not anagrams.\n");
            return 0;
        }
    }
    printf("The words are anagrams.\n");
    return 0;
}
