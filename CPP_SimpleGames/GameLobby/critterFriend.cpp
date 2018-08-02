
#include <iostream>
#include <string>
using namespace std;

class Critter {
//make following global functions friends of the Critter class:
	friend void Peek(const Critter& aCritter);
	friend ostream& operator <<(ostream& os, const Critter& aCritter);

	public:
	Critter(const string& name = "");

	private:
	string m_Name;	
};

Critter::Critter(const string& name) : m_Name(name) {}

void Peek(const Critter& aCritter);
ostream& operator<<(ostream& os, const Critter& aCritter);

int main(){
	Critter crit("Poochie");

	cout << "Calling Peek() to access crit's private data member, m_Name" << endl;
	cout << crit;

	return 0;
}

//global friend function which can access all of a Critter object's members
void Peek(const Critter& aCritter){
	cout << aCritter.m_Name << endl;
}

//global friend function which can access access all of Critter object's members
//overloads the << operator so you can send a Critter object to cout
ostream& operator << (ostream& os, const Critter& aCritter){
	os << "Critter Object- " << endl;
	os << "m_Name: " << aCritter.m_Name << endl;
	return os;
}

//----------------------Notes----------------------------
/*               Creating Friend Functions
A friend function can access any member of a class of which it’s a friend. You
specify that a function is a friend of a class by listing the function prototype
preceded by the keyword friend inside the class definition. That’s what I do
inside the Critter definition with the following line, which says that the global
function Peek() is a friend of Critter.
friend void Peek(const Critter& aCritter);
This means Peek() can access any member of Critter even though it’s not a
member function of the class. Peek() takes advantage of this relationship by
accessing the private data member m_Name to display the name of a critter passed
to the function.
void Peek(const Critter& aCritter)
{
cout << aCritter.m_Name << endl;
}
When I call Peek() in main() with the following line, the private data member
m_Name of crit is displayed and Poochie appears on the screen.
Peek(crit);

				Overloading Operators
Overloading operators might sound like something you want to avoid at all
costs—as in, “Look out, that operator is overloaded and she’s about to blow!”—
but it’s not. Operator overloading lets you give meaning to built-in operators
used with new types that you define. For example, you could overload the *
operator so that when it is used with two 3D matrices (objects instantiated from
some class that you’ve defined), the result is the multiplication of the matrices.
To overload an operator, define a function called operatorX, where X is the
operator you want to overload. That’s what I do when I overload the << operator;
I define a function named operator<<.
ostream& operator<<(ostream& os, const Critter& aCritter)
{
os << "m_Name: " << aCritter.m_Name;
return os;
}

The function overloads the << operator so that when I send a Critter object with
the << to cout, the data member m_Name is displayed. Essentially, the function
allows me to easily display Critter objects. The function can directly access the
private data member m_Name of a Critter object because I made the functionfriend of the Critter class with the following line in Critter :
friend ostream& operator<<(ostream& os, const Critter& aCritter);
This means I can simply display a Critter object by sending it to cout with the
<< operator, which is what I do in main() with the following line, which displays
the text Critter Object – m_Name: Poochie.
cout << crit;
