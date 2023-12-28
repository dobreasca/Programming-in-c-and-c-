#include <iostream>
#include "Square.h"

//constructor with all the parameters
Square::Square(const char *n, double nside):Rectangle(n, nside, nside) 
{
    side=nside;
}

Square::~Square()
{}

double Square::calcArea() const 
{
	std::cout<<"The area of the square is calculated\n";
	return(side*side);
}

double Square::calcPerimeter() const 
{
    std::cout<<"The perimeter of the square is calculated\n";
    return(4*side);
}