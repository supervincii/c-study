// Generates a random walk across a 10 x 10 array that prints the alphabet

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void) {
    char grid[SIZE][SIZE], ch = 'A';

    srand((unsigned)time(NULL));

    generate_random_walk(grid);
    print_array(grid);

    return 0;
}

void print_array(char walk[10][10]) {
    // Prints the grid array
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }    
}

void generate_random_walk(char walk[10][10]) {
    char ch = 'A';
    int up, down, right, left;
    int row, col;
    
    // Populate the grid with '.' character
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            walk[i][j] = '.';
        }
    }

    // Generate a random position for 'A'
    row = rand() % SIZE;
    col = rand() % SIZE;
    walk[row][col] = ch++;

    while (ch <= 'Z') {
        up = down = right = left = 0;

        if (col - 1 >= 0 && walk[row][col - 1] == '.') {
            left++;
        }
        if (col + 1 < SIZE && walk[row][col + 1] == '.') {
            right++;
        }
        if (row - 1 >= 0 && walk[row - 1][col] == '.') {
            up--;
        }
        if (row + 1 < SIZE && walk[row + 1][col] == '.') {
            down++;
        }

        int i = rand() % 4;

        switch (i) {
        case 0:
            if (left) {
                walk[row][--col] = ch++;
                break;
            }
        case 1:
            if (right) {
                walk[row][++col] = ch++;
                break;
            }
        case 2:
            if (up) {
                walk[--row][col] = ch++;
                break;
            }
        case 3:
            if (down) {
                walk[++row][col] = ch++;
                break;
            }
        default:
            break;
        }
    }    
}
