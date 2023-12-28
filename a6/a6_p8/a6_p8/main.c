/*
  CH-230-A
  a6_p8.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

struct list
{
    int info;
    struct list *next;
};

struct list* insert_at_the_end(struct list *mylist, int a)
{
    struct list *p, *cursor;
    cursor=mylist;
    p=(struct list *) malloc(sizeof(struct list));
    if(p==NULL)
    {
        printf("Error");
        return mylist;
    }
//we check the the memory attribution was successful
    p->info=a;
    p->next=NULL;
    if(mylist==NULL)
//if the list is empty it means that p will the first element
        return p;
//otherwise, we have to iterate the list till we reach the
//last element and insert p on the last position
    while(cursor->next!=NULL)
        cursor=cursor->next;
    cursor->next=p;
    return mylist;
}

struct list* insert_at_the_beginning(struct list* mylist, int a)
{
    struct list *p;
    p=(struct list *) malloc(sizeof(struct list));
    if(p==NULL)
    {
        printf("Error");
        return mylist;
    }
    p->info=a;
    p->next=mylist;
    return p;
}

struct list* remove_first(struct list* mylist)
{
    struct list *p;
    p=(struct list *) malloc(sizeof(struct list));
    p=mylist;
    if(mylist!=NULL)
    {
        mylist=mylist->next;
        p->next=NULL;
    }
//by doing this we remove p from the list
    return mylist;
}

void print_list(struct list* mylist)
{
    struct list* p;
    for(p=mylist; p; p=p->next)
        printf("%d ", p->info);
    printf("\n");
}

void free_list(struct list* mylist)
{
    struct list *p;
    while(mylist!=NULL)
    {
        p=mylist->next;
        free(mylist);
        mylist=p;
    }
}
int main()
{
    char c;
    int nr;
    struct list *mylist;
    mylist=NULL;
    scanf("%c", &c);
    while(c!='q')
    {
        if(c=='a')
        {
            scanf("%d", &nr);
            mylist=insert_at_the_end(mylist, nr);
        }
        else if(c=='b')
        {
            scanf("%d", &nr);
            mylist=insert_at_the_beginning(mylist, nr);
        }
        else if(c=='r')
            mylist=remove_first(mylist);
        else if(c=='p')
            print_list(mylist);
        else if(c=='q')
            free_list(mylist);
        scanf("%c", &c);
    }
    return 0;
}
