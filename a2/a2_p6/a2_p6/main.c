/*
 Dobrescu Ana-Maria
 a.dobrescu@jacobs-university.de
 */
#include <stdio.h>

int main()
{
    double x, y;
    scanf("%lf", &x);
    scanf("%lf", &y);
    double *ptr_one, *ptr_two, *ptr_three;
    //the adresses of the variables have been atributed to the pointers by using the & operator
    ptr_one=&x;
    ptr_two=&x;
    ptr_three=&y;
    printf("adress of the first pointer=%p\n", ptr_one);
    printf("adress of the second pointer=%p\n", ptr_two);
    printf("adress of the third pointer=%p\n", ptr_three);
    return 0;
}
