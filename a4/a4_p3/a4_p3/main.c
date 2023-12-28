/*
  CH-230-A
  a4_p3.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */
#include <stdio.h>
#include <math.h>

float geometric_mean(float v[], int nr)
{
    float p=1, mean;
    for(int i=0; i<nr; i++)
        p*=v[i];
    mean=pow(p, 1/(float)nr);
    //we use pow to calculate n root of the product
    return mean;
}

float highest_number(float v[], int nr)
{
    float maxi;
    maxi=v[0];
    //we initializer the maximum with the first element of the array
    for(int i=1; i<nr; i++)
        if(v[i]>maxi)
        // if we find a higher element we update our maximum
            maxi=v[i];
    return maxi;
}

float lowest_number(float v[], int nr)
{
    float mini;
    mini=v[0];
    //we initializer the minimum with the first element of the array
    for(int i=1; i<nr; i++)
        if(mini>v[i])
            // if we find a lower element we update our maximum
            mini=v[i];
    return mini;
}

float sum(float v[], int nr)
{
    int s=0;
    for(int i=0; i<nr; i++)
        s+=v[i];
    return s;
}
int main()
{
    float v[16], x, g_mean, maximum, minimum, sm;
    int nr;
    char c;
    nr=0;
    scanf("%f", &x);
    while(x>=0)
    {
        v[nr++]=x;
        scanf("%f", &x);
    }
    scanf("\n%c", &c);
    switch(c)
    {
        case 'm':
            g_mean=geometric_mean(v, nr);
            printf("%f\n", g_mean);
            break;
        case 'h':
            maximum=highest_number(v, nr);
            printf("%f\n", maximum);
            break;
        case 'l':
            minimum=lowest_number(v, nr);
            printf("%f\n", minimum);
            break;
        case 's':
            sm=sum(v, nr);
            printf("%f\n", sm);
            break;
    }
    return 0;
}
