#include <cstdlib>
#include <iostream>
using namespace std;

class my_object {
	public:
		my_object(); //default constructor prototype
		~my_object(); //default destructor prototype

		void Set(int iValue);
		int GetI();

		void SetF(float fValue);
		int GetF();

	private:
		int i;
		float f;

};

//constructor and destructor definitions (same as other functions, using :: operator)

//constructor: every time class is instantiated, i and f are initialized to zero
my_object::my_object(){
	cout << "Entering constructor." << endl;
	i = 0;
	f = 0.0; 

//destructor: automatically destroys all memory associated with class instance after runtime
//would need to have some operation to write data to disk if the intent is to save the data
//automatic destruction helps program efficiency
my_object::~my_object() {
	cout << "Entering destructor." << endl;
}


void my_object::SetI(int iValue) {
	i = iValue;
}

int my_object::GetI() {
	return (i);
}

void my_object::SetF(float fValue) {
	f = fValue;
}

float my_object::GetF() {
	return (f);
}

int main(int argc, char *argv[]) {
	my_object anObject, anotherObject;

	anObject.SetI(10);
	anObject.SetF(3.14159);

	anotherObject.SetI(-10);
	anotherObject.SetF(0.123456);

	cout << "anObject.i = " << anObject.GetI() << endl;
	cout << "anObject.f = " << anObject.GetF() << endl;
	cout << "anotherObject.i = " << anotherObject.GetI() << endl;
	cout << "anotherObject.f = " << anotherObject.GetF() << endl;

	system("PAUSE");
	return (EXIT_SUCCESS);
}
