/*
 Dobrescu Ana-Maria
 a.dobrescu@jacobs-university.de
 */
#include <stdio.h>

int main()
{
    float a, b, h;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);
    float square, triangle, rectangle, trapezoid;
    //the areas have been calculated using the formulas known from math :)
    square=a*a;
    rectangle=a*b;
    triangle=(a*h)/2;
    trapezoid=(a+b)*h/2;
    printf("square area=%.6f\n", square);
    printf("rectangle area=%.6f\n", rectangle);
    printf("triangle area=%.6f\n", triangle);
    printf("trapezoid area=%.6f\n", trapezoid);
    return 0;
}
