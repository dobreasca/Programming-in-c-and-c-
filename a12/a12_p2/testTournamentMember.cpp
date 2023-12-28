/*
  CH-230-A
  a12_p2.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
#include "TournamentMember.h"
using namespace std;

int main()
{
    TournamentMember tm1;
    tm1.printInformation();
    cout<<'\n';
    TournamentMember tm2("Cristiano", "Ronaldo", "1985-02-05", "Madrid", "Player", 1.87);
    tm2.printInformation();
    cout<<'\n';
    TournamentMember tm3(tm2);
    TournamentMember::changeLocation("Barcelona");
    tm3.printInformation();
    cout<<'\n';
    return 0;
}