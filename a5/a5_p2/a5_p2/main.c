/*
  CH-230-A
  a5_p2.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>

void divby5(float arr[], int size)
{
    int i;
    const float div=5.0;
    //we set div as a constant
    for(i=0; i<size; i++)
        arr[i]/=div;
}
int main()
{
    int i;
    float a[101];
    //we initialize our array
    a[0]=5.5;
    a[1]=6.5;
    a[2]=7.75;
    a[3]=8.0;
    a[4]=9.6;
    a[5]=10.36;
    printf("Before:\n");
    for(i=0; i<6; i++)
        printf("%.3f ", a[i]);
    //the decimal precision is set to 3
    divby5(a, 6);
    printf("\nAfter:\n");
    for(i=0; i<6; i++)
        printf("%.3f ", a[i]);
    printf("\n");
    return 0;
}
