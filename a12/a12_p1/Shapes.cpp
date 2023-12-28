// please refer to shapes.h for methods documentation

#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

//default constructor
Hexagon::Hexagon():RegularPolygon("default hexagon", 0, 0, 6)
{
	colour="default colour";
	side=0;
}

//copy constructor
Hexagon::Hexagon(const Hexagon& h):RegularPolygon(h.name, h.x, h.y, 6)
{
	colour=h.colour;
	side=h.side;
}

//constructor with all the parameters
Hexagon::Hexagon(const string& n, double nx, double ny, int nedges, 
	const string& ncolour, double nside):RegularPolygon(n, nx, ny, 6)
{
	colour=ncolour;
	side=nside;
}

//destructor
Hexagon::~Hexagon()
{}

//setter for side
void Hexagon::setSide(double newside)
{
	side=newside;
}

//setter for colour
void Hexagon::setColour(string newcolour)
{
	colour=newcolour;
}

//getter for side
double Hexagon::getSide() const
{
	return side;
}

//getter for colour
string Hexagon::getColour() const
{
	return colour;
}

//method for calculating the perimeter
double Hexagon::perimeter() const
{
	return (6*getSide());
}

//method for calculating the area
double Hexagon::area() const
{
	return(((3*sqrt(3))/2)*getSide()*getSide());
}
