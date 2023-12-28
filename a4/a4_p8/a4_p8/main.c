/*
  CH-230-A
  a4_p8.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>

void print_matrix(int n, int mat[31][31])
{
    int i, j;
    printf("The entered matrix is:\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            printf("%d ", mat[i][j]);
//we are printing the matrix line by line
        printf("\n");
//we have to print the '\n' character in order to
//print the next line of the matrix
    }
}

void under_diagonal(int n, int mat[31][31])
{
    int i, j;
    printf("Under the secondary diagonal:\n");
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(i+j>n+1)
//we know that the elements positioned on the secondary diagonal
//have the sum of their indixes equal to n+1
//thus, an element is under the secondary diagonal
//if the sum of its indexes is greater than n+1
                printf("%d ", mat[i][j]);
    printf("\n");
}
int main()
{
    int mat[31][31], n, i, j;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            scanf("%d", &mat[i][j]);
    print_matrix(n, mat);
    under_diagonal(n, mat);
    return 0;
}
