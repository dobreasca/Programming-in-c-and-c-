#include <iostream>
#include "Critter.h"

using namespace std;
//conversion methods

//int to double
double Critter::convert_itd(int hunger)
{
    return(((double)hunger)/10);
}

//double to int
int Critter::convert_dti()
{
    return ((int)(hunger*10));
}

//constructors

//for the first 3 constructors the thirst level will be
//the same as the hunger level

//constructor with no parameters supplied
Critter::Critter()
{
    cout<<"this is the constructor with no parameters"<<'\n';
    name="default_critter";
    hunger=0;
    height=5.0;
    boredom=0;
    thirst=hunger;
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
    thirst=hunger;
}

//constructor with all of the parameters supplied
Critter::Critter(string newname, int newhunger, int newboredom,
                 double newheight)
{
    cout<<"this is the constructor with all the parameters"<<'\n';
    name=newname;
    hunger=convert_itd(newhunger);
    boredom=newboredom;
    height=newheight;
    thirst=hunger;
}


//constructor with the new thirst parameter
Critter::Critter(string newname, int newhunger, int newboredom,
        double newheight, double newthirst)
{
    cout<<"this constructor includes the new parameter"<<'\n';
    newname=name;
    name=newname;
    hunger=convert_itd(newhunger);
    boredom=newboredom;
    height=newheight;
    thirst=newthirst;
}
//setter for name
void Critter::setName(string& newname)
{
    name=newname;
}

//setter for hunger
void Critter::setHunger(int newhunger)
{
    hunger=convert_itd(newhunger);
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

//setter for thirst
void Critter::setThirst(double newthirst)
{
    thirst=newthirst;
}

//getter for name
string Critter::getName()
{
    return name;
}

//getter for hunger
int Critter::getHunger()
{
    return convert_dti();
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

//getter for thirst
double Critter::getThirst()
{
    return thirst;
}

void Critter::print()
{
    cout<<"I am "<<name<<". My hunger level is "<<hunger<<"."<< endl;
    cout<<"My boredom level is "<<boredom<<"."<<endl;
    cout<<"My height is "<<height<<"."<<endl;
    cout<<"My thirst level is "<<thirst<<"."<<'\n';
}
