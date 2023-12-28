/*
 CH-230-A
 a3_p4.c
 Ana-Maria Dobrescu
 a.dobrescu@jacobs-university.de
 */
/*initial code
#include <stdio.h>
int position(char str[], char c)
{
    int idx;
    // Loop until end of string
    for (idx = 0; str[idx] != c && str[idx] != ’\0’; ++idx)
        // do nothing
    return idx;
}
int main()
{
    char line[80];
    while (1)
    {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of ’g’ is: %d\n", position(line, ’g’));
    }
    return 0;
}
*/
//the program always prints the position 0 because there is no ; after the for loop
//which means that the return is included in the loop

//fixed code
#include <stdio.h>
int position(char str[], char c)
{
    int idx;
    // Loop until end of string
    for (idx=0; str[idx]!=c && str[idx]!='\0'; ++idx);
        // do nothing
    return idx;
}
int main()
{
    char line[80];
    while (1)
    {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    }
    return 0;
}
