/*
  CH-230-A
  a3_p5.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */
#include <stdio.h>

int main()
{
    char c;
    int n, i;
    double t[101], sum, f, mean;
    scanf("%c", &c);
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%lf", &t[i]);
//we are storing the temperatures in an array
    switch(c)
    {
        case 's':
            sum=0;
            //the sum must be initialized with zero in order to obtain
            //the correct result
            for(i=0; i<n; i++)
                sum+=t[i];
            printf("%lf", sum);
            break;
        case 'p':
            for(i=0; i<n; i++)
                printf("%lf ", t[i]);
            break;
        case 't':
            for(i=0; i<n; i++)
            {
                f=9*t[i]/5+32;
                //the conversion to Fahrenheit is calculated with
                //the given formula
                printf("%lf ", f);
            }
            break;
        default:
            sum=0;
            for(i=0; i<n; i++)
                sum+=t[i];
            mean=sum/n;
            //the mean is calculated with the known formula
            printf("%lf ", mean);
    }
    return 0;
}
