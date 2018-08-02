/*             Using Static Data Members and Member Functions
Objects are great because each instance stores its own set of data, giving it a
unique identity. But what if you want to store some information about an entire
class, such as the total number of instances that exist? You might want to do this
if you’ve created a bunch of enemies and you want them to fight the player based
on their total number. For example, if their total number is below a certain
threshold, you might want the enemies to run away. You could store the total
number of instances in each object, but that would be a waste of storage space.
Plus, it would be cumbersome to update all of the objects as the total changes.
Instead, what you really want is a way to store a single value for an entire class.
You can do this with a static data member. */

#include <iostream>
using namespace std;

class Critter {
public:
	static int s_Total; //static member variable declaration
						//total number of critter objects in existence
	
	Critter(int hunger = 0);
	static int GetTotal(); //static member function prototype

private:
	int m_Hunger

};

int Critter::s_Total = 0; //static member variable initialization

Critter::Critter(int hunger) : m_Hunger(hunger){
	cout << "A critter has been born!" << endl;
	++s_Total;
}

int Critter::GetTotal(){
	return s_Total;
}

int main() {
	cout << "The total number of critters is: ";
	cout << Critter::s_Total << "\n\n";

	Critter crit1, crit2, crit3; //every time a new critter is instantiated
								 // total is incremented, "a new ..." is displayed

	cout << "\nThe total number of critters is: ";
	cout << Critter::GetTotal() << "\n";

	return 0;
}