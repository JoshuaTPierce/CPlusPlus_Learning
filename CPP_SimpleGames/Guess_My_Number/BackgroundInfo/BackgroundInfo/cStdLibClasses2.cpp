#include <cstdlib>
#include <iostream>
using namespace std;

class my_object {
	public:  //member function prototypes
		void SetI(int iValue);
		int GetI(); 

		void SetF(float fValue);
		float GetF();

	private:
		int i;
		float f;

};

//define functions outside class declaration using scope resolution operator
//setters and getters, similar to Java

void my_object::SetI(int iValue){
	i = iValue;
}

int my_object::GetI(){
	return(i);
}

void my_object::SetF(float fValue){
	f = fValue;
}

float my_object::GetF(){
	return(f);
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
