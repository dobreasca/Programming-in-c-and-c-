/*
  CH-230-A
  a3_p11.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
int main()
{
    char one[257], two[257], three[257], c, concat[514];
    int poz, i, l1, l2, found;
    fgets(one, 256, stdin);
    fgets(two, 256, stdin);
    l1=strlen(one);
    //the last character is '\n' so we have to delete it and modify the lengths
    one[l1-1]='\0';
    l1--;
    l2=strlen(two);
    two[l2-1]='\0';
    l2--;
    printf("length1=%d\n", l1);
    printf("length2=%d\n", l2);
    strcpy(concat, one);
    strcat(concat, two);
    //we need to create a new string so the input strings won't be changed
    printf("concatenation=%s\n", concat);
    strcpy(three, two);
    printf("copy=%s\n", three);
    if(strcmp(one, two)>0)
    //we are using the strcmp function to compare the two strings
        printf("one is larger than two\n");
    else if (strcmp(one, two)==0)
        printf("one is equal to two\n");
    else
        printf("one is smaller than two\n");
    scanf("%c", &c);
    l2=strlen(two);
    found=0;
    for(i=0; i<l2 && found==0; i++)
    //we are searching through the string for the character
        if(two[i]==c)
        {
            poz=i;
            found=1;
            //when the character is found we will exit the for loop
        }
    if(found==1)
        printf("position=%d\n", poz);
    else
        printf("The character is not in the string\n");
    return 0;
}
