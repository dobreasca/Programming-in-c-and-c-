/*
  CH-230-A
  a4_p6.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

void highest_values(int v[], int n)
{
    int max1, max2, i;
//we initialize the 2 maximums with the first 2 elements
    max1=v[0];
    max2=v[1];
    for(i=1; i<n; i++)
        if(max1<v[i])
        {
//if we find a larger value than max1 we update max1
//and max2 will receive max1's initial value
            max2=max1;
            max1=v[i];
        }
        else if(max1>v[i])
//if the value is smaller than max1 there is still a chance it will be
//larger than max2
            if(max2<v[i])
                max2=v[i];
//if the value is larger than max2 we update max2
    printf("the highest values are: %d, %d\n", max1, max2);
            
}
int main()
{
    int i, *v, n;
    scanf("%d", &n);
    v=(int*) malloc(n * sizeof(int));
//we allocated memory for the array
    for(i=0; i<n; i++)
        scanf("%d", &v[i]);
    highest_values(v, n);
    free(v);
    return 0;
}
