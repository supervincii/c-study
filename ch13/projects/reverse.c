// echoes the command-line arguments in reverse order

#include <stdio.h>

int main(int argc, char *argv[]) {
    int i = argc - 1;
    while (i > 0) {
        printf("%s", argv[i--]);
        if (i != 0)
            printf(" ");
    }

    printf("\n");

    return 0;
}
