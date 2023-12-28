/*
  CH-230-A
  a7_p7.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include "stack.h"

int isEmpty(struct stack* lifo)
{
    if((*lifo).count!=0)
        return 0;
    return 1;
}

void push(struct stack* lifo, int n)
{
    printf("Pushing ");
    if((*lifo).count==12)
//we have to check if the stack is full
        printf("Stack Overflow\n");
    else
    {
        printf("%d\n", n);
        (*lifo).array[(*lifo).count]=n;
        (*lifo).count++;
    }
}

void pop(struct stack* lifo)
{
    printf("Popping ");
    if(isEmpty(lifo))
        printf("Stack Underflow\n");
    else
    {
        printf("%d\n", (*lifo).array[(*lifo).count-1]);
        (*lifo).count--;
//we remove the popped element since we don't need it anymore
    }
}

void empty(struct stack* lifo)
{
    int i;
    printf("Emptying Stack ");
    for(i=(*lifo).count-1; i>=0; i--)
        printf("%d ", (*lifo).array[i]);
    printf("\n");
    (*lifo).count=0;
//we updated the number of elements
}
