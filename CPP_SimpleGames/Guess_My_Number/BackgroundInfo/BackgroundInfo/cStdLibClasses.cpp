#include <iostream>
#include <cstdlib>
using namespace std;

class my_object {
	public
		int i;
		float f;
};

int main(int argc, char *argv[]){
	my_object anObject, anotherObject; //instantiate class
	
	anObject.i = 10;
	anObject.f = 3.14159;
	
	anotherObject.i = -10;
	anotherObject.f = -3.14159;

	cout << "anObject.i = " << anObject.i << endl;
	cout << "anotherObject.i = " << anotherObject.i << endl;

	cout << "anObject.f = " << anObject.f << endl;
	cout << "anotherObject.f = " << anotherObject.f << endl;

	system("PAUSE");
	return(EXIT_SUCCESS);
}
