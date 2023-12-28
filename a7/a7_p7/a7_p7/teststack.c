/*
  CH-230-A
  a7_p7.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include "stack.h"

int main()
{
    char c;
    int n;
    struct stack lifo;
    lifo.count=0;//we initialise the counter
    while(1)
    {
        scanf("%c", &c);
        if(c=='s')
        {
            scanf("%d", &n);
            getchar();
            push(&lifo, n);
        }
        else if(c=='p')
            pop(&lifo);
        else if(c=='e')
            empty(&lifo);
        else if(c=='q')
        {
            printf("Quit\n");
            break;
        }
    }
    return 0;
}
