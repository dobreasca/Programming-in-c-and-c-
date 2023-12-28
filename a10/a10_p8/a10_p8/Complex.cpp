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
Complex Complex::add(Complex& number)
{
    Complex aux;
    aux.real_part=real_part+number.real_part;
    aux.imaginary_part=imaginary_part+number.imaginary_part;
    return aux;
}

//substitutes 2 complex numbers by subtituting the real parts and the imginary parts
Complex Complex::sub(Complex& number)
{
    Complex aux;
    aux.real_part=real_part-number.real_part;
    aux.imaginary_part=imaginary_part-number.imaginary_part;
    return aux;
}

//multiplies 2 complex numbers with the formula given in the problem
Complex Complex::multiply(Complex& number)
{
    Complex aux;
    aux.real_part=(real_part*number.real_part)-
        (imaginary_part*number.imaginary_part);
    aux.imaginary_part=(real_part*number.real_part)+
        (imaginary_part*number.imaginary_part);
    return aux;
}

void Complex::print()
{
//we check the imaginary part's sign in order to print the number correctly
    if(imaginary_part>=0)
        cout<<real_part<<"+"<<imaginary_part<<"i"<<'\n';
    else
        cout<<real_part<<"-"<<(-1)*imaginary_part<<"i"<<'\n';
}
