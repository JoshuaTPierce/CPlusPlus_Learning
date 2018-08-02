#include <string>
#include <sstream>
#include <iostream>
using namespace std;

//------------Class Definition---------------

class Fraction {
public:
	void set(int numerator, int denominator);
	double toDouble() const;
	string toString() const;

private:
	int m_Numerator;
	int m_Denominator;
};

//-------------Member Function Definitions-----
void Fraction::set(int nn, int nd) {
	m_Numerator = nn;
	m_Denominator = nd;
}

double Fraction::toDouble() const {
	return 1.0 * m_Numerator / m_Denominator;
}

string Fraction::toString() const {
	ostringstream sstr; //stream to write to but that does not get output anywhere
	sstr << m_Numerator << "/" << m_Denominator;
	return sstr.str(); //convert the stream to a written string
}

//-----------------Main-----------------------
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