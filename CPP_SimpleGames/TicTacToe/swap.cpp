#include <iostream>
using namespace std;

void badSwap(int x, int y);
void goodSwap(int& x, int& y);

int main(){
	int myScore = 150;
	int yourScore = 1000;

	cout << "Original values " << endl;
	cout << "myScore: " << myScore << endl;
	cout << "yourScore: " << yourScore << endl;

	cout << "Calling badSwap()" << endl;
	badSwap(myScore, yourScore);
	cout << "myScore: " << myScore << endl;
	cout << "yourScore: " << yourScore << endl;

	cout << "Calling goodSwap()" << endl;
	goodSwap(myScore, yourScore);
	cout << "myScore: " << myScore << endl;
	cout << "yourScore: " << yourScore << endl;

	return 0;
}

void badSwap(int x, int y){
	int temp = x;
	x = y;
	y = temp;
}

void goodSwap(int& x, int& y){
	int temp = x;
	x = y;
	y = temp;
}

//It’s possible to give a function access to an argument variable by passing a
//parameter a reference to the argument variable. As a result, anything done to the
//parameter will be done to the argument variable. To pass by reference, you must
//first declare the parameter as a reference.

//You can tell that a call to goodSwap() passes both arguments by reference by
//looking at the function header:
//     void goodSwap(int& x, int& y)

//This means that when I call goodSwap() with the following line, the parameter x
//will refer to myScore and the parameter y will refer to yourScore.
//     goodSwap(myScore, yourScore);

//This means that x is just another name for myScore and y is just another name
//for yourScore. When goodSwap() executes and x and y exchange values, what
//really happens is that myScore and yourScore exchange values.

