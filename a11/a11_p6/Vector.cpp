#include <iostream>
#include <cmath>
#include "Vector.h"
using namespace std;

//default constructor
Vector::Vector()
{
    size=0;
    arr=NULL;
}

//constructor with all the parameters
Vector::Vector(int newsize, double *newarr)
{
    size=newsize;
    arr=newarr;
}

//copy constructor
Vector::Vector(const Vector& v)
{
    arr=new double[v.size];
    size=v.size;
    for(int i=0; i<v.size; i++)
        arr[i]=v.arr[i];
}

//destructor
Vector::~Vector()
{
    delete [] arr;
}

//setter for size
void Vector::setSize(int newsize)
{
    size=newsize;
}

//setter for arr
void Vector::setArr(double *newarr)
{
    arr=newarr;
}

//getter for size
int Vector::getSize() const
{
    return size;
}

//getter for arr
double* Vector::getArr() const
{
    return arr;
}

void Vector::printc()
{
    for(int i=0; i<getSize(); i++)
        cout<<getArr()[i]<<" ";
    cout<<'\n';
}

double Vector::norm()
{
    double summ=0, n;
    for(int i=0; i<getSize(); i++)
        summ+=(getArr()[i]*getArr()[i]);
    n=sqrt(summ);
    return n;
}

Vector Vector::add(const Vector& v) const
{
    double *ptr=new double[v.size];
    Vector addition(v.size, ptr);
    for(int i=0; i<v.size; i++)
        ptr[i]=getArr()[i]+v.getArr()[i];
    return addition;
}

Vector Vector::diff(const Vector& v) const
{
    double *ptr=new double[v.size];
    Vector difference(v.size, ptr);
    for(int i=0; i<v.size; i++)
        ptr[i]=getArr()[i]-v.getArr()[i];
    return difference;
}

double Vector::scalar_prod(const Vector& v) const
{
    double summ=0;
    for(int i=0; i<v.size; i++)
        summ+=(getArr()[i]*v.getArr()[i]);
    return summ;
}
