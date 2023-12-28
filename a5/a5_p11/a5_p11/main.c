/*
  CH-230-A
  a5_p11.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>

int prime(int x, int d)
{
    if(x==0 || x==1)
        return 0;
    if(x==2)
        return 1;
// since 2 is the only even prime number it will be treated separately
    if(x%2==0)
        return 0;
//if x is an even number it means that it is not prime
    if(d>=x)
        return 1;
//if d is greater than x it means that we haven't found a divisor for x
    if(x%d==0)
        return 0;
    if(x%d!=0)
        return prime(x, d+2);
    return 1;
}
int main()
{
    int x, ok_prime;
    scanf("%d", &x);
    ok_prime=prime(x, 3);
    if(ok_prime==1)
        printf("%d is prime\n", x);
    else
        printf("%d is not prime\n", x);
    return 0;
}
