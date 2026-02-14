#include <stdio.h>
#include <string.h>

#define num 10

char stack[num];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

int isMatchingPair(char open, char close) {
    if (open == '(' && close == ')') return 1;
    if (open == '{' && close == '}') return 1;
    if (open == '[' && close == ']') return 1;
    return 0;
}

int isBalanced(char exp[]) {
    for (int i = 0; exp[i]; i++) {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            push(exp[i]);

        if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if (top == -1) return 0;
            if (!isMatchingPair(pop(), exp[i]))
                return 0;
        }
    }
    return (top == -1);
}

int main() {
    char exp[10];

    printf("Enter expression: ");
    fgets(exp, 10, stdin);

    if (isBalanced(exp))
        printf("Balanced\n");
    else
        printf("Not Balanced\n");

    return 0;
}
