#include <iostream>
#include <cmath>
#include "Circle.h"

using namespace std;
Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

double Circle::calcArea() const {
	cout << "The area of the circle is calculated\n";
	return radius * radius * M_PI;
}

double Circle::calcPerimeter() const
{
    cout<<"The perimeter of the circle is calculated\n";
    return 2*radius*M_PI;
}
