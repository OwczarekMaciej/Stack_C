#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

typedef struct 
{
    int size;
    int top_element;
    int *array;
}Stack;

void init(Stack* s);
void destroy(Stack* s);
void push(Stack* s, int element);
int pop(Stack* s);
bool isEmpty(const Stack* s);
void alloc_check(Stack *s);

#endif