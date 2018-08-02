#include "complex.h"
#include <iostream>

Complex& Complex::operator+=(const Complex& c){
	m_Re += c.m_Re;
	m_Im += c.m_Im;
	return *this;

	Complex Complex::operator+(const Complex& c2) {
		return Complex(m_Re + c2.m_Re, m_Im + c2.m_Im);
}

	Complex& Complex::operator-=(const Complex& c) {
		m_Re -= c.m_Re;
		m_Im -= c.m_Im;
		return *this;
}

ostream& operator<<(ostream& out, const Complex& c) {
	out << '(' << c.m_Re << ',' << c.m_Im << ')' ;
	return out;
}

Complex operator-(const Complex& c1, const Complex& c2) {
	return Complex(c1.m_Re - c2.m_Re, c1.m_Im - c2.m_Im);
}
