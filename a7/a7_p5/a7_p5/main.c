/*
  CH-230-A
  a7_p5.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

// both ascending and descending do the comparison by using
//the difference between consecutive elements
int ascending(const void *x, const void *y)
{
    return (*(int*)x - *(int*)y);
}

int descending(const void *x, const void *y)
{
    return (*(int*)y - *(int*)x);
}

int main()
{
    int n, *v, i;
    char c;
    scanf("%d", &n);
    v=(int *)malloc(sizeof(int)*n);
    if(v==NULL)
        printf("Error");
//we check that the memory has been attributed correctly
    for(i=0; i<n; i++)
        scanf("%d", &v[i]);
    getchar();
    while(1)
    {
        scanf("%c", &c);
        getchar();
        if(c=='a')
        {
            qsort(v, n, sizeof(int), ascending);
            for(i=0; i<n; i++)
                printf("%d ", v[i]);
            printf("\n");
        }
        else if(c=='d')
        {
            qsort(v, n, sizeof(int), descending);
            for(i=0; i<n; i++)
                printf("%d ", v[i]);
            printf("\n");
        }
        else if(c=='e')
        {
            free(v);
            break;
//we free the memory occupied by v and exit the while loop
        }
    }
    return 0;
}
