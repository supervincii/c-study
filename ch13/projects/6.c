// Checks planet names

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

char* to_lowercase(const char input[], char output[]);

int main(int argc, char *argv[]) {
    char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
    char arg_lower[8], planet_lower[8];

    int i, j;
    
    // for each argument of the program not including the null pointer
    for (i = 1; i < argc; i++) {
        to_lowercase(argv[i], arg_lower);
        // for each item in the planet string array
        for (j = 0; j < NUM_PLANETS; j++) {
            to_lowercase(planets[j], planet_lower);
            // look for the input argument in the planets array
            if (strcmp(arg_lower, planet_lower) == 0) {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;                            
            }
        }
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }
    return 0;
}

char* to_lowercase(const char input[], char output[]) {
    int i = 0;

    for (i = 0; input[i] != '\0'; i++)
        output[i] = tolower(input[i]);
    
    output[i] = '\0';
    return output;
}
