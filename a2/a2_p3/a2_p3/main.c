//Ana-Maria Dobrescu, a.dobrescu@jacobs-university.de
#include<stdio.h>

int main()
{
    int weeks, days, hours;
    scanf("%d", &weeks);
    scanf("%d", &days);
    scanf("%d", &hours);
    hours+=days*24+weeks*168;//there are 24 hours in a day and 168 hours in a week
    printf("hours=%d\n", hours);
    return 0;
}
