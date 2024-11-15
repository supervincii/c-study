// Checks planet names

#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[]) {
    char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};

    int i, j;
    
    // for each argument of the program not including the null pointer
    for (i = 1; i < argc; i++) {
        // for each item in the planet string array
        for (j = 0; j < NUM_PLANETS; j++)

            // look for the input argument in the planets array
            if (strcmp(argv[i], planets[j]) == 0) {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;                
            }
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }
    return 0;
}
