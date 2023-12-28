/*
  CH-230-A
  a4_p11.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void mylowercase(char str[])
{
    int n, i;
    n=strlen(str);
    for(i=0; i<n; i++)
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+'a'-'A';
}
//the function mylowercase converts a given string to lowercase
int count_insensitive(char *str, char c)
{
    int cnt, n, i;
    cnt=0;
    if(c>='A' && c<='Z')
        c=c+'a'-'A';
    mylowercase(str);
    n=strlen(str);
    for(i=0; i<n; i++)
        if(str[i]==c)
            cnt++;
//if we find the character in the string we will update the variable
    return cnt;
}
int main()
{
    char *s, str[256], *ptr, c;
    int n, cnt;
    s=(char*) malloc(sizeof(char)*50);
//we allocated memory for a string with 50 characters
    fgets(str, 256, stdin);
    n=strlen(str);
    str[n-1]='\0';
    n--;
    ptr=(char*) malloc(sizeof(char)*n);
//we allocated memory for the string read from the keyboard
    strcpy(ptr, str);
    free(s);
    scanf("%c", &c);
    cnt=count_insensitive(ptr, c);
    if(cnt==1)
        printf("The character '%c' occurs one time.\n", c);
    else
        printf("The character '%c' occurs %d times.\n", c, cnt);
    free(ptr);
    return 0;
}
