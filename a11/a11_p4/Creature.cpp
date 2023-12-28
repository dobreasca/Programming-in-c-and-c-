
#include <iostream>
#include "Creature.h"
using namespace std;

//setter for distance
void Creature::setDistance(int newdistance)
{
    distance=newdistance;
}

//getter for distance
int Creature::getDistance() const
{
    return distance;
}

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

//destructor for creature
Creature::~Creature()
{
    cout<<"The creature is being destroyed."<<'\n';
}

//setter for factor
void Wizard::setFactor(int newfactor)
{
    distFactor=newfactor;
}

//getter for factor
int Wizard::getFactor() const
{
    return distFactor;
}

Wizard::Wizard() : distFactor(3)
{
    cout<<"the default constructor for wizard is called"<<'\n';
}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//destructor for wizard
Wizard::~Wizard()
{
    cout<<"The wizard is being destroyed."<<'\n';
}

//setter for strength
void Ogre::setStrength(int newstrength)
{
    strength=newstrength;
}

//getter for strength
int Ogre::getStrength() const
{
    return strength;
}

//default constructor for ogre
Ogre::Ogre() : strength(7)
{
    cout<<"the default constrcutor for ogre is called"<<'\n';
}

//destructor for ogre
Ogre::~Ogre()
{
    cout<<"The ogre is being destroyed."<<'\n';
}

//method that prints the strength level of an ogre
void Ogre::power() const
{
    cout<<"The ogre has a "<<strength<<" strength level."<<'\n';
}

//setter for weight
void Fairy::setWeight(int newweight)
{
    weight=newweight;
}

//setter for strength
void Fairy::setFStrength(int newfstrength)
{
    fstrength=newfstrength;
}

//getter for weight
int Fairy::getWeight() const
{
    return weight;
}

//getter for strength
int Fairy::getFStrength() const
{
    return fstrength;
}

//default constructor for fairy
Fairy::Fairy()
{
    cout<<"the default constructor for fairy is being called"<<'\n';
    weight=100;
    fstrength=10;
}

//destructor for fairy
Fairy::~Fairy()
{
    cout<<"The fairy is being destroyed"<<'\n';
}

//method that prints how much fairydust can be made
void Fairy::fairydust() const
{
    cout<<"This fairy can produce "<<(weight/fstrength);
    cout<<" grams of fairydust"<<'\n';
}