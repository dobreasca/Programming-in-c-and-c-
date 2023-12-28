/*
 Dobrescu Ana-Maria
 a.dobrescu@jacobs-university.de
 */

#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    if(c>='0' && c<='9')
    //if the characther's ascii code is between the ascii codes of 0 and 9 it is a digit
    {
        printf("%c", c);
        printf(" is a digit\n");
    }
    else if((c>='a' && c<='z') || (c>='A' && c<='Z'))
    //if the characther's ascii code is between the ascii codes of a and z or A and Z it is a letter
    {
        printf("%c", c);
        printf(" is a letter\n");
    }
    else //if the character is neither a letter nor a digit, it is some other symbol
    {
        printf("%c", c);
        printf(" is some other symbol\n");
    }
    return 0;
}
