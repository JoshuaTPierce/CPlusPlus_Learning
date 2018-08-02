/* The Private Critter program demonstrates class member access levels by declaring
a class for critters that restricts direct access to an object’s data member for its
hunger level. The class provides two member functions—one that allows access to
the data member and one that allows changes to the data member. The program
creates a new critter and indirectly accesses and changes the critter’s hunger level
through these member functions. However, when the program attempts to change
the critter’s hunger level to an illegal value, the member function that allows
the changes catches the illegal value and doesn’t make the change. Finally, the
program uses the hunger-level-setting member function with a legal value, which
works like a charm. */
//------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

class Critter {
public:
	Critter(int hunger = 0);
	int GetHunger() const;
	void SetHunger(int hunger);

private:
	int m_Hunger;
};

Critter::Critter(int hunger) : m_Hunger(hunger) {
	cout << "A new critter has been born!" << endl;
}

int Critter::GetHunger() const {
	return m_Hunger;
}

void Critter::SetHunger(int hunger){
	if(hunger < 0) {
		cout << "Hunger cannot be negative." << endl;
	}
	else {
		m_Hunger = hunger;
	}
}

int main(){
	Critter crit(5);
	//cout << crit.m_Hunger; //illegal, m_Hunger is private!
	cout << "Calling GetHunger(): " << crit.GetHunger() << "\n\n";

	cout << "Calling SetHunger() with -1.\n";
	crit.SetHunger(-1);

	cout << "Calling SetHunger() with 9.\n";
	crit.SetHunger(9);
	cout << "Calling GetHunger(): " << crit.GetHunger() << "\n\n";

	return 0;
}

/*
By using private:, I’m saying that any data member or member function that
follows (until another access level specifier) will be private. This means that only
code in the Critter class can directly access it. Since I declare m_Hunger in this
section, it means that only the code in Critter can directly access an object’s
m_Hunger data member. Therefore, I can’t directly access an object’s m_Hunger
data member through the object in main() as I’ve done in previous programs. So
the following line in main(), if uncommented, would be an illegal statement:
//cout << crit.m_Hunger; //illegal, m_Hunger is private!
Because m_Hunger is private, I can’t access it from code that is not part of the
Critter class. Again, only code that’s part of Critter can directly access the data
member.

Defining Accessor Member Functions
An accessor member function allows indirect access to a data member. Because
m_Hunger is private, I wrote an accessor member function, GetHunger(), to return
the value of the data member. (For now, you can ignore the keyword const.)
int Critter::GetHunger() const
{
return m_Hunger;
}
I put the member function to work in main() with the following line:
cout << "Calling GetHunger(): " << crit.GetHunger() << "\n\n";
In the preceding code, crit.GetHunger() simply returns the value of crit’s
m_Hunger data member, which is 5.

