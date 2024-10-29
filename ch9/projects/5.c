#include <stdio.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

int main(void) {
    int size, row, col, num = 1;
    
    printf("The program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &size);

    int square[size][size];

    if(size % 2 == 0 || size > 99) {
        printf("The size of the magic square is invalid.");
        printf("Exiting program...");
        return 0;
    }

    // Initialize magic square with all elements equal to 0.
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            square[i][j] = 0;
        }
    }

    create_magic_square(size, square);
    print_magic_square(size, square);
    
    return 0;
}

void create_magic_square(int n, int magic_square[n][n]) {
    int row, col, num = 1;
    // Intialize magic square and place 1 at the middle of row 0.
    row = 0;
    col = (n - 1) / 2;
    magic_square[row][col] = num++;

    while(num <= n * n) {
        int new_row = (row == 0) ? n - 1 : row - 1;
        int new_col = (col == n - 1) ? 0 : col + 1;

        if(magic_square[new_row][new_col] != 0) {
            // If new position is filled, move down instead.
            row = (row == n - 1) ? 0 : row + 1;
        }
        else {
            row = new_row;
            col = new_col;
        }
        magic_square[row][col] = num++;
    }
}

void print_magic_square(int n, int magic_square[n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%3d ", magic_square[i][j]);
        }
        printf("\n");
    }
}
