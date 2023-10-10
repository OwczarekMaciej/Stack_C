#include <stdio.h>
#include "Stack.h"

int main()
{
    int elements_in_stack = 10;

    Stack new_Stack;
	init(&new_Stack);
	

    for (size_t i = 0; i < elements_in_stack; i++)
    {
        push(&new_Stack, i);
    }
    
    printf("Is stack empty? - %s\n", isEmpty(&new_Stack)?"true":"false");

    for (size_t i = 0; i < elements_in_stack; i++)
    {
        int poped_val = pop(&new_Stack);
        printf("Pop successful, popped value - %d\n", poped_val);
    }
    
    printf("Is stack empty? - %s\n", isEmpty(&new_Stack)?"true":"false");

    destroy(&new_Stack);

    return 0;
}