#include <string>
#ifndef City_h
#define City_h
using namespace std;

class City
{
    
private:
    string name, mayor;
    int inhabitants;
    double area;
    
public:
//setter methods
    void setName(string& newname);
    void setInhabitants(int newinhabitants);
    void setMayor(string& newmayor);
    void setArea(double newarea);
//getter methods
    string getName();
    int getInhabitants();
    string getMayor();
    double getArea();
//service method
    void print();
};

#endif /* City_h */
