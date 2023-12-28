/* Ana-Maria Dobrescu, a.dobrescu@jacobs-university.de*/

/*initial program
#include <stdio.h>
int main()
{
     float result;
     int a = 5;
     int b = 13.5;
     result = a / b;
     printf("The result is %d\n", result);
     return 0;
}
*/
/*There will be a compiler error because the variable b is declared as an integer but has been allocated a float number*/

/*fixed program*/

#include <stdio.h>
int main()
{
    float result;
    int a=5;
    int b=13;
    result=a/b;
    printf("The result is %f\n", result);
    return 0;
}
