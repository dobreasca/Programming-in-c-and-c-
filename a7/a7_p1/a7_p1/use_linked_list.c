/*
  CH-230-A
  a7_p1.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include "linked_list.h"

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
