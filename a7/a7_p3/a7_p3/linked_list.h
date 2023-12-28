/*
  CH-230-A
  a7_p1.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#ifndef linked_list_h
#define linked_list_h

struct list
{
    int info;
    struct list *next;
};

struct list* insert_at_the_end(struct list *mylist, int a);
struct list* insert_at_the_beginning(struct list* mylist, int a);
struct list* remove_first(struct list* mylist);
void print_list(struct list* mylist);
void free_list(struct list* mylist);


#endif /* linked_list_h */
