// 			Passing References for Efficiency
// Passing a variable by value creates some overhead because you must copy the
// variable before you assign it to a parameter. When we’re talking about variables
// of simple, built-in types, such as an int or a float, the overhead is negligible.

// But a large object, such as one that represents an entire 3D world, could be
// expensive to copy. Passing by reference, on the other hand, is efficient because
// you don’t make a copy of an argument variable. Instead, you simply provide
// access to the existing object through a reference.
//////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//parameter vec is a constant reference to a vector of strings
void display(const vector<string>& vec);

int main(){
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	display(inventory);

	return 0;
}

//parameter vec is a constant reference to a vector of strings
void display(const vector<string>& vec){
	cout << "Your items: " << endl;
	for(vector<string>::const_iterator iter = vec.begin(); iter != vec.end(); ++iter) {
		cout << *iter << endl;
	}
}
