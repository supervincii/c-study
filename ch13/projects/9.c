// Counts the number of vowels in a sentence

#include <stdio.h>
#include <ctype.h>

int compute_vowel_count(const char *sentence);

int main(void) {
    char sentence[100];

    printf("Enter a sentence: ");
    // use fgets instead of scanf as scanf terminates after encountering
    // a whitespace character
    fgets(sentence, 100, stdin);
    
    printf("Your sentence has %d vowels.\n", compute_vowel_count(sentence));
    return 0;
}

int compute_vowel_count(const char *sentence) {
    int vowels = 0;

    while (*sentence) {
        switch (toupper(*sentence)) {
        case 'A': case 'E': case 'I': case 'O': case 'U':
            vowels++;
            break;
        default:
            break;
        }
        // point to the next character in the string array
        sentence++;
    }

    return vowels;
}
