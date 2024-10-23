#include <stdio.h>

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

    // Intialize magic square and place 1 at the middle of row 0.
    row = 0;
    col = (size - 1) / 2;
    square[row][col] = num++;

    while(num <= size * size) {
        int new_row = (row == 0) ? size - 1 : row - 1;
        int new_col = (col == size - 1) ? 0 : col + 1;

        if(square[new_row][new_col] != 0) {
            // If new position is filled, move down instead.
            row = (row == size - 1) ? 0 : row + 1;
        }
        else {
            row = new_row;
            col = new_col;
        }
        square[row][col] = num++;
    }

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("%3d ", square[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
