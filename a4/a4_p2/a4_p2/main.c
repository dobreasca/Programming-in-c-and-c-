/*
  CH-230-A
  a4_p2.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
int main()
{
    unsigned long n, i;
    char s[51];
    fgets(s, 51, stdin);
    n=strlen(s);
    s[n-1]='\0';
    n--;
    for(i=0; i<n; i++)
    {
        if(i % 2 == 0)
            printf("%c\n", s[i]);
        //the characters on even positions will be printed without the space
        else
            printf(" %c\n", s[i]);
        //the characters on odd positions will be printed without the space
    }
    return 0;
}
