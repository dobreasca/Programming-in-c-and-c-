/*
 Dobrescu Ana-Maria
 a.dobrescu@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", a);
    int *ptr_a;
    ptr_a=&a;//the & operator returns the adress of a
    printf("adress of a= %p\n", ptr_a);
    *ptr_a=*ptr_a+5;//the * operator allows us to access the content of the pointed object
    printf("modified value of a=%d\n", *ptr_a);
    printf("adress of a= %p\n", ptr_a);
    return 0;
}
