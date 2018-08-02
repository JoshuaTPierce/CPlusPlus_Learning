/*   						Introducing the Simple Boss Program
The Simple Boss program demonstrates inheritance. In it, I define a class for lowly
enemies, Enemy. From this class, I derive a new class for tough bosses that the
player has to face, Boss . Then, I instantiate an Enemy object and call its Attack()
member function. Next, I instantiate a Boss object. I’m able to call Attack() for the
Boss object because it inherits the member function from Enemy. Finally, I call the
Boss object’s SpecialAttack() member function, which I defined in Boss , for a
special attack. Since I define SpecialAttack() in Boss, only Boss objects have
access to it. Enemy objects don't have this special attack at their disposal. */

#include <iostream>
using namespace std;

class Enemy{
public:
	int m_Damage;
	Enemy(); //default constructor prototype
	void Attack() const;
};

Enemy::Enemy() : m_Damage(10) {}; //default constructor definition, initialize damage to 10

void Enemy::Attack() const {
	cout << "Enemy attacks. Attack inflicts : " << m_Damage << " damage points." << endl;
}

class Boss : public Enemy {  // Boss class derived from Enemy
public:
	int m_DamageMultiplier;
	Boss();
	void SpecialAttack() const;
};

//Default constructor for Boss
//Initializess damage to 10, then adds damage multiplier of 3
Boss::Boss() : m_DamageMultiplier(3) {}; 

void Boss::SpecialAttack() const{
	cout << "Special Attack inflicts " << (m_DamageMultiplier * m_Damage);
	cout << " damage points!\n";	
}

int main(){
	cout << "Creating an enemy.\n";
	Enemy enemy1;
	enemy1.Attack();
	
	cout << "\nCreating a boss.\n";
	Boss boss1;
	boss1.Attack();
	boss1.SpecialAttack();
	
	return 0;	
}
