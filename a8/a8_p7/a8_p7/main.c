/*
  CH-230-A
  a8_p7.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    FILE *fr1, *fr2, *fw;
    fr1=fopen("text1.txt", "r");
    if(fr1==NULL)
        printf("some error occured\n");
    fr2=fopen("text2.txt", "r");
    if(fr2==NULL)
        printf("some error occured\n");
    fw=fopen("merge12.txt", "w");
    if(fw==NULL)
        printf("some error occured\n");
//we check if some errors occured while opening the files
    while((c=fgetc(fr1))!=EOF)
        fputc((int) c, fw);
    fclose(fr1);
//we write the characters from the first file in merge12.txt
    while((c=fgetc(fr2))!=EOF)
        fputc((int) c, fw);
//we write the characters from the second file in merge12.txt
    fclose(fr2);
    fclose(fw);
    
    return 0;
}
