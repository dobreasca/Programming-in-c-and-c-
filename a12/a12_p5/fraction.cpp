#include <iostream>
#include "fraction.h"

using namespace std;
Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	// Implement GCD of two numbers;
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
	return a;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

//overloader for <<
ostream& operator<<(ostream &out, const Fraction &f)
{
    out<<f.num<<"/"<<f.den;
    return out;
}

//overloader for >>
istream& operator>>(istream &in, Fraction &frac)
{
    char sign;
    in>>frac.num>>sign>>frac.den;
    if(sign!='/' || frac.den==0)
    {
        cout<<"error\n";
        cout<<"the denomitor will be set by default to 1 :)"<<'\n';
        frac.den=1;
    }   
    return in;
}

//overloader for *
Fraction operator*(const Fraction& frac1, const Fraction& frac2)
{
//we multiply the numeratrs and the denomitors of each fraction
    return Fraction(frac1.num*frac2.num, frac1.den*frac2.den);
}

//overloader for /
Fraction operator/(const Fraction &frac1, const Fraction &frac2)
{
//we multiply the numerator of the first fraction with the denomitor of 
//the second fraction and the denomitor of the first fraction
//with the denomitor of the second fraction
    return Fraction(frac1.num*frac2.den, frac1.den*frac2.num);
}

//overloader for +
Fraction Fraction::operator+(const Fraction &frac)
{
    return Fraction(((num*lcm(den, frac.den)/den)+
    (frac.num*lcm(den, frac.den)/frac.den)), lcm(den, frac.den));
}

//overloader for -
Fraction Fraction::operator-(const Fraction &frac)
{
    return Fraction(((num*lcm(den, frac.den)/den)-
    (frac.num*lcm(den, frac.den)/frac.den)), lcm(den, frac.den));
}

//overloader for =
Fraction Fraction::operator=(const Fraction &frac)
{
    num=frac.num;
    den=frac.den;
    return *this;
} 

//overload for >
bool Fraction::operator>( Fraction &frac)
{
    num=num*frac.den;
    frac.num=frac.num*den;
    return((*this).num>frac.num);
}

//overload for <
bool Fraction::operator<(Fraction &frac)
{
    (*this).num=num*frac.den;
    frac.num=frac.num*(*this).den;
    return((*this).num<frac.num);
}