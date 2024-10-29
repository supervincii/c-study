// Simulates the game of craps

// LOGIC
// first roll and the sum of 2 dice is 7 or 11 = win
// else sum == 2, 3, 12 = lose
// any other roll is called the point and the game continues

// if point rolled again on consecutive time, = win
// lose if roll 7
// if not 7 and not point, continue

// at the end, ask if player wants to play again
// if not 'y' or 'Y', the program will display number of wins and losses, then terminate
// else, play again and recored wins and losses

// three functions: main, roll_dice, and play_game

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void) {
    int win = 0, lose = 0;
    char choice;
    bool in_game = true;
    
    srand(time(NULL));

    while (in_game) {
        bool game= play_game();
        if (game) {
            printf("You win!\n");
            win++;
        }
        else {
            printf("You lose!\n");
            lose++;
        }

        printf("\nPlay again? ");
        scanf(" %c", &choice);
        if (choice != 'y' && choice != 'Y') break;
    }

    printf("\nWins: %d\tLosses: %d\n", win, lose);
    return 0;
}

int roll_dice(void) {
    int x, y;
    
    x = (rand() % 6) + 1;
    y = (rand() % 6) + 1;
    return x + y;
}

bool play_game(void) {
    int value, point;
    value = roll_dice();
    printf("\nYou rolled: %d\n", value);
    if (value == 7 || value == 11) return true;
    else if (value == 2 || value == 3 || value == 12) return false;
    else {
        point = value;
        printf("Your point is %d\n", point);
        value = 1;
    }
    
    while (value) {
        value = roll_dice();
        printf("You rolled: %d\n", value);
        if (value == point) return true;
        else if (value == 7) return false;
    }
}
