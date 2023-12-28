/*
  CH-230-A
  a3_p6.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */
#include <stdio.h>
float to_pound(int kg, int g)
{
    float mass_kg, mass_pounds;
    mass_kg=kg+g/1000.0;
    //we are converting the grams to kg in order to have an easier
    //conversion to pounds
    mass_pounds=mass_kg*2.2;
    //the conversion is done with the given formula
    return mass_pounds;
}
int main()
{
    float result;
    int kg, g;
    scanf("%d", &kg);
    scanf("%d", &g);
    result=to_pound(kg, g);
    printf("Result of conversion: %f\n", result);
    return 0;
}
