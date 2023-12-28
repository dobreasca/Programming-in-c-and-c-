/*
  CH-230-A
  a7_p4.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//str will be the modified string
void upp(char string[], int n)
{
    int i;
    char str[257];
    strcpy(str, string);
    for(i=0; i<n; i++)
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-('a'-'A');
//we upper the character with the known formula
    printf("%s\n", str);
}

void lower(char string[], int n)
{
    int i;
    char str[257];
    strcpy(str, string);
    for(i=0; i<n; i++)
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+('a'-'A');
//we lower the characters with the known formula
    printf("%s\n", str);
}

void reverse(char string[], int n)
{
    int i;
    char str[257];
    strcpy(str, string);
    for(i=0; i<n; i++)
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+('a'-'A');
        else if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-('a'-'A');
    printf("%s\n", str);
}

void quit(char string[], int n)
{
    exit(1);
}

int main()
{
    char string[257], c;
    int n, comm;
    fgets(string, 257, stdin);
    n=strlen(string);
    string[n-1]='\0';//fgets reads the new line character
    n--;

    while(1)//we created the infinite loop
    {
        scanf("%c", &c);
        getchar();
        comm=c-'0';
        void(*functions[4])(char *, int)={upp, lower, reverse, quit};
//the functions will have as paramaters str and its size, n
        (*functions[comm-1])(string, n);
    }
    return 0;
}
