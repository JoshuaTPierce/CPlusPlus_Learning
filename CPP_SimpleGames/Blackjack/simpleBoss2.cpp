/* The Simple Boss 2.0 program is another version of the Simple Boss program
from earlier in this chapter. The new version, Simple Boss 2.0, looks exactly the
same to the user, but the code is a little different because I put some restrictions
on base class members. */

#include <iostream>
using namespace std;

class Enemy {
public:
	Enemy();
	void Attack() const;

protected:
	int m_Damage;
};

Enemy::Enemy() : m_Damage(10) {}

void Enemy::Attack() const {
	cout << "Attack inflicts " << m_Damage << " damage points!\n";
}

class Boss : public Enemy {
public:
	Boss();
	void SpecialAttack() const;

private:
	int m_DamageMultiplier;
};
	
Boss::Boss(): m_DamageMultiplier(3) {}
	
void Boss::SpecialAttack() const {
	cout << "Special Attack inflicts " << (m_DamageMultiplier * m_Damage);
	cout << " damage points!\n";
}

int main() {
	cout << "Creating an enemy.\n";
	Enemy enemy1;
	enemy1.Attack();
	
	cout << "\nCreating a boss.\n";
	Boss boss1;
	boss1.Attack();
	boss1.SpecialAttack();
	
	return 0;
}

//----------------------------Notes---------------------------------
/*			Using Access Modifiers with Class Members

You’ve seen the access modifiers public and private used with class members
before, but there’s a third modifier you can use with members of a class—
protected. That’s what I use with the data member of Enemy.

protected:
int m_Damage;

Members that are specified as protected are not accessible outside of the class,
except in some cases of inheritance. As a refresher, here are the three levels of
member access:

public: members are accessible to all code in a program.

protected: members are accessible only in their own class and certain derived classes, depending upon the access level used in inheritance.
 
private: members are only accessible in their own class, which means they are not directly accessible in any derived class.
 
					Using Access Modifiers When Deriving Classes
When you derive a class from an existing one, you can use an access modifier,
such as public, which I used in deriving Boss.
 class Boss : public Enemy

Using public derivation means that public members in the base class become
public members in the derived class, protected members in the base class
become protected members in the derived class, and private members in the
base class are inaccessible in the derived class.
 
Trick
Even if base data members are private, you can still use them indirectly through base class member
functions. You can even get and set their values if the base class has accessor member functions.


Because Boss inherits from Enemy using the keyword public, Boss inherits
Enemy’s public member functions as public member functions. It also means
that Boss inherits m_Damage as a protected data member. The class essentially acts
as if I simply copied and pasted the code for these two Enemy class members right
into the Boss definition. But through the beauty of inheritance, I didn’t have to
do this. The upshot is that the Boss class can access Attack() and m_Damage()Hint
You can derive a new class with the protected and private keywords, but they’re rarely used
and are beyond the scope of this book.

