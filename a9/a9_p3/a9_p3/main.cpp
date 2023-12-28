/*
  CH-230-A
  a9_p3.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
using namespace std;

float my_abs(float x)
{
    if(x<0)
        return -x;
//if x is negative the function returns -x
    return x;
}

int main()
{
    float x;
    cin>>x;
    x=my_abs(x);
    cout<<x<<'\n';
    return 0;
}
