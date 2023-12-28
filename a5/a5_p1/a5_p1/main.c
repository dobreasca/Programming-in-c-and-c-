/*
  CH-230-A
  a5_p1.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>

void shape(int n, char ch)
{
    int i, ci;
//the first line of the triangle will have n characters and
//for the next lines we will lower the number of characters untill we reach 0
    for(i=n; i>=1; i--)
    {
        ci=i;
//we create  copy of i in order to not damage our for loop
        while(ci)
        {
            printf("%c", ch);
            ci--;
        }
        printf("\n");
    }
}
int main()
{
    int n;
    char ch;
    scanf("%d\n", &n);
    scanf("%c", &ch);
    shape(n, ch);
    return 0;
}
