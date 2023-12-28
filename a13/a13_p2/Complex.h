#ifndef Complex_h
#define Complex_h
#include <ostream>
#include <istream>
using namespace std;

class Complex
{
private:
    int real_part, imaginary_part;
public:
//constructors
    Complex();
    Complex(int newreal, int newimaginary);
    Complex(Complex& number);
//destructor
    ~Complex();
//setters
    void setReal(int newreal);
    void setImaginary(int newimaginary);
//getters
    int getReal();
    int getImaginary();
//service methods
    Complex conjugate();
    friend ostream& operator<<(ostream &out, const Complex &z);
    friend istream& operator>>(istream &in, Complex &z);
    friend Complex operator*(const Complex& z1, const Complex& z2);
    Complex operator-(const Complex &z);
    Complex operator+(const Complex &z);
    Complex operator=(const Complex &z);
};

#endif /* Complex_h */
