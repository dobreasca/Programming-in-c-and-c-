/*
  CH-230-A
  a9_p8.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
using namespace std;

void subtract_max(int *v, int n)
{
    int maxi=v[0], i;
    for(i=1; i<n; i++)
        if(v[i]>maxi)
            maxi=v[i];
//we determined the maximum value
    for(i=0; i<n; i++)
        v[i]-=maxi;
//we subtracted the maximum value from every element
}

void deallocate(int *v)
{
    delete v;
}

int main()
{
    int n, *v, i;
    cin>>n;
    v=new int[n];
//we allocated memory for v
    for(i=0; i<n; i++)
        cin>>v[i];
    cout<<"The array before calling subtract_max():"<<'\n';
    for(i=0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<'\n';
    subtract_max(v, n);
    cout<<"The array after calling subtract_max():"<<'\n';
    for(i=0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<'\n';
    deallocate(v);
//we deallocated the memory with the function that we created
    return 0;
}
