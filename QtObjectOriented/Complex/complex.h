//Demonstrates a class with multiple constructors

#ifndef _COMPLEX_H_
#define _COMPLEX_H_

class Complex {
public:
	Complex(double realPart; double imPart);
	Complex(double realPart);
	Complex();

private:
	double m_R, m_I;
}

#endif