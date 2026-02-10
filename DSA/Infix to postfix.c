//aim:infix to postfix conversions 

//Algorithm:
BEGIN 
1. INITIALIZE AN EMPTY STACK (OPERAND STACK). 
2. SCAN THE POSTFIX EXPRESSION FROM LEFT TO RIGHT, ONE TOKEN AT A TIME. 
a. IF THE TOKEN IS AN OPERAND, THEN PUSH IT ONTO STACK. 
b. IF THE TOKEN IS AN OPERATOR, THEN POP THE TOP TWO TOKENS FROM THE 
STACK. 
i. FORM PROPER STRING WITH THE OPERATOR IN THE CORRECT ORDER 
(SECOND POPPED ELEMENT OPERATOR FIRST POPPED ELEMENT) AND 
APPLY PARENTHESIS (EX: "(" + 2ND ELEMENT + OPERATOR + 1ST 
ELEMENT + ")“ ). 
ii. PUSH THIS NEW STRING BACK ONTO STACK. 
3. REPEAT STEP 3 UNTIL THE END OF POSTFIX EXPRESSION. 
4. THE ELEMENT LEFT IN STACK IS THE FINAL INFIX EXPRESSION
end

//program:
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100
char stack[MAX][MAX];
int top = -1;
void push(char *str) {
    top++;
    strcpy(stack[top], str);
}
char* pop() {
    return stack[top--];
}
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

int main() {
    char postfix[MAX], op1[MAX], op2[MAX], temp[MAX];
    int i;

    printf("Enter Postfix Expression: ");
    scanf("%s", postfix);

    for(i = 0; postfix[i] != '\0'; i++) {
        if(isalnum(postfix[i])) { // If operand
            char operand[2] = {postfix[i], '\0'};
            push(operand);
        }
        else if(isOperator(postfix[i])) { // If operator
            strcpy(op1, pop()); 
            strcpy(op2, pop());  
            sprintf(temp, "(%s%c%s)", op2, postfix[i], op1);

            push(temp);
        }
    }

    printf("Infix Expression: %s\n", stack[top]);
    return 0;
}
