/*
  CH-230-A
  a10_p7.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
    Naive string: the goal is to illustrate how copy constructors
    should be handled. See also charbuffer.cpp
*/

class NaiveString
{
private:
    char *str;
public:
    NaiveString(const char*);
    NaiveString(const NaiveString&);
    ~NaiveString();
    void update(char, char);
    void print();
};

NaiveString::NaiveString(const char* t)
{
    cout<<"first constructor is being called"<<'\n';
    str=new char[strlen(t)+1];
    strcpy(str, t);
}

/*
    Copy constructor: creates a new instance of
    naive string starting from an existing one
*/


NaiveString::NaiveString(const NaiveString& src)
{
    cout<<"the copy constructor is being called"<<'\n';
    str=new char[strlen(src.str)+1];
    strcpy(str, src.str);
    // please note that we can access src.str even if it is private
    // as we are inside the NaiveString class
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar)
{
    cout<<"the update constructor is being called"<<'\n';
    unsigned int i;
    for (i=0; i<strlen(str); i++)
        if (str[i]==oldchar)
            str[i]=newchar;
}

//the destructor frees the memory
NaiveString::~NaiveString()
{
    cout<<"the destructor is being called"<<'\n';
    delete [] str;
}

void NaiveString::print()
{
    cout<<"the printng constructor is being called"<<'\n';
    cout<<str<<endl;
}

void funcByVal(NaiveString s)
{
    cout<<"funcbyval() being called"<<endl;
    s.update('B', 'C');
    s.print();
}

//after calling funcbyref the string will be motified outside of the scope
void funcbyref(NaiveString& s)
{
    cout<<"funcbyref() being called"<<'\n';
    s.update('B', 'A');
    s.print();
}

int main(int argc, char** argv)
{
    NaiveString a("aBcBdB");
    a.print();
    cout<<"About to call funcbyval()"<<endl;
    funcByVal(a);
    a.print();
    
//the second object is called with the copy constructor
    NaiveString str(a);
    str.print();
    cout<<"About to call funcbyref()"<<'\n';
    funcbyref(str);
    str.print();
}
