// Calculate the average word length for a sentence

#include <ctype.h>
#include <stdio.h>

double compute_average_word_length(const char *sentence);

int main(void) {
    float words = 0, letters_per_word = 0;
    char ch;
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
  
    printf("Average word length: %.1f\n", compute_average_word_length(sentence));

    return 0;
}

double compute_average_word_length(const char *sentence) {
    float letters = 0, word = 0, average = 0;

    while (*sentence != '\n' && *sentence != '\0') {

        // skip whitespaces
        if (*sentence == ' ') {
            sentence++;
            continue;
        }

        // if encountered a letter, it is most likely the letter of the first word
        // increment word count
        if (isalpha(*sentence)) word++;

        // then loop through the word until we reach a non alphabet character
        // like a whitespace, punctuation mark, etc.
        
        // increment the letter count and increment the pointer
        // to move to the next value
        while (isalpha(*sentence)) {
            letters++;
            sentence++;
        }
    }

    average = letters / word;
    
    return average;
}
