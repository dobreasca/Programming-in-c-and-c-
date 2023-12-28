/*
  CH-230-A
  a13_p6.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v(20);
    int i;
    for(i=0; i<20; i++)
        v[i]=8;
    //initializes the first 20 elements of the vector with 8
    //try block
    try
    {
        v.at(20); //accesses the 21st element
    }
    //catch block
    //out_of_range error when trying to access an invalid index
    catch(out_of_range& e)
    {
        cerr<<e.what()<<'\n';
    }
    return 0;
}
