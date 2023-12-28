/* Ana-Maria Dobrescu, a.dobrescu@jacobs-university.de*/

/*initial program
int main()
{
    double result;
    result=(3+1)/5;
    printf("The value of 4/5 is %lf\n", result);
    return 0;
}
 */
/* The result is 0.00000 because since 4 and 5 are integers the result of 4/5 will also be an integer, 0. So, in order to get a corect result we should transform the numbers in real numbers.*/

/*fixed program*/

#include <stdio.h>
 int main()
 {
     double result;
     result=(3.0+1.0)/5.0;
     printf("The value of 4/5 is %lf\n", result);
     return 0;
 }
