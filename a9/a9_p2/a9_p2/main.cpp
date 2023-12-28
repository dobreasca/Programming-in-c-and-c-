/*
  CH-230-A
  a9_p2.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    double x;
    char s[41];
//we declared our variables
    cin>>n>>x;
    cin.get();
    cin.get(s, 41);
    for(i=1; i<=n; i++)
//we iterate ffrom 1 till n
    {
        cout<<s;
        cout<<":"<<x<<'\n';
//we print s and x for n times
    }
    return 0;
}
