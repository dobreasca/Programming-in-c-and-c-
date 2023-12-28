/*
  CH-230-A
  a10_p2.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
#include <cstdlib>
#include "Critter.h"
using namespace std;

int main(int argc, char** argv)
{
    Critter c;
    string name, emotion, favbook;
    int hunger;
    cout<<endl<<"Please enter data: "<<endl;
    cout<<"Name: ";
    // cin >> name; will not work if name contains
    // spaces
    getline(cin, name);
    c.setName(name);
    cout<<"Hunger: ";
    cin>>hunger;
    c.setHunger(hunger);
    cout<<"How are you feeling?"<<'\n';
    cin>>emotion;
    c.setEmotion(emotion);
    cout<<"What is your favourite book?"<<'\n';
    cin.get();
    getline(cin, favbook);
//the book title may contain spaces so we have to use getline
    c.setFavBook(favbook);
    cout<<"You have created:"<< endl;
    c.print();
        return 0;
}

/*

a)

When commenting the line 12 (the line containg using namespace std) the compiler
will produce a set of errors. Due to the missing namespace, the compiler outputs
that the objects cin, cout, string and endl weren't declared in the scope.
When declared inside a namespace block, objects are placed inside named scopes
in order to prevent them from being mistaken with symbols in other scopes
that have the same name.
Thus, we can only use the objects mentioned above by writing the code line
"using namespace std" or by prepending the objects with "std::"


b)

When commenting the "Critter::" prefixes the compiler will produce an error.
The error states that "name" wasn't declared in the scope. "name" is declared
as a private membler of the class. When implementing a method for a class it
is not necessary to use the selection operator to access data members or
to call methods of the same class. Since we commented the "Critter::" prefix,
the compiler doesn't know the class our method belongs to. So, we can't access
other data members or methods from the class.
Thus, we can fix the error by prepending "Critter::" to the method definition,
making the data member public or writing the method definition inside header
file.


*/
