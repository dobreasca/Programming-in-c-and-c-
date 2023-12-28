/*
  CH-230-A
  a11_p6.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{
    double *comp1=new double[3];
    comp1[0]=1;
    comp1[1]=2;
    comp1[2]=3;
    double *comp2=new double[3];
    comp2[0]=4;
    comp2[1]=5;
    comp2[2]=6;
    double *comp3=new double[3];
    comp3[0]=7;
    comp3[1]=8;
    comp3[2]=9;

    Vector v1;
    v1.setSize(3);
    v1.setArr(comp1);
    cout<<"The vector created with the default constructor is:"<<'\n';
    v1.printc();

    Vector v2(3, comp2);
    cout<<"The first vector created with the constructor with parameters is:"
        <<'\n';
    v2.printc();

    Vector v3(v2);
    cout<<"The vector created with the copy constructor is:"<<'\n';
    v3.printc();

    Vector v4(3, comp3);
    cout<<"The second vector created with the constructor with parameters is:"
        <<'\n';
    v4.printc();

    cout<<"The norm of the second vector is: "<<v2.norm()<<'\n';
    cout<<"The sum of the second and the fourth vector is:";
    (v2.add(v4)).printc();
    cout<<"The difference of the second and the fourth vector is:";
    (v2.diff(v4)).printc();
    cout<<"The scalar product of the second and the fourth vector is:";
    cout<<v2.scalar_prod(v4)<<'\n';
    return 0;
}