/*
  CH-230-A
  a5_p10.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */
#include <stdio.h>

int print(int n)
{
    if(n==1)
        return 1;
//when we reach one the function must end
    else
    {
        printf("%d ", n);
        return print(n-1);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", print(n));
    return 0;
}
