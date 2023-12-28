/*
  CH-230-A
  a10_p4.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
#include <cstdlib>
#include "Critter.h"
using namespace std;

int main()
{
    Critter c1;
    c1.setHunger(2);
    c1.print();
    
    Critter c2("Ana");
    c2.print();
    
    Critter c3("Ana", 7, 9);
    c3.print();
    
    Critter c4("Ana", 7, 9, 159.5);
    c4.print();
    
    return 0;
}
