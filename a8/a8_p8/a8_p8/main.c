/*
  CH-230-A
  a8_p8.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
int main()
{
    char sep[]=" ,.?!", c, fr_name[41];
    int n, cnt, word;
    FILE *fr;
    cnt=0;
    word=0;
    fgets(fr_name, 41, stdin);
    n=strlen(fr_name);
    fr_name[n-1]='\0';
//fgets reads the new line character
//and we have to delete it from the string
    fr=fopen(fr_name, "r");
    if(fr==NULL)
        printf("some error occured\n");
//we check if some errors occured while opening the file
    while((c=fgetc(fr))!=EOF)
        if(strchr(sep, c)!=NULL || c=='\t' || c=='\r' || c=='\n')
        {
            if(word==1)
                cnt++;
//if the last character was part of a word we have to increase our counter
            word=0;
        }
        else
//the character is a letter so it is part of a word
            word=1;
    fclose(fr);
    if(cnt==1)
        printf("The file contains one word.\n");
    else if(cnt==0)
        printf("The file contains no words.\n");
    else
        printf("The file contains %d words.\n", cnt);
    return 0;
}
