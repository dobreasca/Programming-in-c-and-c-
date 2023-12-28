/*
  CH-230-A
  a5_p8.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
int n, m, p, **a, **b, **res;

//since n, m, p and the matrices are declared globally,
//we don't have to redeclare them in the functions

void read_matrix()
{
    int i, j;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);
    
    a=(int **)malloc(sizeof(int*)*n);
    for(i=0; i<n; i++)
        a[i]=(int *)malloc(sizeof(int)*n);
    
    b=(int **)malloc(sizeof(int*)*m);
    for(i=0; i<m; i++)
        b[i]=(int *)malloc(sizeof(int)*m);
    
    res=(int **)malloc(sizeof(int*)*n);
    for(i=0; i<n; i++)
        res[i]=(int *)malloc(sizeof(int)*n);
//we allocated memory for the matrices

    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf("%d", &a[i][j]);
    
    for(i=0; i<m; i++)
        for(j=0; j<p; j++)
            scanf("%d", &b[i][j]);
}

void prod_matrix()
{
    
    int i, k, j, sum;
    for(i=0; i<n; i++)
        for(k=0; k<p; k++)
        {
            sum=0;
            for(j=0; j<m; j++)
                sum+=(a[i][j]*b[j][k]);
            res[i][k]=sum;
        }
//we calculate the product with the given formula
}

void print_matrix(int n, int m, int **a)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

int main()
{
    read_matrix();
    prod_matrix();
    printf("Matrix A:\n");
    print_matrix(n, m, a);
    printf("Matrix B:\n");
    print_matrix(m, p, b);
    printf("The multiplication result of AxB:\n");
    print_matrix(n, p, res);
    
    int i;
    for(i=0; i<n; i++)
        free(a[i]);
    free(a);
    for(i=0; i<m; i++)
        free(b[i]);
    free(b);
    for(i=0; i<n; i++)
        free(res[i]);
    free(res);
//we deallocated the memory used by the three matrices
    return 0;
}
