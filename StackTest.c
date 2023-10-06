#include <stdio.h>
#include "Stack.h"

int main()
{
    int elements = 10;
    Stack new_Stack;
	init(&new_Stack);
	

    for (size_t i = 0; i < elements; i++)
    {
        push(&new_Stack, i);
    }
    
    printf("Is my stack empty? - %s\n", isEmpty(&new_Stack)?"true":"false");

    for (size_t i = 0; i < elements; i++)
    {
        int poped_val;
        poped_val = pop(&new_Stack);
        printf("Pop successful, popped value - %d\n", poped_val);
    }
    
    printf("Is my stack empty? - %s\n", isEmpty(&new_Stack)?"true":"false");

    destroy(&new_Stack);

    return 0;
}