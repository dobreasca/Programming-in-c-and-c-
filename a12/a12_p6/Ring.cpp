#include <iostream>
#include <cmath>
#include "Ring.h"

Ring::Ring(const char *n, double outer, double inner) 
					: Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
	std::cout << "The area of the ring is calculated\n";
	return (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
}

double Ring::calcPerimeter() const
{
    std::cout<<"The perimeter of the ring is calculated\n";
    return(Circle::calcPerimeter()+2*M_PI*innerradius);
}