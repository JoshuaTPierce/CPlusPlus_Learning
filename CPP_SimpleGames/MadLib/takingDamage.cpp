//Demonstrates Function Inlining

#include <iostream>
using namespace std;

int radiation(int health);

int main(){
	int health = 80;
cout << "Your health is " << health << "\n\n";

	health = radiation(health);
	cout << "After radiation exposure your health is " << health << "\n\n";

	health = radiation(health);	
	cout << "After radiation exposure your health is " << health << "\n\n";

	health = radiation(health);
	cout << "After radiation exposure your health is " << health << "\n\n";

	return 0;
}

inline int radiation(int health){
	return(health / 2);
}

/* 
By flagging the function with inline, you ask the compiler to copy the function
directly into the calling code. This saves the overhead of making the function
call. That is, program control doesn’t have to jump to another part of your code.
For small functions, this can result in a performance boost.
*/