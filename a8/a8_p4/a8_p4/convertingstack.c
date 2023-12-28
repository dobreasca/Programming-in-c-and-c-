/*
  CH-230-A
  a8_p4.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include "stack.h"

int main()
{
    unsigned int n, b;
    struct stack lifo;
    scanf("%d", &n);
    lifo.count=0;//we initialise the counter
    for(int i=0; (1<<i)<=n; i++)
    {
        b=((n>>i)&1);
        push(&lifo, b);
//we add the least significant bit after the shifting to the stack
    }
//1<<i represents 2 to the power of i
//we iterate till 1<<i is bigger than n
    printf("The binary representation of %d is ", n);
    empty(&lifo);
    return 0;
}

