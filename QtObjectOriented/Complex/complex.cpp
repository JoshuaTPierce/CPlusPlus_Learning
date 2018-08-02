#include "complex.h"
#include <iostream>
using namespace std;

//Constructor:

Complex::Complex(double realPart, double imPart) 
	: m_R(realPart), m_I(imPart){
		cout << "Complex(" << m_R << "," << m_I << ")" << endl;
}

Complex::Complex(double realPart) {
	Complex(realPart, 0); //call one constructor from another (Java style)
}

int main(){
	Complex C1; //uses default constructor
	Complex C2(3.14); //uses single-argument constructor
	Complex C3(6.2, 10.23); //uses two-argument constructor

	return 0;
}

/* 
The default constructor for this class gives default initialization to the two data
members of the object C1. That initialization is the same kind that would be given
to a pair of variables of type double in the following code fragment:
double x, y;
cout << x << '\t' << y << endl;