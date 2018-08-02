#include "fraction.h"
#include <iostream>

int main() {
	const int DASHES = 30; 
	using namespace std;
	//nested scope: inner block
	{
		int i;
		for(i = 0; i < DASHES; ++i)
			cout << "=";
		cout << endl;
	}

	Fraction f1, f2;
	f1.set(3, 4);
	f2.set(11, 12);

	cout << "The first fraction is: " << f1.toString() << endl;
	cout << "\nThe second fraction, expressed as a double, is: " << f2.toDouble() << endl;

	return 0;
}