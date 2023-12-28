/*
  CH-230-A
  a5_p7.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[101], str2[101], *str3;
    int n1, n2, n3;
    fgets(str1, 101, stdin);
    fgets(str2, 101, stdin);
    n1=strlen(str1);
    str1[n1-1]='\0';
    n1--;
//n1 is the length of the first string
    n2=strlen(str2);
    str1[n2-1]='\0';
    n2--;
//n2 is the length of the second string
    n3=n1+n2;
//n3 will be the length of the concatenated string
    str3=(char*) malloc(sizeof(char)*n3);
    strcpy(str3, str1);
//we first copy str1 to str3 so that the final result
//can be stored in str3
    strcat(str3, str2);
//we concatenated str3 with str2
    printf("Result of concatenation: %s", str3);
    return 0;
}
