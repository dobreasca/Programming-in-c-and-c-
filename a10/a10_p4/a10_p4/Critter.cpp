#include <iostream>
#include "Critter.h"

using namespace std;
//constructors

//constructor with no parameters supplied
Critter::Critter()
{
    cout<<"this is the constructor with no parameters"<<'\n';
    name="default_critter";
    hunger=0;
    height=5.0;
    boredom=0;
}
//the variables were set as specified in the problem

//constructor with name as a parameter
Critter::Critter(string newname)
{
    cout<<"this is the constructor with the name as a parameter"<<'\n';
    name=newname;
    hunger=0;
    height=5.0;
    boredom=0;
}

//constructor with all of the parameters supplied
Critter::Critter(string newname, int newhunger, int newboredom,
                 double newheight)
{
    cout<<"this is the constructor with all the parameters"<<'\n';
    name=newname;
    hunger=newhunger;
    boredom=newboredom;
    height=newheight;
}

//setter for name
void Critter::setName(string& newname)
{
    name=newname;
}

//setter for hunger
void Critter::setHunger(int newhunger)
{
    hunger=newhunger;
}

//setter for boredom
void Critter::setBoredom(int newboredom)
{
    boredom=newboredom;
}

//setter for height
void Critter::setHeight(double newheight)
{
    height=newheight;
}

//getter for name
string Critter::getName()
{
    return name;
}

//getter for hunger
int Critter::getHunger()
{
    return hunger;
}

//getter for boredom
int Critter::getBoredom()
{
    return boredom;
}

//getter for height
double Critter::getHeight()
{
    return height;
}

void Critter::print()
{
    cout<<"I am "<<name<<". My hunger level is "<<hunger<<"."<< endl;
    cout<<"My boredom level is "<<boredom<<"."<<endl;
    cout<<"My height is "<<height<<"."<<endl;
}

