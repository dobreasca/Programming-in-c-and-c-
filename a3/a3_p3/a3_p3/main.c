/*
 CH-230-A
 a3_p3.c
 Ana-Maria Dobrescu
 a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
float convert(int cm)
{
    return cm/100000.0;
    //in order to convert cm to km we need to divide the cm value to 100000
    //we divide the value to 100000.0 to obtain a float result
}
int main()
{
    float km;
    int cm;
    scanf("%d", &cm);
    km=convert(cm);
    printf("Result of conversion: %f\n", km);
    return 0;
}
