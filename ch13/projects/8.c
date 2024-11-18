// Computes the value of a word at scrabble

#include <ctype.h>
#include <stdio.h>

#define MAX 100

int compute_scrabble_value(const char *word);

int main(void) {
    int score = 0;
    char c[MAX];
    printf("Enter a word: ");
    scanf("%s", c);

    printf("Scrabble value: %d\n", compute_scrabble_value(c));
    return 0;
}

int compute_scrabble_value(const char *word) {
    int score = 0;
    int values[] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
        1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10
    };
    
    while (*word) 
        score += values[toupper(*word++) - 'A'];

    return score;
}
