/*
  CH-230-A
  a11_p5.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
#include "Shapes.h"
using namespace std;

int main() 
{
  Circle c("first circle", 3, 4, 7);
  RegularPolygon rp("TRIANGLE", 1, 1, 3);
  Rectangle r("rectangle", 1, 2, 9, 10);
  Square s("square", 3, 4, 6);

  rp.printName();
  c.printName();
  r.printName();
  s.printName();

  cout<<"\nthe perimeter of the circle is: "<<c.perimeter()<<'\n';
  cout<<"the area of the circle is: "<<c.area()<<'\n';

  cout<<"\nthe perimeter of the rectangle is: "<<r.perimeter()<<'\n';
  cout<<"the area of the rectangle is: "<<r.area()<<'\n';

  cout<<"\nthe perimeter of the square is: "<<s.perimeter()<<'\n';
  cout<<"the area of the square is: "<<s.area()<<'\n';

  return 0;
}