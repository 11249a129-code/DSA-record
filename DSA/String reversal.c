//aim: To write a string reversal program in c

//Algorithm:
START

FUNCTION push(character):
    top = top + 1
    stack[top] = character

FUNCTION pop():
    character = stack[top]
    top = top - 1
    RETURN character

DECLARE stack[SIZE], top = -1
DECLARE string, i

READ string

// Push all characters
FOR i = 0 TO length(string) - 1:
    push(string[i])

// Pop and replace to reverse
FOR i = 0 TO length(string) - 1:
    string[i] = pop()

PRINT "Reversed String = ", string

STOP

//program:
#include <stdio.h>
#include <string.h>
#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char c) {
    if(top == SIZE - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = c;
}

char pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
        return '\0';
    }
    else
        return stack[top--];
}

int main() {
    char str[SIZE];
    int i;

    printf("Enter a string: ");
    gets(str);

    // Push characters to stack
    for(i = 0; i < strlen(str); i++) {
        push(str[i]);
    }

    // Pop characters to reverse
    for(i = 0; i < strlen(str); i++) {
        str[i] = pop();
    }

    printf("Reversed string: %s", str);

    return 0;
}
