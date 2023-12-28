/*
  CH-230-A
  a8_p5.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>

int main()
{
    char c1, c2;
    int n1, n2, sum;
    FILE *fr, *fw;
    fr=fopen("chars.txt", "r");
    if(fr==NULL)
        printf("some error occured\n");
//we check if an error occured while opening the file
    c1=getc(fr);
    c2=getc(fr);
    fclose(fr);
//we read the two characters from the file and then close the file
    n1=c1;
    n2=c2;
    sum=n1+n2;
//we compute the sum of the ASCII codes
    fw=fopen("codesum.txt", "w");
    if(fw==NULL)
        printf("some error occured\n");
    fprintf(fw, "%d", sum);
    fclose(fw);
    return 0;
}
