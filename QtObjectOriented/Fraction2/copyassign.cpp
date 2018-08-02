#include <iostream>
#include "fraction.h"

int main(){
	using namespace std;
	
	Fraction twothirds(2,3);
	Fraction threequarters(3,4); //2-arg constructor
	
	Fraction acopy(twothirds); //copy constructor
	Fraction f4 = threequarters; //copy constructor
	cout << "after declarations" ;
	Fraction::report();

	f4 = twothirds; //assignment operator
	cout << "before multiply" ;
	Fraction::report();

	f4 = twothirds.multiply(threequarters); //many objects get created here
	cout << "after multiply" ;
	Fraction::report();

	return 0;
}