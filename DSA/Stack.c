//aim
//stack operations in c

/*algorithm
push(stack,item)

bigen
if top==max-1 then
print"stack overflow"
return 
end
pop(stack)
begin
if top==-1 then
print"stack underflow"
return
end if
item=stack[top]
top=top-1
return item
end*/

//program
#include <stdio.h>
#define MAX 5  

int stack[MAX];
int top = -1;  

void push(int item) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    top = top + 1;
    stack[top] = item;
    printf("%d pushed to stack\n", item);
}
int pop() {
    int item;
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1; 
    }
    item = stack[top];
    top = top - 1;
    printf("%d popped from stack\n", item);
    return item;
}
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}
int main() {
    int choice, item;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter item to push: ");
                scanf("%d", &item);
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
