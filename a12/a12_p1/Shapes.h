/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
using  namespace std;
class Shape {			
    // base class
	protected:   				
    // private access modifier: could also be protected
        string name;
    // every shape will have a name
	public:
		Shape(const string&);  
        // builds a shape with a name
		Shape();					
        // empty shape
		Shape(const Shape&);		
        // copy constructor
		void printName() const ;  	
        // prints the name  
};

class CenteredShape : public Shape {  
    // inherits from Shape
	protected: 
		double x,y; 
        // the center of the shape
	public:
		CenteredShape(const string&, double, double);  
        // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	
        // moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { 
    // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
};

class Circle : public CenteredShape {  
    // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const string&, double, double, double);
		Circle();
		Circle(const Circle&);
};

class Hexagon : public RegularPolygon
{
//a hexagon is a regular polygon with a colour and a side
	private:
		double side;
		string colour;
	public:
		Hexagon(const string& n, double nx, double ny, int nedges, 
			const string& ncolour, double nside);
		Hexagon();
		Hexagon(const Hexagon& h);
//the usual three constructors
		~Hexagon();
//the destructor
		void setSide(double newside);
		void setColour(string newname);
//setters for side and colour
		double getSide() const;
		string getColour() const;
//getters for side and colour
		double perimeter() const;
		double area() const;
//methods for calculating the area and the perimeter of the hexagon
};

#endif