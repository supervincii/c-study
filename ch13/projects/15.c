// Evaluates RPN expression
// Operands = single digit integers

#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

// Prototypes
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char n);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);
int evaluate_RPN_expression(const char *expression);

// External Variables
char contents[STACK_SIZE] = {0};
int top = 0;

int main(void) {
    char ch, expr[STACK_SIZE], *p;

    while (true) {
        p = expr;
        printf("Enter an RPN expression: ");
        
        while ((ch = getchar()) != '\n' && p < expr + STACK_SIZE) {
            *p++ = ch;
        }

        printf("Result of expression: %d\n", evaluate_RPN_expression(expr));
        p = expr;
        while (*p)
            *p++ = '\0';
    }
    exit(EXIT_SUCCESS);
}

int evaluate_RPN_expression(const char *expression) {
    char op1, op2;
    
    while (*expression) {
        if (isdigit(*expression))
            push(*expression - '0');
        else {
            switch (*expression) {
            case '*':
                push(pop() * pop());
                break;
            case '/':
                op2 = pop();
                op1 = pop();
                push(op1 / op2);
                break;
            case '+':
                push(pop() + pop());
                break;
            case '-':
                op2 = pop();
                op1 = pop();
                push(op1 - op2);
                break;
            case '=':
                return pop();
                break;
            case ' ':
                break;
            default:
                exit(EXIT_FAILURE);
            }
        }
        expression++;
    }
    exit(EXIT_FAILURE);
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

void push(char n) {
    if (is_full())
        stack_overflow();
    else
        contents[top++] = n;
}

char pop(void) {
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
