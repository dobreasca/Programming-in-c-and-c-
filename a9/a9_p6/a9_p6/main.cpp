/*
  CH-230-A
  a9_p6.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int n;
int myfirst(int v[])
{
    int i;
    for(i=0; i<n; i++)
        if(v[i]%2==0 && v[i]>0)
            return v[i];
//if the function didn't return a value in the for loop it will return -1
    return -1;
}

double myfirst(double v[])
{
    int i;
    for(i=0; i<n; i++)
        if(v[i]<0 && (v[i]-floor(v[i])==0))
//floor returns the integer part of the double
//so if the difference between the number and its integer part
//is 0 it means that the number doesn't have a fractional part
            return v[i];
//if the function didn't return a value in the for loop it will return -1.1
    return -1.1;
}

char myfirst(char s[])
{
    char vowels[]="aeiouAEIOU";
    int i;
    for(i=0; i<n; i++)
        if(strchr(vowels, s[i])==0)
//we check if the character is a consonant
//by searching it in the vowel string
            return s[i];
//if the function didn't return a value in the for loop it will return '0'
    return '0';
}

int main()
{
    int i, v[101];
    double a[101];
    char s[101];
    
    cin>>n;
    for(i=0; i<n; i++)
        cin>>v[i];
    for(i=0; i<n; i++)
        cin>>a[i];
    cin.get();
    for(i=0; i<n; i++)
        cin>>s[i];
    
    cout<<"calling myfirst() for integers: "<<'\n';
    cout<<myfirst(v)<<'\n';
    cout<<"calling myfirst() for doubles: "<<'\n';
    cout<<myfirst(a)<<'\n';
    cout<<"calling myfirst() for chars: "<<'\n';
    cout<<myfirst(s)<<'\n';
    
    return 0;
}
