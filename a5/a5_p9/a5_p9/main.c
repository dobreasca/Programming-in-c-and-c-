/*
  CH-230-A
  a5_p9.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

int ***a, x, y, z;
//since x, y, z, and the matrix are declared globally,
//we don't have to redeclare them in the functions

void read_3dmatrix()
{
    int i, j, k;
    
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    
    a=(int ***)malloc(sizeof(int **)*x);
    for(i=0; i<x; i++)
    {
        a[i]=(int **)malloc(sizeof(int*)*y);
        for(j=0; j<y; j++)
            a[i][j]=(int *)malloc(sizeof(int)*z);
    }
//we allocated memory for the matrix
    
    for(i=0; i<x; i++)
        for(j=0; j<y; j++)
            for(k=0; k<z; k++)
                scanf("%d", &a[i][j][k]);
}

void print_2dsections()
{
    int i, j, k, s;
//s represents the section number
    for(k=0; k<z; k++)
//to access the sections parallel to XOY axis
//we have to iterate through the depth
    {
        s=k+1;
        printf("Section %d:\n", s);
        for(i=0; i<x; i++)
        {
            for(j=0; j<y; j++)
                printf("%d ", a[i][j][k]);
            printf("\n");
        }
    }
}

int main()
{
    int i, j;
    read_3dmatrix();
    print_2dsections();
   for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
            free(a[i][j]);
        free(a[i]);
    }
    free(a);
//we deallocated the memory used by the matrix
    return 0;
}
