/*
  CH-230-A
  a7_p7.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#ifndef stack_h
#define stack_h

struct stack
{
    unsigned int count;
    int array[12];
};

int isEmpty(struct stack* lifo);
void push(struct stack* lifo, int n);
void pop(struct stack* lifo);
void empty(struct stack* lifo);

#endif /* stack_h */
