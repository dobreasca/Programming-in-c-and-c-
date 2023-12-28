/*
  CH-230-A
  a3_p9.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>

double sum25(double v[], int n)
{
    if(n>=6)
//if n>=6 it means that both position 2 and positiion 5 are valid
        return v[2]+v[5];
    return -111;
}
int main()
{
    int n, i;
    double v[21], sum=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%lf", &v[i]);
    sum=sum25(v, n);
    if(sum==-111)
    //if the function has returned -111 it means that the positions were invalid
        printf("One or both positions are invalid\n");
    else
        printf("sum=%lf\n", sum);
    return 0;
}
