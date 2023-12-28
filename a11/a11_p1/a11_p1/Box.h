#ifndef Box_h
#define Box_h
 
class Box
{
private:
    double height, width, depth;
public:
//constructors
    Box();
    Box(double newheight, double newwidth, double newdepth);
    Box(Box& b);
//destructor
    ~Box();
//setters
    void setHeight(double newheight);
    void setWidth(double newwidth);
    void setDepth(double newdepth);
//getters
    double getHeight();
    double getWidth();
    double getDepth();
//service methods
    double Volume();
};
#endif
