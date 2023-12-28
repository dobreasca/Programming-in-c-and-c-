/*
  CH-230-A
  a13_p7.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
*/

#include <iostream>
#include <string>
using namespace std;

class OwnException: public exception
{
    private:
        string except;
    public:
    //constructor with parameters
        OwnException(string newexcept)
        {
            except=newexcept;
        }
    //ovewritten what()
        virtual const char* what() const noexcept 
        {
            return "OwnException \n";
        }
};

void throwException (int input)
{
    //we create different cases for the cases mentioned in the problem
    switch(input)
    {
        case 1:
            throw 'a';
            break;
        case 2:
            throw 12;
            break;
        case 3:
            throw true;
        default:
            throw OwnException("Default case exception");
            break;
    }
}

int main()
{
    int i;
    for(i=1; i<=4; i++)//goes through all the possible cases
    {
        try
        {
            throwException(i);
        }
        catch(char e)
        {
            cerr<<"Caught in main: "<<e<<'\n';
        }
        catch(int e)
        {
            cerr<<"Caught in main: "<<e<<'\n';
        }
        catch(bool e)
        {
            cerr<<"Caught in main: "<<e<<'\n';
        }
        catch(OwnException& e)
        {
            cerr<<"Caught in main: "<<e.what()<<'\n';
        }
    }
    return 0;
}