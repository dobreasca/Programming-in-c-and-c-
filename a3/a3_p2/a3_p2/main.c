/*
 CH-230-A
 a3_p2.c
 Ana-Maria Dobrescu
 a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
int main()
{
    char ch;
    int n, i;
    scanf("%c", &ch);
    scanf("%d", &n);
    printf("%c, ", ch);
    for(i=1; i<=n-1; i++)
        printf("%c-%d, ", ch, i);
    printf("%c-%d\n", ch, i);
    //the first and the last cases need to be treated separately
    //since they have to be printed differently
    return 0;
}
