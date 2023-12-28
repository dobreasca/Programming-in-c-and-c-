#ifndef Complex_h
#define Complex_h

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
    Complex add(Complex& number);
    Complex sub(Complex& number);
    Complex multiply(Complex& number);
    void print();
};

#endif /* Complex_h */
