// Inventory Pointer
// Demonstrates returning a pointer

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//returns a pointer to a string element
string* ptrToElement(vector<string>* const pVec, int i);

int main(){
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	//displays string object that the returned pointer points to
	cout << "Sending the objected pointed to by returned pointer:\n";
	cout << *(ptrToElement(&inventory, 0)) << "\n\n";
	
	//assigns one pointer to another - - inexpensive assignment
	cout << "Assigning the returned pointer to another pointer.\n";
	string* pStr = ptrToElement(&inventory, 1);
	cout << "Sending the object pointed to by new pointer to cout:\n";
	cout << *pStr << "\n\n";

	//copies a string object - - expensive assignment
	cout << "Assigning object pointed by pointer to a string object.\n";
	string str = *(ptrToElement(&inventory, 2));
	cout << "Sending the new string object to cout:\n";
	cout << str << "\n\n";

	//altering the string object through a returned pointer
	cout << "Altering an object through a returned pointer.\n";
	*pStr = "Healing Potion";
	cout << "Sending the altered object to cout:\n";
	cout << inventory[1] << endl;

	return 0;
}

string* ptrToElement(vector<string>* const pVec, int i){
	//returns address of the string in position i of vector that pVec points to
	return &((*pVec)[i]);
}

/*
Returning a Pointer
Before you can return a pointer from a function, you must specify that you’re
returning one.

By starting the header with string*, I’m saying that the function will return a
pointer to a string object (and not a string object itself). To specify that a
function returns a pointer to an object of a particular type, put an asterisk after
the type name of the return type.

The body of the function ptrToElement() contains only one statement, which
returns a pointer to the element at position i in the vector pointed to by pVec.
return &((*pVec)[i]);

The return statement might look a little cryptic, so I’ll step through it.
Whenever you come upon a complex expression, evaluate it like the computer
does—by starting with the innermost part. I’ll start with (*pVec)[i], which
means the element in position i of the vector pointed to by pVec. By applying
the address of operator (&) to the expression, it becomes the address of the
element in position i of the vector pointed to by pVec.

After I create inventory, a vector of items, I display a value with a returned
pointer.
cout << *(ptrToElement(&inventory, 0)) << "\n\n";

The preceding code calls ptrToElement(), which returns a pointer to inventory[0].
(Remember, ptrToElement() doesn’t return a copy of one of the elements of
inventory; it returns a pointer to one of them.) The line then sends the string
object pointed to by the pointer to cout. As a result, sword is displayed.

Assigning a Returned Pointer to a Pointer
Next I assign a returned pointer to another pointer with the following line.
string* pStr = ptrToElement(&inventory, 1);

The call to prtToElement() returns a pointer to inventory[1]. The statement
assigns that pointer to pStr. This is an efficient assignment because assigning a
pointer to a pointer does not involve copying the string object.

To help you understand the results of this line of code, look at Figure 7.5, which
shows a representation of pStr after the assignment. (Note that the figure is
abstract because the vector inventory doesn’t contain the string literals "sword",
"armor", and "shield"; instead, it contains string objects.)