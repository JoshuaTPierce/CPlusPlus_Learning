#ifndef _FRACTION_H_
#define _FRACTION_H_

class Fraction {
public:
	Fraction(int n, int d) : m_Numer(n), m_Denom(d) {++ctors}

	Fraction(const Fraction& other) : m_Numer(other.m_Numer),
		m_Denom(other.m_Denom) {++copies}

	Fraction& operator=(const Fraction& other){
		m_Numer = other.m_Numer;
		m_Denom = other.m_Denom;
		++assigns;
		return *this;
	}

	Fraction multiply(Fraction f2){
		return Fraction(m_Numer*f2.m_Numer, m_Denom*f2.m_Denom);
	}

	static void report;	

private:
	int m_Numer, m_Denom;
	static int assigns;
	static int copies;
	static int ctors;
};