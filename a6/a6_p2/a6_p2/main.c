/*
  CH-230-A
  a6_p2.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>

#define LEASTSIGNIFICANTBIT(B, N) B=N&1
//the least significant bit is the bit furthest to the right

int main()
{
    unsigned char a;
    int val, lsb;
    scanf("%c", &a);
    val=a;
//the decimal representation of a char variable is its ASCII code
//so the conversion will be done implicitly when
//attributing a char value to an int variable
    printf("The decimal representation is: %d\n", val);
    LEASTSIGNIFICANTBIT(lsb, val);
//we use the decimal representation to compute the least significant bit
    printf("The least significant bit is: %d\n", lsb);
    return 0;
}
