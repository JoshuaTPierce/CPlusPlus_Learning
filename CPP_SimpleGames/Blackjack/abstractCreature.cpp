/* The Abstract Creature program demonstrates abstract classes. In the program, I
define an abstract class, Creature, which can be used as a base class for specific
creature classes. I define one such class, Orc. Then, I instantiate an Orc object
and call a member function to get the orc to grunt hello and another member
function to display the orc’s health. */

#include <iostream>
using namespace std;

class Creature { //abstract creature class
public:
	Creature(int health = 100);
	virtual void Greet() const = 0; //pure virtual member function
	virtual void DisplayHealth() const;

protected:
	int m_Health;

};

Creature::Creature(int health) : m_Health(health) {}

void Creature::DisplayHealth() const {
	cout << "Health: " << m_Health << endl;
}

class Orc : public Creature {
public:
	Orc(int health = 120);
	virtual void Greet() const;
};

Orc::Orc(int health) : Creature(health) {}

void Orc::Greet() const{
	cout << "The orc grunts hello." << endl;
}

int main() {
	Creature* pCreature = new Orc();
	pCreature->Greet();
	pCreature->DisplayHealth();

	return 0;

}

//-----------------------------Notes-------------------------
/* Declaring Pure Virtual Functions
A pure virtual function is one to which you don’t need to give a definition. The
logic behind this is that there might not be a good definition in the class for the
member function. For example, I don’t think it makes sense to define the Greet()
function in my Creature class because a greeting really depends on the specific
type of creature—a pixie twinkles, a dragon blows a puff of smoke, and an orc
grunts.

You specify a pure virtual function by placing an equal sign and a zero at the end
of the function header. That’s what I did in Creature with the following line:

virtual void Greet() const = 0; //pure virtual member function

When a class contains at least one pure virtual function, it’s an abstract class.
Therefore, Creature is an abstract class. I can use it as the base class for other
classes, but I can’t instantiate objects from it.

An abstract class can have data members and virtual functions that are not pure
virtual. In Creature, I declare a data member m_Health and a virtual member
function DisplayHealth().

			Deriving a Class from an Abstract Class
When you derive a new class from an abstract class, you can override its pure
virtual functions. If you override all of its pure virtual functions, then the new
class is not abstract and you can instantiate objects from it. When I derive Orc
from Creature, I override Creature’s one pure virtual function with the
following lines:

void Orc::Greet() const
{
cout << "The orc grunts hello.\n";
}

This means I can instantiate an object from Orc, which is what I do in main()
with the following line:

Creature* pCreature = new Orc();

The code instantiates a new Orc object on the heap and assigns the memory
location of the object to pCreature, a pointer to Creature. Even though I can’t
instantiate an object from Creature, it’s perfectly fine to declare a pointer using
the class. Like all base class pointers, a pointer to Creature can point to any
object of a class derived from Creature, like Orc.

Next, I call Greet() , the pure virtual function that I override in Orc with the
following line:
pCreature->Greet();

The correct greeting, The orc grunts hello., is displayed.
