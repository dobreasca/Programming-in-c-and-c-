/*
  CH-230-A
  a12_p1.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

 #include <iostream>
 #include "Shapes.h"
 using namespace std;

 int main()
 {
    Hexagon h1("first hexagon", 1, 2, 6, "blue", 9);
    Hexagon h2("second hexagon",3, 4, 6, "green", 15);
//the first 2 constructors are created with the constructors 
//that have all the parameters
    Hexagon h3(h2);
//the third hexagon is created with a copy constructor
    cout<<"Calculating the area and the perimeter of the first hexagon";
    cout<<"\nperimeter: "<<h1.perimeter()<<'\n';
    cout<<"area: "<<h1.area()<<'\n';

    cout<<"\nCalculating the area and the perimeter of the second hexagon";
    cout<<"\nperimeter: "<<h2.perimeter()<<'\n';
    cout<<"area: "<<h2.area()<<'\n';

    cout<<"\nCalculating the area and the perimeter of the third hexagon";
    cout<<"\nperimeter: "<<h3.perimeter()<<'\n';
    cout<<"area: "<<h3.area()<<'\n';
    return 0;
 }