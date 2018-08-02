//Pass an argument by reference
//Set argument to 0

#include <iostream>
#include <vector>
using namespace std;

void reset(int &i){
	i = 0;
}


int main(){
	int j = 42;
	reset(j);
	cout << "j = " << j << endl;

	return 0;
}

/*
Recall that operations on a reference are actually operations on the object to which
the reference refers.

Reference parameters exploit this behavior. They are often used to allow a function to
change the value of one or more of its arguments.

As with any other reference, a reference parameter is bound directly to the object
from which it is initialized. When we call this version of reset, i will be bound to
whatever int object we pass. As with any reference, changes made to i are made to
the object to which i refers. In this case, that object is the argument to reset.

When we call this version of reset, we pass an object directly; there is no need to
pass its address.
*/