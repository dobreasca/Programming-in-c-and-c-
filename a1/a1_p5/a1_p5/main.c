/*Ana-Maria Dobrescu, a.dobrescu@jacobs-university.de*/

#include <stdio.h>

int main()
{
    int x=2138;
    printf("x=%9d\n", x);//%9 sets over how many spaces x is printed
    float y=-52.358925;
    printf("y=%11.5f\n", y);//%11.5 sets both the space precision and the decimal precision
    char z='G';
    printf("z=%c\n", z);
    double u=61.295339687;
    printf("u=%.7lf\n", u);//%.7 sets the decimal precision
    return 0;
}
