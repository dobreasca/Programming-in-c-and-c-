/* Ana-Maria Dobrescu, a.dobrescu@jacobs-university.de*/

/*initial program
int main()
{
    int result;
    result=(2+7)*9/3;
    printf("The result is %d\n");
    return 0;
}*/

/*The program prints a random number because the variable result is missing from the parameters*/
/*fixed program*/

#include <stdio.h>

int main()
{
    int result;
    result=(2+7)*9/3;
    printf("The result is %d\n", result);
    return 0;
}
