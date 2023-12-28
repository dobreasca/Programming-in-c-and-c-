/*
  CH-230-A
  a5_p5.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>

double scalar_product(int n, double v[], double w[])
{
    int i;
    double prod=0;;
    for(i=0; i<n; i++)
        prod+=w[i]*v[i];
//the scalar product is calculated with the given formula
    return prod;
}

void smallest(int n, double v[], int *poz, double *minimum)
{
    *minimum=v[0];
    *poz=0;
    int i;
    for(i=0; i<n; i++)
        if(v[i]<(*minimum))
        {
            *poz=i;
            *minimum=v[i];
        }
//if we find an element smaller then the minimum
//we update the minimum and its position
}

void largest(int n, double v[], int *poz, double *maximum)
{
    *maximum=v[0];
    *poz=0;
    int i;
    for(i=1; i<n; i++)
        if(v[i]>(*maximum))
        {
            *poz=i;
            *maximum=v[i];
        }
//if we find an element larger then the maximum
//we update the maximum and its position
}

int main()
{
    int n, i, poz;
    double v[101], w[101], prod, maximum, minimum;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%lf", &v[i]);
    for(i=0; i<n; i++)
        scanf("%lf", &w[i]);
    prod=scalar_product(n, v, w);
//after the function prod will conain the scalar product of the 2 vectors
    printf("Scalar product=%lf\n", prod);
    
    smallest(n, v, &poz, &minimum);
    printf("The smallest = %lf\n", minimum);
    printf("Position of smallest = %d\n", poz);
    
    largest(n, v, &poz, &maximum);
    printf("The largest = %lf\n", maximum);
    printf("Position of largest = %d\n", poz);
    
    smallest(n, w, &poz, &minimum);
    printf("The smallest = %lf\n", minimum);
    printf("Position of smallest = %d\n", poz);
    
    largest(n, w, &poz, &maximum);
    printf("The largest = %lf\n", maximum);
    printf("Position of largest = %d\n", poz);
    
    return 0;
}
