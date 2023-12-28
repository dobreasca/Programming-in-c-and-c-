/*
  CH-230-A
  a13_p5.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
public:
    D(): A(1), B(), C() {}
};
 
int main()
{
    D d;
    d.print();
    /*
     error: implicit default constructor for 'D' must explicitly initialize the 
            base class 'A' which does not have a default constructor
    > D doesn't have a default constructor so the compiler will call the hierarchical
      parents' default constructors.
    > since A doesn't have a default constructor an error will be generated when 
      creating an instance of D
    > to solve the error we either have to define a default constructor for A
     or a default constructor for D which calls the constructor with parameters
     for A
    > I chose to define the default constructor for D
    */
    return 0;
}