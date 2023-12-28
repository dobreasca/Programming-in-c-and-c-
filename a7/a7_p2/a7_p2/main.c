/*
  CH-230-A
  a7_p2.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

struct list
{
    char info;
    struct list *next;
    struct list *prev;
};

struct list* insert_at_b(struct list* mylist, char a)
{
    struct list *p;
    p=(struct list *) malloc(sizeof(struct list));
    if(p==NULL)
    {
        printf("Error");
        return mylist;
    }
//we check that the memory attribution was successful
    p->info=a;
    p->next=mylist;
    p->prev=NULL;
    if(mylist!=NULL)
        mylist->prev=p;
//mylist->prev was NULL so we have to update it to the inserted element
    mylist=p;
//now, the first element will be p
    return mylist;
}

int ok=0;
struct list* delete_element(struct list* mylist, char a)
{
    struct list *cursor, *p;
    if(mylist==NULL)
        return mylist;
    cursor=mylist;
    while(cursor!=NULL)
    {
        if(cursor->info==a)
        {
            ok=1;
            p=cursor;
            if(p==mylist)
            {
//we check if the match is at the beginning of the list
                if(cursor->next!=NULL)
                {
                    cursor=cursor->next;
                    mylist=mylist->next;
                    mylist->prev=NULL;
                    free(p);
//we deallocated the memory occupied by p
                }
                else
                {
                    mylist=NULL;
                    free(p);
                    return mylist;
//this means that the match was the only character in the list
//so the list will be null
                }
            }
            else if(cursor->next!=NULL)
            {
//we delete the match's connections to the previous charcter
//and the next character
                cursor->prev->next=cursor->next;
                cursor->next->prev=cursor->prev;
                cursor=cursor->next;
                free(p);
            }
            else
//the match is the last character of the list
            {
                cursor->prev->next=NULL;
                cursor=cursor->next;
                free(p);
            }
        }
        else
            cursor=cursor->next;
    }
    return mylist;
}

void print_list(struct list* mylist)
{
    struct list* p;
    for(p=mylist; p; p=p->next)
        printf("%c ", p->info);
    printf("\n");
}

void print_reverse(struct list *mylist)
{
    struct list* p;
//we print the list in reverse by going through the list
//till the end and then going back to print each element
    p=mylist;
    while(p->next!=NULL)
        p=p->next;
    while(p!=NULL)
    {
        printf("%c ", p->info);
        p=p->prev;
    }
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
    struct list *mylist;
    int n;
    char c;
    scanf("%d", &n);
    mylist=NULL;
    while(n)
    {
        if(n==1)
        {
            getchar();
            scanf("%c", &c);
            mylist=insert_at_b(mylist, c);
        }
        else if(n==2)
        {
            getchar();
            scanf("%c", &c);
            ok=0;
            mylist=delete_element(mylist, c);
            if(ok==0)
                printf("The element is not in the list!\n");
        }
        else if(n==3)
            print_list(mylist);
        else if(n==4)
            print_reverse(mylist);
        else if(n==5)
        {
            free_list(mylist);
            break;
        }
        scanf("%d", &n);
    }
    return 0;
}
