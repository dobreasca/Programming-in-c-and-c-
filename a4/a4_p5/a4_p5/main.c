/*
  CH-230-A
  a4_p5.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>

int count_consonants(char str[])
{
    int n, cnt;
    char voc[]="aeiouAEIOU";
    cnt=0;
    n=strlen(str);
    for(int i=0; i<n; i++)
        if((*(str+i)>='a' && *(str+i)<='z') || (*(str+i)>='A' && *(str+i)<='Z'))
        //we use the *(str+i) expression to access the characther
        //on the i-th position
        //we have to check that the character is a letter
            if(!strchr(voc, *(str+i)))
                //if the character isn't found in the vocable string it means
                //it is a consonant
                cnt++;
    return cnt;
}

int main()
{
    char s[101];
    int n, cnt;
    fgets(s, 101, stdin);
    while(s[0]!='\n')
    {
        n=strlen(s);
        *(s+n-1)='\0';
        n--;
        //we have to delete the '\n' character and update the length
        cnt=count_consonants(s);
        printf("Number of consonants=%d\n", cnt);
        fgets(s, 101, stdin);
        //we read a new string
    }
    return 0;
}

