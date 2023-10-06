#include "Stack.h"
#include <stdlib.h>
#include <stdio.h>

#define SIZE 4

void init(Stack *s)
{
    s->size = SIZE;
    s->top_element = 0;
    s->array = (int *)malloc(s->size * sizeof(int));
}

void destroy(Stack *s)
{
    s->top_element = -1;
    s->size = 0;
    free(s->array);
}

void push(Stack *s, int element)
{
    if (s->top_element >= s->size)
    {
        s->size *= 2;
        s->array = (int *)realloc(s->array, sizeof(int) * s->size);
        printf("Stack size increased to %d\n", s->size);
    }
    s->array[s->top_element++] = element;
    printf("Pushed %d to stack\n", element);
}

bool isEmpty(const Stack *s)
{
    if (s->top_element == -1)
    {
        printf("Stack has not been initalized\n");
        abort();
    }
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