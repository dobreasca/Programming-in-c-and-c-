/*
  CH-230-A
  a13_p4.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B:  public virtual A
{
public:
  B()  { setX(10); }
};
 
class C:  public virtual A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
    /*
    error:"D::print" is ambigous
    >multiple inheritance creates ambiguity for the methods inherited from both classes
    >since print() is originally inherited from A, calling it will create ambiguity 
     as the compiler won't know to which print() we refer(B or C)
    >the error is fixed by B and C being virtually inherited from A, because only one of
     the methods gets inherited and no duplicates are formed
    */
    return 0;
}