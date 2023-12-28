/*
  CH-230-A
  a3_p10.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>

float product(float a, float b)
{
    return a*b;
}

void productbyref(float a, float b, float *p)
{
    *p=a*b;
    //p will be treated like a pointer so we have the use the * operator
    //to access its value
}

void modifybyref(float *a, float *b)
{
    *a=*a+3;
    *b=*b+11;
    //a and b will be treated like pointers so  we have to use the * operator
    //to access their values
}
int main()
{
    float a, b, prod, p;
    scanf("%f", &a);
    scanf("%f", &b);
    prod=product(a, b);
    productbyref(a, b, &p);
    modifybyref(&a, &b);
    printf("%f\n", prod);
    printf("%f\n", p);
    printf("%f\n", a);
    printf("%f\n", b);
    return 0;
}
