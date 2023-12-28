/*
 Dobrescu Ana-Maria
 a.dobrescu@jacobs-university.de
 */

/* initial program
#include <stdio.h>

int main()
{
    int i=8;
    while(i>=4)
        printf("i is %d\n", i);
        i--;
    printf("That's it.\n");
    return 0;
}
 The while loop is infinite because the value of "i" never changes since accolades are missing .
 */

/*fixed program*/
#include <stdio.h>

int main()
{
    int i=8;
    while(i>=4)
    {
        printf("i is %d\n", i);
        i--;
    }
    printf("That's it.\n");
    return 0;
}
