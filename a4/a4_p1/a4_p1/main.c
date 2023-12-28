/*
  CH-230-A
  a4_p1.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <math.h>
//we have to incude the math.h library in order to access M_PI
int main()
{
    float x, upper_limit, step, i;
    scanf("%f", &x);
    printf("%f ", x);
    printf("%f ", x*x*M_PI);
    //prints the area of the circle
    printf("%f\n", 2*M_PI*x);
    //prints the perimeter of the circle
    scanf("%f", &upper_limit);
    scanf("%f", &step);
    //x will be considered the lower limit
    for(i=x+step; i<=upper_limit; i+=step)
    {
        printf("%f ", i);
        printf("%f ", i*i*M_PI);
        printf("%f\n", 2*M_PI*i);
    }
    return 0;
}
