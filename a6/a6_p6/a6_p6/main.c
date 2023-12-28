/*
  CH-230-A
  a6_p6.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
int main()
{
    unsigned char a;
    int i, n, b;
    scanf("%c", &a);
    n=a;
    printf("The decimal representation is: %d\n", n);
    printf("The binary representation is: ");
//since char has 8 bits we can iterate from 7 to 0,
//which is from 2ˆ7 till 1
    for(i=7; i>=0; i--)
    {
        b=((n>>i)&1);
//we print out the least significant bit after the shifting
        printf("%d", b);
    }
    printf("\n");
    return 0;
}
