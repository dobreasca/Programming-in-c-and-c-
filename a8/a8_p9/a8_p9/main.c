/*
  CH-230-A
  a8_p9.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n, i, len, j;
    long fr_len;
    char fr_name[41], buff[64];
    FILE  *fw;
    scanf("%d", &n);
    getchar();
    fw=fopen("output.txt", "w");
    if(fw==NULL)
        printf("some error occured\n");
//we check if some errors occured while opening the file
    
    printf("Concating the content of %d files ...\n", n);
    for(i=0; i<n; i++)
    {
        FILE *fr;
        fgets(fr_name, 41, stdin);
        len=strlen(fr_name);
        fr_name[len-1]='\0';
//fgets reads the new line character
//and we have to delete it from our string
        fr=fopen(fr_name, "rb");
        if(fr==NULL)
            printf("some error occured\n");
//we check if some errors occured while opening the file
        memset(buff, '\0', sizeof(buff));
        fseek(fr, 0L, SEEK_END);
        fr_len=ftell(fr);
//assigns to last the number of bytes from the beginning to end of file
        fseek(fr, 0L, SEEK_SET);
        while(fread(buff, fr_len, 1, fr) && fr_len>0)
//we check if the file length is greater than the buffer size
                if(fr_len>=64)
                {
                    for(j=0; j<fr_len; j++)
                        printf("%c", buff[j]);
                    printf("\n");
//since the length is greater than 64 we assign the chunk size
//to the buffer size and the number of chunks to be written to 1
                    fwrite(buff, 64, 1, fw);
                    fr_len-=64;
//we have to decrease the length by 64 because
//there have been 64 transferred bytes
                }
                else
                {
                    for(j=0; j<fr_len; j++)
                        printf("%c", buff[j]);
                    printf("\n");
                    fwrite(buff, fr_len, 1, fw);
//we set the chunk size to the length
//and the number of chunks to be written to 1
                    fr_len=0;
                }
        fputc('\n', fw);
        fclose(fr);
    }
    fclose(fw);
    printf("The result was written into output.txt\n");
    return 0;
}
