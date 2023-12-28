/*
  CH-230-A
  a4_p10.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <math.h>

void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb)
{
    *prod=a*b;
    *div=a/b;
    *pwr=pow(a, b);
//we use the pow function from math.h to raise a at the power of b
    *invb=1/b;
}
int main()
{
    float a, b, prod, div, pwr, invb;
    scanf("%f", &a);
    scanf("%f", &b);
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);
    printf("product=%f\n", prod);
    printf("divsion=%f\n", div);
    printf("a raised to the power of b=%f\n", pwr);
    printf("inverse of b=%f\n", invb);
    return 0;
}
