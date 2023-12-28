/*
  CH-230-A
  a6_p3.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>

#define MAX(A, B, C) (A>B && A>C) ? A : (B>C) ? B : C
#define MIN(A, B, C) (A<B && A<C) ? A : (B<C) ? B: C
#define MID_RANGE(MA, MI, R) R=(MA+MI)/2.0
//we calculate the mid-range with the given formula

/*
 MA=maximum
 MI=minimum
 R=range
 */

int main()
{
    int a, b, c, mini, maxi;
    float r;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    mini=MIN(a, b, c);
    maxi=MAX(a, b, c);
    MID_RANGE(maxi, mini, r);
    
    printf("The mid-range is: %.6f\n", r);
    return 0;
}
