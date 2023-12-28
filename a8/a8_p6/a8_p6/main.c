/*
  CH-230-A
  a8_p6.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */
#include <stdio.h>
#include <string.h>
int main()
{
    char fr1_name[41], fr2_name[41];
    double n1, n2, sum, dif, prod, div;
    FILE *fr1, *fr2, *fw;
    int n;
    
    fgets(fr1_name, 41, stdin);
    n=strlen(fr1_name);
    fr1_name[n-1]='\0';
    fgets(fr2_name, 41, stdin);
    n=strlen(fr2_name);
    fr2_name[n-1]='\0';
//the last character will be the new line character and
//we have to delete it from the strings
    
    fr1=fopen(fr1_name, "r");
    if(fr1==NULL)
        printf("some error occured\n");
//we check if an error occured while opening the file
    fscanf(fr1, "%lf", &n1);
    fclose(fr1);
    fr2=fopen(fr2_name, "r");
    if(fr2==NULL)
        printf("some error occured\n");
//we check if an error occured while opening the file
    fscanf(fr2, "%lf", &n2);
    fclose(fr2);
    
    fw=fopen("results.txt", "w");
    if(fw==NULL)
        printf("some error occured\n");
    
    sum=n1+n2;
    fprintf(fw, "sum= %lf\n", sum);
    dif=n1-n2;
    fprintf(fw, "difference= %lf\n", dif);
    prod=n1*n2;
    fprintf(fw, "product= %lf\n", prod);
    div=n1/n2;
    fprintf(fw, "division= %lf\n", div);
    fclose(fw);
    return 0;
}
