/*
  CH-230-A
  a6_p1.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>

#define SWAP(X, Y, T) { T AUX; AUX=X; X=Y; Y=AUX; }

//T is the type of the arguments
//we use an auxiliary variable aux to hold the value
//of the first variable and then pass it to the second variable

int main()
{
    int a, b;
    double x, y;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%lf", &x);
    scanf("%lf", &y);
    
    SWAP(a, b, int);
    SWAP(x, y, double);
    
    printf("After swapping:\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%.6lf\n", x);
    printf("%.6lf\n", y);
    
    return 0;
}
