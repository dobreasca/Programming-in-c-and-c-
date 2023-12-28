/*
  CH-230-A
  a3_p7.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>

void print_form(int n, int m, char c)
{
    int i, j, cnt;
    cnt=m;//will determine the number of characters on each line
    for(i=1; i<=n; i++)//refers to the lines
    {
        if(cnt<=n+m-1)//n+m-1 is the highest bound
            for(j=1; j<=cnt; j++)
                printf("%c", c);
        cnt++;
        printf("\n");
    }
}
int main()
{
    int n, m;
    char c;
    scanf("%d", &n);
    scanf("%d\n", &m);
    scanf("%c", &c);
    print_form(n, m, c);
    return 0;
}
