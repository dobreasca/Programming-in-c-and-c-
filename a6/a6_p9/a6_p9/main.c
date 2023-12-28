/*
  CH-230-A
  a6_p9.c
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
int n, ok;
//n represents the number of elements in the list

struct list* insert_at_given_pos(struct list* mylist, int pos, int a)
{
    if(pos==0)
    {
        mylist=insert_at_the_beginning(mylist, a);
        return mylist;
    }
    else if(pos>=(n+1) || pos<0)
    {
        ok=0;
        return mylist;
    }
    else
    {
        struct list *p, *cursor;
        int i;
        i=0;
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
//we iterate through the string till we find the given position
        while(i<pos-1)
        {
            cursor=cursor->next;
            i++;
        }
//when i is pos-1 we are at the element after
//which we have to insert the given value
        p->next=cursor->next;
        cursor->next=p;
        return mylist;
    }
}

struct list* reverse_list(struct list* mylist)
{
    struct list* cursor, *p, *nn;
    p=NULL;//p is the previous node
    nn=NULL;//nn is the next node
    cursor=mylist;
    while(cursor!=NULL)
    {
        nn=cursor->next;//stores the next node
        cursor->next=p;//reverses the currents node pointer
        p=cursor;//moves the pointer to the next position
        cursor=nn;
    }
    mylist=p;
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
    int nr, pos;
    struct list *mylist;
    mylist=NULL;
    scanf("%c", &c);
    while(c!='q')
    {
        if(c=='a')
        {
            scanf("%d", &nr);
            mylist=insert_at_the_end(mylist, nr);
            n++;
        }
        else if(c=='b')
        {
            scanf("%d", &nr);
            mylist=insert_at_the_beginning(mylist, nr);
            n++;
        }
        else if(c=='r')
        {
            mylist=remove_first(mylist);
            n--;
        }
        else if(c=='i')
        {
            scanf("%d", &pos);
            scanf("%d", &nr);
            ok=1;
            mylist=insert_at_given_pos(mylist, pos, nr);
            if(ok==0)
                printf("Invalid position!\n");
            else
                n++;
        }
        else if(c=='R')
            mylist=reverse_list(mylist);
        else if(c=='p')
            print_list(mylist);
        else if(c=='q')
            free_list(mylist);
        scanf("%c", &c);
    }
    return 0;
}
