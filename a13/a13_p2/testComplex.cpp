/*
  CH-230-A
  a13_p2.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
#include <fstream>
#include "Complex.h"
using namespace std;
ifstream in("in1.txt");
ifstream fin("in2.txt");
ofstream out("output.txt");
int main()
{
    Complex z1, z2, sum, dif, prod;
    cout<<"Enter two complex numbers:"<<'\n';
    in>>z1;
    fin>>z2;
    sum=z1+z2;
    dif=z1-z2;
    prod=z1*z2;
    out<<"the sum of the two complex numbers is: "<<sum<<'\n';
    cout<<"the sum of the two complex numbers is: "<<sum<<'\n';
    out<<"the difference of the two complex numbers is: "<<dif<<'\n';
    cout<<"the difference of the two complex numbers is: "<<dif<<'\n';
    out<<"the product of the two complex number is: "<<prod<<'\n';
    cout<<"the product of the two complex number is: "<<prod<<'\n';
    return 0;
}