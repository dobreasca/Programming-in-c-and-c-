/*
  CH-230-A
  a5_p3.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>

int count_lower(char *str)
{
    int cnt=0, n, i;
    n=strlen(str);
    *(str+(n-1))='\0';
    n--;
    for(i=0; i<n; i++)
        if(*(str+i)>='a' && *(str+i)<='z')
//if the character is between a and z it means it is a lowercase letter
            cnt++;
    return cnt;
}
int main()
{
    char str[51];
    int cnt;
    fgets(str, 51, stdin);
    while(*str!='\n')
//if the first character of the string is \n it means
//that we reached the stop condition
    {
        cnt=count_lower(str);
        if(cnt==1)
            printf("There is one lowercase character.\n");
        else
            printf("There are %d lower characters.\n", cnt);
        fgets(str, 51, stdin);
    }
    return 0;
}
