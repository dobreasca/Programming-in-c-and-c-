/*
  CH-230-A
  a12_p3.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
#include "TournamentMember.h"
using namespace std;

int main()
{
    Player p1;
    p1.printInformation();
    p1.printPlayerinfo();
    cout<<'\n';
    p1.setNumber(10);
    p1.setPosition("Forward");
    p1.setFoot("Right");
    //printing updated player info
    p1.printInformation();
    p1.printPlayerinfo();
    cout<<'\n';
    Player p2("Cristiano", "Ronaldo", "1985-02-05", "Madrid", "Player", 
        1.87, 7, "Forward", 6, "Right");
    p2.printInformation();
    p2.printPlayerinfo();
    cout<<'\n';
    Player p3(p2);
    p3.printInformation();
    p3.printPlayerinfo();
    cout<<'\n';
    //updating the location
    TournamentMember::changeLocation("Hamburg");

    //printing player info with the updated location
    p1.printInformation();
    p1.printPlayerinfo();
    cout<<'\n';
    p2.printInformation();
    p2.printPlayerinfo();
    cout<<'\n';
    p3.printInformation();
    p3.printPlayerinfo();
    cout<<'\n';
    return 0;
}