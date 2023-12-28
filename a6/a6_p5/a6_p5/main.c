/*
  CH-230-A
  a6_p5.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>

int main()
{
    unsigned char c;
    int n, i, b;
    scanf("%c", &c);
    n=c;
    printf("The decimal representation is: %d\n", n);
    printf("The backwards binary representation is: ");
    for(i=0; (1<<i)<n; i++)
    {
        b=((n>>i)&1);
//we print out the least significant bit after the shifting
        printf("%d", b);
    }
//1<<i represents 2 to the power of i
//we iterate till 1<<i is bigger than n
    printf("\n");
    return 0;
}
