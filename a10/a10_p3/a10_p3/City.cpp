#include <iostream>
#include "City.h"

using namespace std;

//setter for name
void City::setName(string& newname)
{
    name=newname;
}

//setter for inhabitants
void City::setInhabitants(int newinhabitants)
{
    inhabitants=newinhabitants;
}

//setter for mayor
void City::setMayor(string& newmayor)
{
    mayor=newmayor;
}

//setter for area
void City::setArea(double newarea)
{
    area=newarea;
}

//getter for name
string City::getName()
{
    return name;
}

//getter for inhabitants
int City::getInhabitants()
{
    return inhabitants;
}

//getter for mayor
string City::getMayor()
{
    return mayor;
}

//getter for area
double City::getArea()
{
    return area;
}

void City::print()
{
    cout<<"Name: "<<name<<'\n';
    cout<<"Number of inhabitants: "<<inhabitants<<'\n';
    cout<<"Mayor: "<<mayor<<'\n';
    cout<<"Area: "<<area<<'\n';
}
