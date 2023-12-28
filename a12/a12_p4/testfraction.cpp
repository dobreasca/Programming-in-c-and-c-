/*
  CH-230-A
  a12_p4.cpp
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
    cout<<"Enter two fractions: \n";
    cout<<"first fraction: ";
    cin>>f1;
    cout<<"\nsecond fraction: ";
    cin>>f2;
    cout<<"The product of the two fractions is: ";
    cout<<f1*f2;
    cout<<"\nThe qoutient of the two fractions is: ";
    cout<<f1/f2;
    cout<<'\n';
}