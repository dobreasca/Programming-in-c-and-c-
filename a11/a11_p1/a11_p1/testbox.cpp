/*
  CH-230-A
  a11_p1.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
#include <cstdlib>
#include "Box.h"

using namespace std;

int main()
{
    int n, i;
    double height, width, depth, vol;
    cin>>n;
    Box *a;
    a=new Box[2*n];
    
    for(i=1; i<=n; i++)
    {
        cout<<"Please enter the dimensions of the box!"<<'\n';
        cout<<"height: "<<'\n';
        cin>>height;
        a[i].setHeight(height);
        cout<<"width: "<<'\n';
        cin>>width;
        a[i].setWidth(width);
        cout<<"depth: "<<'\n';
        cin>>depth;
        a[i].setDepth(depth);
//we set the data members with the setter method
        a[n+i]=a[i];
//we initialize members from n+1 till 2*n
//by using copy constructors
    }
    
    for(i=1; i<=2*n; i++)
    {
        vol=a[i].Volume();
//the volume is calculated by using a service method
        cout<<"The volume of the current box is: "<<vol<<'\n';
    }
    
    delete [] a;
    return 0;
}
