#include <stdio.h>

void reverse_name(char *name);

int main(void) {
    char ch, first;
    char name[100];

    printf("Enter a first and last name: ");
    fgets(name, sizeof(name), stdin);

    reverse_name(name);
    
    return 0;
}

void reverse_name(char *name) {
    char *p = name, initial;

    // for whitespaces before the first name, skip and increment the pointer
    while (*p == ' ')
        p++;

    // store the first character of the first name to initial
    initial = *p++;

    // skip the remaining characters of the first name
    while (*p && *p++ != ' ')
        ;

    // print out the last name excluding the newline character that is included
    // with fgets
    while (*p && *p != '\n')
        putchar(*p++);

    // print out the comma, initial, and the period
    printf(", %c.\n", initial);
}
