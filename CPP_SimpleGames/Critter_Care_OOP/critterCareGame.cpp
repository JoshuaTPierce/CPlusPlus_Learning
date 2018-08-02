/* The Critter Caretaker game puts the player in charge of his own virtual pet. The
player is completely responsible for keeping the critter happy, which is no small
task. He can feed and play with the critter to keep it in a good mood. He can also
listen to the critter to learn how the critter is feeling, which can range from
happy to mad. */

#include <iostream>
using namespace std;

class Critter {
public:
	Critter(int hunger = 0; int boredom = 0); //constructor
	void Talk();
	void Eat(int food = 4); 
	void Play(int fun = 4);

private:
	int m_Hunger;
	int m_Boredom;
	int GetMood() const;
	void PassTime(int time = 1);
};

//Class Constructor (2 Arguments)
Critter::Critter(int hunger, int boredom) : m_Hunger(hunger), m_Boredom(boredom) {}

//GetMood() Member Function
inline int Critter::GetMood() const{
	return(m_Hunger + m_Boredom);
}

//PassTime() Member Function
void Critter::PassTime(int time){
	m_Hunger += time;
	m_Boredom += time;
}

//Talk() Member Function
void Critter::Talk(){
	cout << "I'm a critter and I feel ";

	int mood = GetMood();
	if(mood >= 15){
		cout << "mad." << endl;
	} else if(mood >= 10 || mood < 15){
		cout << "frustrated." << endl;
	} else if(mood >= 5 && mood < 10){
		cout << "okay." << endl;
	} else {
		cout << "happy!" << endl;
	}

	PassTime();
}

//Eat() Member Function
void Critter::Eat(int food){
	cout << "Brrrrupp" << endl;
	m_Hunger -= food;
	if(m_Hunger < 0){
		m_Hunger = 0;
	}

	PassTime();
}

//Play() Member Function
void Critter::Play(int fun){
	cout << "Wheeee!" << endl;
	m_Boredom -= fun;
	if(m_Boredom < 0){
		m_Boredom = 0
	}

	PassTime();
}

//Main()
int main(){
	Critter crit;
	crit.Talk();

	int choice;
	do {
		cout << "\nCritter Caretaker\n\n";
		cout << "0 - Quit\n";
		cout << "1 - Listen to your critter\n";
		cout << "2 - Feed your critter\n";
		cout << "3 - Play with your critter\n\n";

		cout << "Choice: ";
		cin >> choice;

		switch(choice){
			case 0:
				cout << "Good-bye.\n";
				break;
			case 1:
				crit.Talk();
				break;
			case 2:
				crit.Eat();
				break;
			case 3:
				crit.Play();
				break;
			default:
				cout << "\nSorry, but " << choice << " isn’t a valid choice.\n";
		}
	} while (choice != 0);

	return 0;
} //end main