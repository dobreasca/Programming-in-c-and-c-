/*
  CH-230-A
  a11_p4.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
#include <cstdlib>
#include "Creature.h"
using namespace std;

int main()
{ 
  string choice;
  cout<<"\nChoose between wizard, ogre and fairy"<<'\n';
  cout<<"If you want to quit enter the word quit"<<'\n';
//we read the user's choice
  getline(cin, choice);
//we created a while loop that stops when choice is quit
  while(choice!="quit")
  {
//if the user inputs "quit" the loop ends
    if(choice=="wizard")
    {
      cout << "\nCreating a Wizard.\n";
//we allocate memory for the new wizard variable
      Wizard *w=new Wizard;
      (*w).run();
      (*w).hover();
//we deallocate the memory used by the wizard variable
      delete w;
    }
    else if(choice=="ogre")
    {
      cout<<"\nCreating an Ogre.\n";
//we allocate memory for the new ogre variable
      Ogre *o=new Ogre;
      (*o).run();
      (*o).power();
//we deallocate the memory used by the ogre variable
      delete o;
    }
    else if(choice=="fairy")
    {
      cout<<"\nCreating a fairy\n";
//we allocate memory for the fairy variable
      Fairy *f=new Fairy;
      (*f).run();
      (*f).fairydust();
//we deallocate the memory used by the fairy variable
      delete f;
    }
//we move on to the next input
    cout<<"\nChoose between wizard, ogre and fairy"<<'\n';
    cout<<"If you want to quit enter the word quit"<<'\n';
    getline(cin, choice);
  }
    return 0;
} 
