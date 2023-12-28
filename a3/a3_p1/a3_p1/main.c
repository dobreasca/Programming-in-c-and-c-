/*
 CH-230-A
 a3_p1.c
 Ana-Maria Dobrescu
 a.dobrescu@jacobs-university.de
 */
#include <stdio.h>

int main()
{
    int n, i;
    float x;
    scanf("%f", &x);
    scanf("%d", &n);
    while(n<=0)//for n to be valid it needs to be a positive integer
    {
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    }
    for(i=0; i<n; i++)//we use a for loop because we know the number of steps
        printf("%.6f\n", x);
    return 0;
}
