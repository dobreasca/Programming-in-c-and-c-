/*
  CH-230-A
  a6_p7.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
int  bits[8];
//since bits2 is declared globally all of its elements will be 0
void set3bits(unsigned char c, int bit1, int bit2, int bit3)
{
    int a, i;
    a=c;
    printf("The decimal representation is: %d\n", a);
    printf("The binary representation is: ");
//since char has 8 bits we can iterate from 7 to 0,
//which is from 2ˆ7 till 1
    for(i=7; i>=0; i--)
        bits[i]=((a>>i)&1);
//we have to iterate the bits array from 7 to 0 since
//2ˆ7 will be on the first position and 1 on the last
    for(i=7; i>=0; i--)
        printf("%d", bits[i]);
    printf("\n");
//we set the given bits to 1
    bits[bit1]=1;
    bits[bit2]=1;
    bits[bit3]=1;
}
int main()
{
    unsigned char c;
    int bit1, bit2, bit3, i;
    scanf("%c", &c);
    scanf("%d", &bit1);
    scanf("%d", &bit2);
    scanf("%d", &bit3);
    set3bits(c, bit1, bit2, bit3);
    printf("After setting the bits: ");
    for(i=7; i>=0; i--)
        printf("%d", bits[i]);
    printf("\n");
    return 0;
}
