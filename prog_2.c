#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define SIZE 20

typedef struct {
    int top;
    char items[SIZE];
} Stack;

void init(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, char value) {
    s->items[++(s->top)] = value;
}

char pop(Stack *s) {
    return s->items[(s->top)--];
}

char peek(Stack *s) {
    return s->items[s->top];
}

int precedence(char op) {
    if(op == '+' || op == '-')
        return 1;
    if(op == '*' || op == '/')
        return 2;
    if(op == '^')
        return 3;
    return 0;
}

void infixToPostfix(char infix[], char postfix[]) {
    Stack s;
    init(&s);
    int i = 0, k = 0;

    while(infix[i] != '\0') {

        if(isalnum(infix[i])) {
            postfix[k++] = infix[i];
        }
        else if(infix[i] == '(') {
            push(&s, infix[i]);
        }
        else if(infix[i] == ')') {
            while(!isEmpty(&s) && peek(&s) != '(') {
                postfix[k++] = pop(&s);
            }
            pop(&s);
        }
        else {
            while(!isEmpty(&s) && precedence(peek(&s)) >= precedence(infix[i])) {
                postfix[k++] = pop(&s);
            }
            push(&s, infix[i]);
        }

        i++;
    }

    while(!isEmpty(&s)) {
        postfix[k++] = pop(&s);
    }

    postfix[k] = '\0';
}

int evaluatePostfix(char postfix[]) {
    Stack s;
    init(&s);
    int i = 0;

    while(postfix[i] != '\0') {

        if(isdigit(postfix[i])) {
            push(&s, postfix[i] - '0');
        }
        else {
            int val2 = pop(&s);
            int val1 = pop(&s);
            int result;

            switch(postfix[i]) {
                case '+': result = val1 + val2; break;
                case '-': result = val1 - val2; break;
                case '*': result = val1 * val2; break;
                case '/': result = val1 / val2; break;
                case '^': result = pow(val1, val2); break;
            }

            push(&s, result);
        }

        i++;
    }

    return pop(&s);
}

int main() {
    char infix[SIZE], postfix[SIZE];

    printf("Enter any infix expression  : ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("the postfix expression is: %s\n", postfix);

    int result = evaluatePostfix(postfix);

    printf("the evaluated result is : %d\n", result);

    return 0;
}