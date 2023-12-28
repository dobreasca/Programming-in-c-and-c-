/*
  CH-230-A
  a10_p8.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
#include <cstdlib>
#include "Complex.h"
using namespace std;

int main()
{
    int real_part, imaginary_part;
    Complex c1, c2, c3;
    
    cout<<"enter the first number"<<'\n';
    cout<<"real part:"<<'\n';
    cin>>real_part;
    c1.setReal(real_part);
    cout<<"imaginary part:"<<'\n';
    cin>>imaginary_part;
    c1.setImaginary(imaginary_part);
    
    cout<<"enter the second number"<<'\n';
    cout<<"real part:"<<'\n';
    cin>>real_part;
    c2.setReal(real_part);
    cout<<"imaginary part:"<<'\n';
    cin>>imaginary_part;
    c2.setImaginary(imaginary_part);
    
    cout<<"the conjugate of first number is: ";
    c3=c1.conjugate();
    c3.print();
    
    cout<<"the sum of the two numbers is: ";
    c3=c1.add(c2);
    c3.print();
    
    cout<<"the difference between the second and first number is: ";
    c3=c2.sub(c1);
    c3.print();
    
    cout << "the multiplication of the two numbers is: ";
    c3=c1.multiply(c2);
    c3.print();
    return 0;
}
