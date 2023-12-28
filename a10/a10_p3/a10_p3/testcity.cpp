/*
  CH-230-A
  a10_p3.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
#include <cstdlib>
#include "City.h"
using namespace std;

int main()
{
    City Bremen, Paris, London;
    string name, mayor;
    int inhabitants;
    double area;
    cout<<'\n'<<"Please enter data for Bremen:"<<'\n';
    cout<<"Name: "<<'\n';
    getline(cin, name);
    Bremen.setName(name);
    cout<<"Number of inhabitants:"<<'\n';
    cin>>inhabitants;
    Bremen.setInhabitants(inhabitants);
    cout<<"Mayor: "<<'\n';
    cin.get();
    getline(cin, mayor);
    Bremen.setMayor(mayor);
    cout<<"Area:"<<'\n';
    cin>>area;
    Bremen.setArea(area);
    cout<<"Bremen:"<<'\n';
    Bremen.print();
    
    cout<<'\n'<<"Please enter data for Paris:"<<'\n';
    cout<<"Name: "<<'\n';
    cin.get();
    getline(cin, name);
    Paris.setName(name);
    cout<<"Number of inhabitants:"<<'\n';
    cin>>inhabitants;
    Paris.setInhabitants(inhabitants);
    cout<<"Mayor: "<<'\n';
    cin.get();
    getline(cin, mayor);
    Paris.setMayor(mayor);
    cout<<"Area:"<<'\n';
    cin>>area;
    Paris.setArea(area);
    cout<<"Paris:"<<'\n';
    Paris.print();
    
    cout<<'\n'<<"Please enter data for London:"<<'\n';
    cout<<"Name: "<<'\n';
    cin.get();
    getline(cin, name);
    London.setName(name);
    cout<<"Number of inhabitants:"<<'\n';
    cin>>inhabitants;
    London.setInhabitants(inhabitants);
    cout<<"Mayor: "<<'\n';
    cin.get();
    getline(cin, mayor);
    London.setMayor(mayor);
    cout<<"Area:"<<'\n';
    cin>>area;
    London.setArea(area);
    cout<<"London:"<<'\n';
    London.print();
    return 0;
}
