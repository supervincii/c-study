// Evaluates RPN expression
// Operands = single digit integers

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

// Prototypes
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int n);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

// External Variables
int contents[STACK_SIZE];
int top = 0;

int main(void) {
    int value = 0;
    char ch;

    printf("Enter an RPN expression: ");

    while (true) {
        scanf(" %c", &ch);
        if (ch >= '0' && ch <= '9') {
            push((int) ch - '0');
        }

        else if (ch == '*' || ch == '/' || ch == '+' || ch == '-') {
            int b = pop();
            int a = pop();

            switch (ch) {
            case '*':
                value = a * b;
                break;
            case '/':
                value = a / b;
                break;
            case '+':
                value = a + b;
                break;
            case '-':
                value = a - b;
                break;
            default:
                return 0;
            }
            push(value);
        }
        else if (ch == '=') {
            value = pop();
            break;
        }
        else {
            printf("Invalid input: %c\n", ch);
            return 1;
        }
    }

    printf("Value of the expression: %d\n", value);
    make_empty();
}

void make_empty(void) {
    top = 0;
}

bool is_empty(void) {
    return top == 0;
}

bool is_full(void) {
    return top == STACK_SIZE;
}

void push(int n) {
    if (is_full())
        stack_overflow();
    else
        contents[top++] = n;
}

int pop(void) {
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void) {
    printf("\nStack overflow\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void) {
    printf("\nStack underflow\n");
    exit(EXIT_FAILURE);
}
