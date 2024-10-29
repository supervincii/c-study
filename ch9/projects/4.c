// Tests two words if they are anagrams
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void) {
    int letter_count1[26] = {0}, letter_count2[26] = {0};
    
    printf("Enter first word: ");
    read_word(letter_count1);

    printf("Enter second word: ");
    read_word(letter_count2);

    bool is_equal = equal_array(letter_count1, letter_count2);

    if (is_equal) printf("The words are anagrams.\n");
    else printf("The words are not anagrams.\n");

    return 0;
}

void read_word(int counts[26]) {
    char ch;
    while((ch = getchar()) != '\n') {
        // ASCII a-z = 97-122
        ch = tolower(ch);
        counts[ch - 97]++;
    }    
}

bool equal_array(int counts1[26], int counts2[26]) {
    for (int i = 0; i < 26; i++) {
        if (counts1[i] != counts2[i]) return false;
    }
    return true;
}
