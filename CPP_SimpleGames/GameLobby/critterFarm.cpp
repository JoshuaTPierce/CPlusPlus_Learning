//Critter Farm
//Demonstrates Class Aggregation

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Critter {
public:
	Critter(const string& name = "");
	string GetName() const;

private:
	string m_Name;

};

Critter::Critter(const string& name) : m_Name(name) {}

inline string Critter::GetName() const {
	return m_Name
}

//------------------------------------------------------------

class Farm {
public:
	Farm(int spaces = 1);
	void Add(const Critter& aCritter);
	void RollCall() const;

private:
	vector<Critter> m_Critters;
};

Farm::Farm(int spaces){
	m_Critters.reserve(spaces);
}

void Farm::Add(const Critter& aCritter){
	m_Critters.push_back(aCritter);
}

void Farm::RollCall() const {
	for(vector<Critter>::const_iterator iter = m_Critters.begin();
		iter != m_Critters.end(); ++iter){
		cout << iter->GetName() << " here." << endl;
	}
}

//-----------------------------------------------------------------------
int main(){
	Critter crit("Poochie");
	cout << "My critter's name is " << crit.GetName() << endl;

	cout << "Creating critter farm." << endl;
	Farm myFarm(3); //create 3 spaces

	cout << "\nAdding three critters to the farm.\n";
	myFarm.Add(Critter("Moe"));
	myFarm.Add(Critter("Larry"));
	myFarm.Add(Critter("Curly"));
	
	cout << "\nCalling Roll. . .\n";
	myFarm.RollCall();

	return 0;
}

//-----------------------------NOTES------------------------------------- 
/*Using Object Data Members
One way to use aggregation when you’re defining a class is to declare a data
member that can hold another object. That’s what I did in Critter with the
following line, which declares the data member m_Name to hold a string object.
string m_Name;
Generally, you use aggregation when an object has another object. In this case, a
critter has a name. These kinds of relationships are called has-a relationships.

I put the declaration for the critter’s name to use when I instantiate a new object
with:
Critter crit("Poochie");
which calls the Critter constructor:
Critter::Critter(const string& name):
m_Name(name)
{}
By passing the string literal "Poochie", the constructor is called and a string
object for the name is instantiated, which the constructor assigns to m_Name. A
new critter named Poochie is born.
Next, I display the critter’s name with the following line:
cout << "My critter’s name is " << crit.GetName() << endl;
The code crit.GetName() returns a copy of the string object for the name of the
critter, which is then sent to cout and displayed on the screen.

Using Container Data Members
You can also use containers as data members for your objects. That’s what I do
when I define Farm. The single data member I declare for the class is simply a
vector that holds Critter objects called m_Critter.
vector<Critter> m_Critters;
When I instantiate a new Farm object with:
Farm myFarm(3);
it calls the constructor:
Farm::Farm(int spaces)
{
m_Critters.reserve(spaces);
}
which allocates memory for three Critter objects in the Farm object’s m_Critter
vector.
Next, I add three critters to the farm by calling the Farm object’s Add() member
function.

myFarm.Add(Critter("Moe"));
myFarm.Add(Critter("Larry"));
myFarm.Add(Critter("Curly"));
The following member function accepts a constant reference to a Critter object
and adds a copy of the object to the m_Critters vector.
void Farm::Add(const Critter& aCritter)
{
m_Critters.push_back(aCritter);
}