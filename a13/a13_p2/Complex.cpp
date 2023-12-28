#include <iostream>
#include "Complex.h"

//it sets the real and imaginary parts to 0,
//as said in the problem
Complex::Complex()
{
    real_part=0;
    imaginary_part=0;
}

//it sets the real and imaginary parts to the supplied parameters
Complex::Complex(int newreal, int newimaginary)
{
    real_part=newreal;
    imaginary_part=newimaginary;
}

//copy constructor
Complex::Complex(Complex& number)
{
    real_part=number.real_part;
    imaginary_part=number.imaginary_part;
    
}

//destructor
Complex::~Complex()
{
    //it is empty as the problem said
}

//setter for real part
void Complex::setReal(int newreal)
{
    real_part=newreal;
}

//setter for imaginary part
void Complex::setImaginary(int newimaginary)
{
    imaginary_part=newimaginary;
}

//getter for real part
int Complex::getReal()
{
    return real_part;
}

//getter for imaginary part
int Complex::getImaginary()
{
    return imaginary_part;
}

//the conjugate of a complex number
Complex Complex::conjugate()
{
    Complex aux;
    aux.real_part=real_part;
    aux.imaginary_part=imaginary_part*(-1);
    return aux;
}

//adds 2 complex numbers by adding the real parts and the imaginary parts
//overloading +
Complex Complex::operator+(const Complex &z)
{
    Complex aux;
    aux.real_part=real_part+z.real_part;
    aux.imaginary_part=imaginary_part+z.imaginary_part;
    return aux;
}

//substitutes 2 complex numbers by subtituting the real parts and the imginary parts
//overloading -
Complex Complex::operator-(const Complex &z)
{
    Complex aux;
    aux.real_part=real_part-z.real_part;
    aux.imaginary_part=imaginary_part-z.imaginary_part;
    return aux;
}

//multiplies 2 complex numbers with the formula given in the problem
//overloading *
Complex operator*(const Complex& z1, const Complex& z2)
{
    Complex aux;
    aux.real_part=(z1.real_part*z2.real_part)-
        (z1.imaginary_part*z2.imaginary_part);
    aux.imaginary_part=(z1.real_part*z2.real_part)+
        (z1.imaginary_part*z2.imaginary_part);
    return aux;
}
//overloader for <<
ostream& operator<<(ostream &out, const Complex &z)
{
//we check the imaginary part's sign in order to print the number correctly
    if(z.imaginary_part>=0)
        out<<z.real_part<<"+"<<z.imaginary_part<<"i";
    else
        out<<z.real_part<<"-"<<(-1)*z.imaginary_part<<"i";
    return out;
}

//overloader for >>
istream& operator>>(istream &in, Complex &z)
{
    char sign, i;
    in>>z.real_part>>sign>>z.imaginary_part>>i;
    if(i!='i' && (sign!='+' || sign!='-'))
    {
        cout<<"wrong input"<<'\n';
        if(i!='i')
        {
            cout<<"the letter is transformed to i"<<'\n';
            i='i';
        }
    }
    if(sign=='-')
        z.imaginary_part=(-1)*z.imaginary_part;
    return in;
}

//overloading =
Complex Complex::operator=(const Complex &z)
{
    real_part=z.real_part;
    imaginary_part=z.imaginary_part;
    return *this;
}
