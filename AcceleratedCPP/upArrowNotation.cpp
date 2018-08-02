/* --------------------------------------------------------------------
[2018-07-09] Challenge #365: Up-arrow Notation

Knuth's up-arrow notation is used to represent repeated operations.

In this notation a single ↑ operator corresponds to iterated 
multiplication. For example:
2 ↑ 4 = ?
= 2 * (2 * (2 * 2)) 
= 2^4
= 16

While two ↑ operators correspond to iterated exponentiation. For example:

2 ↑↑ 4 = ?
= 2 ↑ (2 ↑ (2 ↑ 2))
= 2^2^2^2
= 65536

Write a program that can calculate up-arrow notation expressions 
--------------------------------------------------------------------- */

#include <iostream>
#include <math.h>
using namespace std;

unsigned long upArrow(int arrowCount, unsigned long int1, unsigned long int2){
	if(arrowCount == 1){
		return pow(int1, int2); }

	else if(arrowCount == 2){
		return pow((pow(int1, int2)), int2); }

	else {
		return 1;
		cout << "Error: enter 1 or 2 for arrow count" << endl;  }  
}

int main(){
	int arrowCount;	
	int firstInt;
	int secondInt;
	int answer; 
	
	cout << "Enter number of up-arrow operators (1 or 2): " << endl;
	cin >> arrowCount;

	cout << "Enter two integers: " << endl;
	cin >> firstInt >> secondInt;

	answer = upArrow(arrowCount, firstInt, secondInt);

	cout << firstInt << " ^ " << secondInt << " equals " << answer << endl;

	return 0;

}
