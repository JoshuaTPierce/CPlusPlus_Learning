//The Constructor Critter program demonstrates constructors. The program
// instantiates a new critter object, which automatically invokes its constructor.

#include <iostream>
using namespace std;

class Critter {
public:
	int m_Hunger; //data member
	Critter(int hunger = 0); //constructor prototype
	void Greet(); //member function prototype
};

Critter::Critter(int hunger){ //constructor definition
	cout << "A new critter has been born!" << endl;
	m_Hunger = hunger;
}

void Critter::Greet(){
	cout << "Hi. I'm a critter. My hunger level is " << m_Hunger << "." << endl;
}

int main(){
	Critter crit(7); //takes the argument 7 for the constructor to initialize hunger
	crit.Gret();

	return 0;
}