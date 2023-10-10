#include "Stack.h"
#include <stdlib.h>
#include <stdio.h>

#define SIZE 1

void init(Stack *s)
{
    s->size = SIZE;
    s->top_element = 0;
    s->array = (int *)malloc(s->size * sizeof(int));
    alloc_check(s);
    printf("Stack initialized\n");
}

void destroy(Stack *s)
{
    s->top_element = 0;
    s->size = 0;
    free(s->array);
    printf("Stack destroyed\n");
}

void push(Stack *s, int element)
{
    if (s->top_element >= s->size)
    {
        s->size *= 2;
        s->array = (int *)realloc(s->array, sizeof(int) * s->size);
        printf("Stack size increased to %d\n", s->size);
        alloc_check(s);
    }
    s->array[s->top_element++] = element;
    printf("Pushed %d to stack\n", element);
}

bool isEmpty(const Stack *s)
{
    return (s->top_element == 0);
}

int pop(Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty\n");
        abort();
    }
    s->top_element--;
    return s->array[s->top_element];
}

void alloc_check(Stack *s)
{
    if(s->array == NULL)
    {
        printf("Wrong memory alloc\n");
        abort();
    }
}