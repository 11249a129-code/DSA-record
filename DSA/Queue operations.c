//aim: Total write a program for queue using arrays 

//Algorithm:
BEGIN

IF REAR == MAX_SIZE - 1 THEN

PRINT 'QUEUE OVERFLOW'

RETURN

END IF

IF FRONT == -1 THEN // In Case the element Is First Element

FRONT ← 0

END IF

REAR ← REAR + 1

QUEUE[REAR] ← ITEM
ENDBEGIN

IF FRONT == -1 THEN

PRINT 'QUEUE UNDERFLOW'

RETURN NULL

END IF

ITEM ← QUEUE[FRONT]

IF FRONT == REAR THEN // Dequeue of last element, resetting QUEUE empty scenario

FRONT ← -1

REAR ← -1

ELSE

FRONT ← (FRONT + 1) % MAX_SIZE

END IF

RETURN ITEM

END
Code in c

//program:
#include <stdio.h>
#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1;
int rear = -1;
void enqueue(int item) {
    if (rear == MAX_SIZE - 1) {
        printf("QUEUE OVERFLOW\n");
        return;
    }
    
    if (front == -1) {    
        front = 0;
    }

    rear = rear + 1;
    queue[rear] = item;

    printf("Inserted: %d\n", item);
}
int dequeue() {
    if (front == -1) {
        printf("QUEUE UNDERFLOW\n");
        return -1;
    }

    int item = queue[front];

    // Removing last element → queue becomes empty
    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = front + 1;
    }

    return item;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("Deleted: %d\n", dequeue());
    printf("Deleted: %d\n", dequeue());

    enqueue(40);

    printf("Deleted: %d\n", dequeue());
    printf("Deleted: %d\n", dequeue());  // Underflow expected

    return 0;
}
