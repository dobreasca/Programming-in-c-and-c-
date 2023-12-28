/*
  CH-230-A
  a5_p6.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>

int main()
{
    int n, i, ok, cnt;
    float v[101], *ptr;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%f", &v[i]);
    ok=1;
//ok will be 0 when we reach the first negative element
    ptr=v;
    cnt=0;
    while(ok!=0)
        if(*ptr<0)
            ok=0;
        else
        {
            ptr++;
            cnt=cnt+1;
//if the element is positive we update our counter
//and move to the next element of the array
        }
    printf("Before the first negative value: %d elements\n", cnt);
    return 0;
}
