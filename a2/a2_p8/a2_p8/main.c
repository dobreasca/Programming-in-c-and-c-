/*
 Dobrescu Ana-Maria
 a.dobrescu@jacobs-university.de
 */
#include <stdio.h>

int main()
{
    int a, ok1=0, ok2=0;
    //ok1 and ok2 are flag variables that determine whether the condition is satisfied or not
    scanf("%d", &a);
    if(a%2==0)
        ok1=1;
    if(a%7==0)
        ok2=1;
    if(ok1==1 && ok1==ok2)//if both variables are 1, the number is divisible with both 2 and 7
        printf("The number is divisible by 2 and 7\n");
    else //if the variables are 0 or different, the number isn't divisible with both 2 and 7
        printf("The number is NOT divisible by 2 and 7\n");
    return 0;
}
