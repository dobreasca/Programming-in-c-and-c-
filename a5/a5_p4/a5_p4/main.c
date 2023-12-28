/*
  CH-230-A
  a5_p4.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

void divby5(float *arr, int size)
{
    int i;
    const float div=5.0;
    //we set div as a constant
    for(i=0; i<size; i++)
        arr[i]/=div;
}
int main()
{
    int i, n;
    float *a;
    scanf("%d", &n);
    a=(float*) malloc(sizeof(float)*n);
    for(i=0; i<n; i++)
        scanf("%f", &a[i]);
    printf("Before:\n");
    for(i=0; i<n; i++)
        printf("%.3f ", a[i]);
    //the decimal precision is set to 3
    divby5(a, n);
    printf("\nAfter:\n");
    for(i=0; i<n; i++)
        printf("%.3f ", a[i]);
    printf("\n");
    free(a);
    return 0;
}
