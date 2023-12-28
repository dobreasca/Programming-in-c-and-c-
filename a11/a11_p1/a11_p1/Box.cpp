#include <iostream>
#include "Box.h"

//constructors

//default constructor
Box::Box()
{
    height=0.0;
    width=0.0;
    depth=0.0;
}

//constructor that sets the data members
Box::Box(double newheight, double newwidth, double newdepth)
{
    height=newheight;
    width=newwidth;
    depth=newdepth;
}

//copy constructor
Box::Box(Box& b)
{
    height=b.height;
    depth=b.depth;
    width=b.width;
}

//destructor
Box::~Box()
{

}

//setter for height
void Box::setHeight(double newheight)
{
    height=newheight;
}

//setter for width
void Box::setWidth(double newwidth)
{
    width=newwidth;
}

//setter for depth
void Box::setDepth(double newdepth)
{
    depth=newdepth;
}

//getter for height
double Box::getHeight()
{
    return height;
}

//getter for width
double Box::getWidth()
{
    return width;
}

//getter for depth
double Box::getDepth()
{
    return depth;
}

//service method that calculates the volume
double Box::Volume()
{
    return height*width*depth;
}
