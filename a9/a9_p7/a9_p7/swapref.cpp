/*
  CH-230-A
  a9_p7.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
using namespace std;

void swapping(int&a, int&b)
{
    int aux;
    aux=a;
    a=b;
    b=aux;
}

void swapping(float&x, float&y)
{
    float aux;
    aux=x;
    x=y;
    y=aux;
}

void swapping(const char *&str1, const char *&str2)
{
    const char *aux;
    aux=str1;
    str1=str2;
    str2=aux;
}

//we have done the swapping with the help of
//an auxiliar variable of the given type

int main()
{
    int a=7, b=15;
    float x=3.5, y=9.2;
    const char *str1="One";
    const char *str2="Two";
    
    cout<<"a="<<a<<", b="<<b<<endl;
    cout<<"x="<<x<<", y="<<y<<endl;
    cout<<"str1="<<str1<<", str2="<<str2<<endl;
    
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);
    
    cout<<"a="<<a<<", b="<<b<<endl;
    cout<<"x="<<x<<", y="<<y<<endl;
    cout<<"str1="<<str1<<", str2="<<str2<<endl;
    return 0;
}
