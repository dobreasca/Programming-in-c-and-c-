/*
  CH-230-A
  a3_p8.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
float sum(float array[11], int n)
{
    float s=0;//the sum must be initialized with 0
    int j;
    for(j=0; j<n; j++)
        s+=array[j];
    return s;
}

float average(float array[11], int n)
{
    float s, av;
    s=sum(array, n);//we use the sum function to calculate the sum
    av=s/n;
    return av;
}
int main()
{
    float array[11], s, av;
    int cnt=0, i=0;
    while(cnt<=9)
    {
        scanf("%f", &array[i]);
        if(array[i]==-99.0)
            cnt=10;//so that we exit the while loop
        i++;
    }
    //in the end i will represent the number of elements
    s=sum(array, i);
    printf("sum: %f\n", s);
    av=average(array, i);
    printf("average: %f\n", av);
    return 0;
}
