/*
  CH-230-A
  a7_p6.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
    char name[30];
    int age;
};

int mycmp_name(const struct person pers1, const struct person pers2)
{
    if(strcmp(pers1.name, pers2.name)==0)
        return pers1.age-pers2.age;
//if the names are the same we do the comparison by age
    else
        return strcmp(pers1.name, pers2.name);
}

int mycmp_age(const struct person pers1, const struct person pers2)
{
    if(pers1.age==pers2.age)
        return strcmp(pers1.name, pers2.name);
//if the ages are the same we do the comparison by name
    else
        return pers1.age-pers2.age;
}

void bubblesort(struct person* v, int n,
            int(*mycmp)(const struct person pers1, const struct person pers2))
{
    int swapped, i;
    struct person aux;
    do
    {
        swapped=0;
        for(i=1; i<n; i++)
            if(mycmp(v[i-1],v[i])>0)
            {
//if we found 2 consecutive elements that are out of
//order we swap them and change the swapped variable
                aux=v[i-1];
                v[i-1]=v[i];
                v[i]=aux;
                swapped=1;
            }
    }while(swapped==1);
}
int main()
{
    int n, i, len;
    struct person *v;
    scanf("%d", &n);
    v=(struct person*)malloc(sizeof(struct person)*n);
    if(v==NULL)
        printf("Error");
//we check that the memory attribution was successful
    for(i=0; i<n; i++)
    {
        getchar();
        fgets(v[i].name, sizeof(v[i].name), stdin);
        len=strlen(v[i].name);
        v[i].name[len-1]='\0';
        len--;
        scanf("%d", &v[i].age);
    }
    bubblesort(v, n, mycmp_name);
    for(i=0; i<n; i++)
        printf("{%s, %d}; ", v[i].name, v[i].age);
    printf("\n");
    bubblesort(v, n, mycmp_age);
    for(i=0; i<n; i++)
        printf("{%s, %d}; ", v[i].name, v[i].age);
    printf("\n");
    return 0;
}
