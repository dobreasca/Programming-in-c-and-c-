/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
using namespace std;

class Shape 
{			
// base class
	private:   				
// private access modifier: could also be protected
	    string name;   
// every shape will have a name
	public:
		Shape(const string&);  
// builds a shape with a name
		Shape();					
// empty shape
		Shape(const Shape& s);		
// copy constructor
		void printName() const ;  	
// prints the name  
        void setName(string newname);
//setter for name
        string getName() const;
};

class CenteredShape : public Shape 
{  
// inherits from Shape
	private: 
		double x,y;  
// the center of the shape
	public:
		CenteredShape(const string&, double, double);  
// usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape& s);
		void move(double, double);	
// moves the shape, i.e. it modifies it center
        void setX(double newx);
        void setY(double newy);
//setters for x and y;
        double getX() const;
        double getY() const;
};

class RegularPolygon : public CenteredShape 
{ 
// a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon& rp);
        void setENumber(double newenumber);
//setter for EdgesNumber
        double getENumber() const;
//getter for EdgesNumber
};

class Circle : public CenteredShape 
{  
// a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const string&, double, double, double);
		Circle();
		Circle(const Circle& c);
        double perimeter() const;
        double area() const;
//methods for area and perimeter
        void setRadius(double newradius);
//setter for radius
        double getRadius() const;
//getter for radius
};

class Rectangle : public RegularPolygon
{
//a Rectangle is a shape with a center, a width and a height
    private:
        double Width;
        double Height;
    public:
        Rectangle(const string&, double, double, double, double);
        Rectangle();
        Rectangle(const Rectangle& r);
//usual three constructors
        double perimeter() const;
        double area() const;
//methods for area and perimeter
        void setWidth(double newwidth);
        void setHeight(double newheight);
//setters for height and width
        double getWidth() const;
        double getHeight() const;
//getters for height and width
};

class Square : public Rectangle
{
//a Square is a shape with a center and a side
    private:
        double Side;
    public:
        Square(const string&, double, double, double);
        Square();
        Square(const Square& s);
//usual three constructors
        double perimeter() const;
        double area() const;
//methods for area and perimeter
        void setSide(double newside);
//setter for side
        double getSide() const;
//getter for side
};

#endif