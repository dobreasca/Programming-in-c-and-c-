#include <iostream>
#include <cstring>
#include "TournamentMember.h"

using namespace std;

string TournamentMember::location="default";

//default constructor
TournamentMember::TournamentMember()
{
    cout<<"the default constructor is being called"<<'\n';
    firstname="default first name";
    lastname="default last name";
    dob="yyyy-mm-dd";
    role="default";
    height=0;
}

//constructor with all the parameters
TournamentMember::TournamentMember(const char* nfn, const char* nln, 
    const char* ndob, string nloc, string nrole, double nheight)
{
    cout<<"the constructor with all the parameters is being called"<<'\n';
    firstname=nfn;
    lastname=nln;
    dob=ndob;
    setLocation(nloc);
    role=nrole;
    height=nheight;
}

//copy constructor
TournamentMember::TournamentMember(const TournamentMember& tm)
{
    cout<<"the copy constructor is being called"<<'\n';
    firstname=tm.firstname;
    lastname=tm.lastname;
    dob=tm.dob;
    setLocation(tm.location);
    role=tm.role;
    height=tm.height;
}

//destructor
TournamentMember::~TournamentMember()
{
    cout<<"destructor is being called"<<'\n';
}

//setter for first name
inline void TournamentMember::setFirstName(char* newfn)
{
    firstname=newfn;
}

//setter for last name
inline void TournamentMember::setLastName(char* newln)
{
    lastname=newln;
}

//setter for date of birth
inline void TournamentMember::setDateOfBirth(char* newdob)
{
    dob=newdob;
}

//setter for location
inline void TournamentMember::setLocation(string newloc)
{
    location=newloc;
}

//setter for role
inline void TournamentMember::setRole(string newrole)
{
    role=newrole;
}

//setter for height
inline void TournamentMember::setHeight(double newheight)
{
    height=newheight;
}

//getter for first name
inline const char* TournamentMember::getFirstName() const
{
    return firstname;
}

//getter for last name
inline const char* TournamentMember::getLastName() const
{
    return lastname;
}

//getter for date of birth
inline const char* TournamentMember::getDateOfBirth() const
{
    return dob;
}

//getter for location
inline string TournamentMember::getLocation() const
{
    return location;
}

//getter for role
inline string TournamentMember::getRole() const
{
    return role;
}

//getter for height
inline double TournamentMember::getHeight() const
{
    return height;
}

//method for printing
void TournamentMember::printInformation()
{
    cout<<"You have created the following tournament member:"<<'\n';
    cout<<"first name: "<<getFirstName()<<'\n';
    cout<<"last name: "<<getLastName()<<'\n';
    cout<<"date of birth: "<<getDateOfBirth()<<'\n';
    cout<<"role: "<<getRole()<<'\n';
    cout<<"height: "<<getHeight()<<'\n';
    cout<<"tournament location: "<<getLocation()<<'\n';
}

//method for changing the location
void TournamentMember::changeLocation(string newloc)
{
    cout<<"the location is changed"<<'\n';
    location=newloc;
}