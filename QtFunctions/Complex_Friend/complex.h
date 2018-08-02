#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex {
	//binary non-member friend function declarations
	friend ostream& operator<<(ostream& out, const Complex& c);
	friend Complex operator-(const Complex& c1, const Complex & c2);
	friend Complex operator*(const Complex& c1, const Complex & c2);
	friend Complex operator/(const Complex& c1, const Complex & c2);	

public:
	Complex(double re = 0.0, double im = 0.0);

	//binary member function operators
	Complex& operator+= (const Complex& c);
	Complex& operator-= (const Complex& c);
	Complex operator+ (const Complex & c2);

private:
	double m_Re, m_Im;
};


#endif