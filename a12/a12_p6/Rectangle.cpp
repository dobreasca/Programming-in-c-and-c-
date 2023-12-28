#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	std::cout << "The area of a rectagle is calculated\n";
	return length*width;
}

double Rectangle::calcPerimeter() const
{
    std::cout<<"The perimeter of a rectangle is calculated\n";
    return 2*(length+width);
}

