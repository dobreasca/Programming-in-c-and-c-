/*
  CH-230-A
  a9_p4.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
#include <cstring>

using namespace std;

int mycount(int x, int y)
{
    return y-x;
}

int mycount(char c, char s[])
{
    int i, n, cnt=0;
    n=strlen(s);
//n is the length of the string
    for(i=0; i<n; i++)
        if(c==s[i])
//if we find our character in the string we increase the counter
            cnt++;
    return cnt;
}

int main()
{
    int x, y;
    x=7;
    y=3;
    cout<<mycount(x, y)<<'\n';
    char c, s[41];
    c='a';
    strcpy(s, "ana has apples");
    cout<<mycount(c, s)<<'\n';
    return 0;
}
