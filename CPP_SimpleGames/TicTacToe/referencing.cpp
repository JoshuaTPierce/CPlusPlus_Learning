// The Referencing program demonstrates references. The program declares and
// initializes a variable to hold a score and then creates a reference that refers to the
// variable. The program displays the score using the variable and the reference to
// show that they access the same single value. Next, the program shows that this
// single value can be altered through either the variable or the reference.

#include <iostream>
using namespace std;

int main(){
	int myScore = 1000;
	int& mikesScore = myScore; //create a reference

	cout << "myScore is: " << myScore << endl;
	cout << "mikesScore is: " << mikesScore << endl;

	cout << "Adding 500 to myScore\n";
	myScore += 500;

	cout << "myScore is: " << myScore << "\n";
	cout << "mikesScore is: " << mikesScore << "\n\n";

	cout << "Adding 500 to mikesScore\n";
	mikesScore += 500;

	cout << "myScore is: " << myScore << "\n";
	cout << "mikesScore is: " << mikesScore << "\n\n";

	return 0;
}
