/*
  CH-230-A
  a6_p4.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>

#define INTERMEDIATE 1

int main()
{
    int n, v1[101], v2[101], i, prod[101];
    scanf("%d", &n);
    for(i=0; i<n;  i++)
        scanf("%d", &v1[i]);
    for(i=0; i<n;  i++)
        scanf("%d", &v2[i]);
    int sum=0;
    for(i=0; i<n; i++)
    {
        prod[i]=v1[i]*v2[i];
//we store the intermediate results in an array
//in case we have to print them
        sum+=prod[i];
    }
    #if defined (INTERMEDIATE)
//if intermediate is defined we must print the intermediate results
        printf("The intermediate product values are:\n");
        for(i=0; i<n; i++)
            printf("%d\n", prod[i]);
    #endif
    printf("The scalar product is: %d\n", sum);
    return 0;
}
