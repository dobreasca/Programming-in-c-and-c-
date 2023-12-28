// please refer to shapes.h for methods documentation

#include <iostream>
#include <cmath>
#include "Shapes.h"
#define _USE_MATH_DEFINES //we need it in order to use M_PI
using namespace std; 

Shape::Shape(const string& n) : name(n) 
{}

//default constructor for shape
Shape::Shape()
{
    name="default shape";
}

//copy construtor for shape
Shape::Shape(const Shape& s)
{
    name=s.name;
}

//setter for the name
void Shape::setName(string newname)
{
    name=newname;
}

//getter for the name
string Shape::getName() const
{
    return name;
}

void Shape::printName() const 
{
	cout << name << endl;
}

//default constructor for CenteredShape
CenteredShape::CenteredShape():Shape("default centered shape")
{
    x=0;
    y=0;
}

//copy constructor for CenteredShape
CenteredShape::CenteredShape(const CenteredShape& s):Shape(s.getName())
{
    x=s.x;
    y=s.y;
}

//setter for x
void CenteredShape::setX(double newx)
{
    x=newx;
}

//setter for y
void CenteredShape::setY(double newy)
{
    y=newy;
}

//getter for x
double CenteredShape::getX() const
{
    return x;
}

//getter for y
double CenteredShape::getY() const
{
    return y;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) 
{
	x = nx;
	y = ny;
}

void CenteredShape::move(double newx, double newy)
{
    x=newx;
    y=newy;
}

//default constructor for RegularPolygon
RegularPolygon::RegularPolygon():CenteredShape("default regular polygon", 0, 0)
{
    EdgesNumber=0;
}

//copy constructor for RegularPolygon
RegularPolygon::RegularPolygon(const RegularPolygon& rp):
    CenteredShape(rp.getName(), rp.getX(), rp.getY())
{
    EdgesNumber=rp.EdgesNumber;
}

//setter for EdgesNumber
void RegularPolygon::setENumber(double newenumber)
{
    EdgesNumber=newenumber;
}

//getter for EdgesNumber
double RegularPolygon::getENumber() const
{
    return EdgesNumber;
}


RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

//default constructor for Circle
Circle::Circle():CenteredShape("default circle", 0, 0)
{
    Radius=0;
}

//copy constructor for Circle
Circle::Circle(const Circle& c):CenteredShape(c.getName(), c.getX(), c.getY())
{
    Radius=c.Radius;
}

//setter for radius
void Circle::setRadius(double newradius)
{
    Radius=newradius;
}

//getter for radius
double Circle::getRadius() const
{
    return Radius;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

double Circle::perimeter() const
{
    return (2*M_PI*getRadius());
}

double Circle::area() const
{
    return (M_PI*getRadius()*getRadius());
}

//default constructor for Rectangle
Rectangle::Rectangle():RegularPolygon("default rectangle", 0, 0, 4)
{
    Width=0;
    Height=0;
}

//copy constructor for Rectangle
Rectangle::Rectangle(const Rectangle& r):
    RegularPolygon(r.getName(), r.getX(), r.getY(), r.getENumber())
{
    Width=r.Width;
    Height=r.Height;
}

//setter for width
void Rectangle::setWidth(double newwidth)
{
    Width=newwidth;
}

//setter for height
void Rectangle::setHeight(double newheight)
{
    Height=newheight;
}

//getter for width
double Rectangle::getWidth() const
{
    return Width;
}

//getter for height
double Rectangle::getHeight() const
{
    return Height;
}

Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, 
    double nheight):RegularPolygon(n, nx, ny, 4)
{
    Width=nwidth;
    Height=nheight;
}

double Rectangle::perimeter() const
{
    return (2*(getWidth()+getHeight()));
}

double Rectangle::area() const
{
    return (getWidth()*getHeight());
}

//default constructor for Square
Square::Square():Rectangle("default square", 0, 0, 0, 0)
{
    Side=0;
}

//copy constructor for Square
Square::Square(const Square& s):
    Rectangle(s.getName(), s.getX(), s.getY(), s.getSide(), s.getSide())
{
    Side=s.Side;
}

//setter for side
void Square::setSide(double newside)
{
    Side=newside;
}

//getter for side
double Square::getSide() const
{
    return Side;
}

Square::Square(const string& n, double nx, double ny, double nside):
    Rectangle(n, nx, ny, nside, nside)
{
    Side=nside;
}

double Square::perimeter() const
{
    return (4*getSide());
}

double Square::area() const
{
    return (getSide()*getSide());
}