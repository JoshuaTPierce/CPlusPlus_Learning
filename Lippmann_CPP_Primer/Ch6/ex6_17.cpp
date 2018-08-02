/*
Exercise 6.17: Write a function to determine whether a string contains
any capital letters. Write a function to change a string to all lowercase. Do
the parameters you used in these functions have the same type? If so, why?
If not, why not?
*/

#include <string>
#include <iostream>
using namespace std;

bool hasCaps(const string &s){
	for(auto &c : s){
		if(c >= 'A' && c <= 'Z'){
			cout << "String has caps." << endl;
			return true; } 
		else {
			cout << "String does not have caps." << endl;
			return false; }
	}
}


void toLower(string &s){
	for(auto &c : s)
		if(c >= 'A' && c <= 'Z')
			c -= 'A' - 'a';
	cout << s << endl;
}

int main(){
	cout << "Enter a string" << endl;
	string input;
	cin >> input;
	hasCaps(input);
	toLower(input);
	
	cout << "Functions complete." << endl;

	return 0;
}
