/*
  CH-230-A
  a4_p12.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
void replaceAll(char *str, char c, char e)
{
    int n, i;
    n=strlen(str);
    for(i=0; i<n; i++)
        if(str[i]==c)
            str[i]=e;
}
int main()
{
    int n;
    char str[81], c, e;
    fgets(str, 81, stdin);
    n=strlen(str);
    str[n-1]='\0';
//fgets reads the '\n' character as well
//so we have to delete it from the string
    n--;
    while (strcmp(str, "stop"))
//if the string is stop the while loop will stop
    {
        scanf("%c\n", &c);
        printf("character to be replaced: %c\n", c);
        scanf("%c", &e);
        printf("replacing charcter: %c\n", e);
        printf("string before replacement: %s\n", str);
        replaceAll(str, c, e);
        printf("string after replacement: %s\n", str);
        printf("enter new string:\n");
        scanf("\n");
//we have to read a new line in order to read the new string
        fgets(str, 81, stdin);
        n=strlen(str);
        str[n-1]='\0';
        n--;
    }
    return 0;
}
