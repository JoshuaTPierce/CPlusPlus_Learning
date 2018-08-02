/* The Overriding Boss program demonstrates calling and overriding base class
member functions in a derived class. The program creates an enemy that taunts
the player and then attacks him. Next, the program creates a boss from a derived
class. The boss also taunts the player and attacks him, but the interesting thing is
that the inherited behaviors of taunting and attacking are changed for the boss
(who is a bit cockier than the enemy). These changes are accomplished through
function overriding and calling a base class member function. */

#include <iostream>
using namespace std;

class Enemy{
public:
	Enemy(int damage = 10);
	void virtual Taunt() const; //made virtual to be overridden
	void virtual Attack() const; //made virtual to be overridden

private:
	int m_Damage;
};

Enemy::Enemy(int damage) : m_Damage(damage) {}

void Enemy::Taunt() const {
	cout << "The enemy wants to fight you." << endl;
}

void Enemy::Attack() const{
	cout << "Attack! Inflicts " << m_Damage << " damage points." << endl;
}

class Boss : public Enemy{
public:
	Boss(int damage = 30);
	void virtual Taunt() const;
	void virtual Attack() const;
};

Boss::Boss(int damage) : Enemy(damage) {} //override base class constructor with argument

void Boss::Taunt() const { //override base class member function
	cout << "The boss says he will end your pitiful existence." << endl;
}

void Boss::Attack() const { //override base class member function
	Enemy::Attack(); //call base class member function
	cout << "And laughs heartily at you." << endl;
}

int main() {
	cout << "Enemy object:\n";
	Enemy anEnemy;
	anEnemy.Taunt();
	anEnemy.Attack();

	cout << "\n\nBoss object:\n";
	Boss aBoss;
	aBoss.Taunt();
	aBoss.Attack();

return 0;

}