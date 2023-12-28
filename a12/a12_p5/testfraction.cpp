/*
  CH-230-A
  a12_p5.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
#include "fraction.h"
using namespace std;
int main()
{
    Fraction f1;
    Fraction f2;
    Fraction sum, dif;
    cout<<"Enter two fractions: \n";
    cout<<"first fraction: ";
    cin>>f1;
    cout<<"\nsecond fraction: ";
    cin>>f2;
    sum=f1+f2;
    dif=f1-f2;
    bool mycmp;
    mycmp=f1.operator>(f2);
    if(mycmp==1)
        cout<<"the first fraction is greater\n";
    else
        cout<<"the second fraction is greater\n";
    cout<<"\nThe sum of the two functions is: ";
    cout<<sum;
    cout<<"\nThe difference of the two functions is: ";
    cout<<dif;
}