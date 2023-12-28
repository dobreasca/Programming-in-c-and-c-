/*Dobrescu Ana-Maria, a.dobrescu@jacobs-university.de*/
#include <stdio.h>

int main()
{
    double var1, var2, sum_d, dif_d, square_d;
    scanf("%lf", &var1);
    scanf("%lf", &var2);
    sum_d=var1+var2;//calculates the sum of the doubles
    printf("sum of doubles=%.6lf\n", sum_d);
    dif_d=var1-var2;//calculates the difference of the doubles
    printf("difference of doubles=%.6lf\n", dif_d);
    square_d=var1*var1;//calculates the square of the first double
    printf("square=%.6lf\n", square_d);
    
    int var3, var4, sum_i, prod_i;
    scanf("%d", &var3);
    scanf("%d", &var4);
    sum_i=var3+var4;//calculates the sum of the integers
    printf("sum of integers=%d\n", sum_i);
    prod_i=var3*var4;//calculates the product of the integers
    printf("product of integers=%d\n", prod_i);
  
    char var5, var6, sum_c, prod_c;
    int sum, prod;
    getchar();
    scanf("%c", &var5);
    getchar();
    scanf("%c", &var6);
    sum=var5+var6;//calculates the sum of the ascii codes
    printf("sum of chars=%d\n", sum);
    prod=var5*var6;//calculates the product of the ascii codes
    prod_c=var5*var6;//calculates the product of the chars
    sum_c=var5+var6;//calculates the sum of chars
    printf("product of chars=%d\n", prod);
    printf("sum of chars=%c\n", sum_c);
    printf("product of chars=%c\n", prod_c);
    return 0;
}
