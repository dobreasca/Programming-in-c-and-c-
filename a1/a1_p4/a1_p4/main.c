/* Ana-Maria Dobrescu, a.dobrescu@jacobs-university.de*/
#include <stdio.h>

int main()
{
    int x, y, sum, difference, product, r;
    float division;
    x=17;
    y=4;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    sum=x+y;
    printf("sum=%d\n", sum);
    product=x*y;
    printf("product=%d\n", product);
    difference=x-y;
    printf("difference=%d\n", difference);
    float cy;
    cy=y;
    division=x/cy;
    printf("division=%f\n", division);
    r=x%y;
    printf("remainder of division=%d\n", r);
    return 0;
}
