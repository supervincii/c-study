// Calculate the average word length for a sentence

#include <stdio.h>

double compute_average_word_length(const char *sentence);

int main(void) {
    float words = 0, letters_per_word = 0;
    char ch;
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
  
    // skips leading whitespaces
    while ((ch = getchar()) == ' ') ;

    while(ch != '\n') {
        if (ch == ' ') {
            words++;      
        } else if (ch != ' ') {
            letters_per_word++;      
        }
        ch = getchar();
    }
    words++;

    float avg = letters_per_word / words;

    printf("Average word length: %.1f\n", compute_average_word_length(sentence));

    return 0;
}

double compute_average_word_length(const char *sentence) {
    float average = 0;

    // skip whitespaces
    while (*sentence == ' ')
        sentence++;

    while (*sentence) {
        break;
    }
    
    return average;
}
