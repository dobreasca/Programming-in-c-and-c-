/*
  CH-230-A
  a11_p3.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
#include <cstdlib>
#include "Creature.h"
using namespace std;

int main()
{ 
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout<<"\nCreating an Ogre.\n";
    Ogre o;
    o.run();
    o.power();

    cout<<"\nCreating a fairy\n";
    Fairy f;
    f.run();
    f.fairydust();
    return 0;
} 
