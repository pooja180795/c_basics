#ifndef STACK
#define STACK  

typedef struct stack{
    int data[10];
    int top;
}s;

void pushStack(s* stack, int data);
int popStack(s* stack);       // returns popped value
int peekStack(s* stack);      // returns top value
int isEmpty(s* stack);        // returns 1 if empty, 0 if not
void display(s* stack);       // print all elements

#endif
 