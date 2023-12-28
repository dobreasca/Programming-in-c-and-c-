/*
  CH-230-A
  a4_p9.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
int prodminmax(int arr[], int n)
{
    int mini, maxi, i;
    mini=arr[0];
    maxi=arr[0];
//we initialize both the maximum and the minimum with the first element
    for(i=0; i<n; i++)
    {
        if(arr[i]>maxi)
            maxi=arr[i];
//if the element is greater than the maximum we update the maximum
        if(arr[i]<mini)
            mini=arr[i];
//if the element is lower than the minimum we update the minimum
    }
    return mini*maxi;
}
int main()
{
    int *a, n, i, prod;
    scanf("%d", &n);
    a=(int*) malloc(n * sizeof(int));
//we allocated memory for the array
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    prod=prodminmax(a, n);
    printf("%d\n", prod);
    free(a);
    return 0;
}
