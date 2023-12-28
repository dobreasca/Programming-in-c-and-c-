// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

#include <ostream>
#include <istream>
using namespace std;

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator
	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);
public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
    //operator overloaders
    friend ostream& operator<<(ostream &out, const Fraction &frac);
    friend istream& operator>>(istream &in, Fraction &frac);
    friend Fraction operator*(const Fraction& frac1, const Fraction& frac2);
    friend Fraction operator/(const Fraction &frac1, const Fraction &frac2);
    Fraction operator+(const Fraction &frac);
    Fraction operator-(const Fraction &frac);
    Fraction operator=(const Fraction &frac);
    bool operator>(Fraction &frac);
    bool operator<(Fraction &frac);
};

#endif /* FRACTION_H_ */