/*
 Dobrescu Ana-Maria
 a.dobrescu@jacobs-university.de
 */

#include <stdio.h>

int main()
{
    int n, i, hours;
    scanf("%d", &n);
    i=1;
    while(n<=0)//while n is negative or 0 we have to read a new number
    {
        printf("n is invalid.\n");
        scanf("%d", &n);
    }
    if(n>0)
    {//when i=1 we treat it as a particular case since it is a single day
        hours=24;
        printf("%d", i);
        printf(" day = %d", hours);
        printf(" hours\n");
        i++;
        while(i<=n)
        {
            hours=i*24;//the number of hours is the number of days multiplied by 24
            printf("%d", i);
            printf(" days = %d", hours);
            printf(" hours\n");
            i++;
        }
    }
    return 0;
}

