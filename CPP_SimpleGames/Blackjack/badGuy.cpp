//Polymorphic Bad Guy
//Demonstrates calling member functions dynamically

#include <iostream>
using namespace std;

class Enemy {
public:
	Enemy(int damage = 100);
	virtual ~Enemy();
	void virtual Attack() const;

protected:
	int* m_pDamage
};

Enemy::Enemy(int damage) {
	m_pDamage = new int(damage);
}

Enemy::~Enemy(){
	cout << "In enemy destructor, deleting m_pDamage" << endl;
	delete m_pDamage;
	m_pDamage = 0;
}

class Boss : public Enemy {
public:
	Boss(int multiplier = 3);
	virtual ~Boss();
	void virtual Attack() const;

protected:
	int* m_pMultiplier;
};

Boss::(int multiplier){
	m_pMultiplier = new int(multiplier);
}

Boss::~Boss(){
	cout << "In boss destructor, deleting m_pMultiplier." << endl;
	delete m_pMultiplier;
	m_pMultiplier = 0;
}

void Boss::Attack() const {
	cout << "A boss attacks and inflicts " << (*m_pDamage) * (*m_pMultiplier)
		 << " damage points." << endl;
}

int main() {
	cout << "Calling Attack() on Boss object through pointer to Enemy:\n";
	Enemy* pBadGuy = new Boss();
	pBadGuy->Attack();

	cout << "\n\nDeleting pointer to Enemy:\n";
	delete pBadGuy;
	pBadGuy = 0;

	return 0;
}

//---------------------NOTES------------------------
/*           Using Base Class Pointers to Derived Class Objects

An object of a derived class is also a member of the base class. For example, in
the Polymorphic Bad Guy program, a Boss object is an Enemy object, too. That
makes sense because a boss is really only a specialized kind of enemy. It also
makes sense because a Boss object has all of the members of an Enemy object.

Okay, so what? Well, because an object of a derived class is also a member of the
base class, you can use a pointer to the base class to point to an object of the
derived class. That’s what I do in main() with the following line, which
instantiates a Boss object on the heap and creates a pointer to Enemy, pBadGuy,
that points to the Boss object.
Enemy* pBadGuy = new Boss();

Why in the world would you want to do this? It’s useful because it allows you to deal
with objects without requiring that you know their exact type. For example, you
could have a function that accepts a pointer to Enemy that could work with either an
Enemy or a Boss object. The function wouldn’t have to know the exact type of object
being passed to it; it could work with the object to produce different results
depending on the object’s type, as long as derived member functions were declared
virtual. Because Attack() is virtual, the correct version of the member function will
be called (based on the type of object) and will not be fixed by the type of pointer.

I prove that the behavior will be polymorphic in main(). Remember that
pBadGuy is a pointer to Enemy that points to a Boss object. So, the following line
calls the Attack() member function of a Boss object through a pointer to Enemy,
which correctly results in the Attack() member function defined in Boss being
called and the text A boss attacks and inflicts 30 damage points. being displayed
on the screen.

pBadGuy->Attack();

					Defining Virtual Destructors
When you use a pointer to a base class to point to an object of a derived class,
you have a potential problem. When you delete the pointer, only the base class’
destructor will be called for the object. This could lead to disastrous results
because the derived class’ destructor might need to free memory (as the
destructor for Boss does). The solution, as you might have guessed, is to
make the base class’ destructor virtual. That way, the derived class’ destructor
is called, which (as always) leads to the calling the base class’ destructor, giving
every class the chance to clean up after itself.

I put this theory into action when I declare Enemy’s destructor virtual.
virtual ~Enemy();

In main(), when I delete the pointer pointing to the Boss object with the
following line, the Boss object’s destructor is called, which frees the memory on
the heap that m_pDamageMultiplier points to and displays the message In Boss

destructor, deleting m_pMultiplier.
delete pBadGuy;

Then, Enemy’s destructor is called, which frees the memory on the heap that
m_pDamage points to and displays the message In Enemy destructor, deleting
m_pDamage. The object is destroyed, and all memory associated with the objectfreed.
is freed.

Using Abstract Classes
At times you might want to define a class to act as a base for other classes, butdoesn’t make sense to instantiate objects from this class because it’s so generic.
For example, suppose you have a game with a bunch of types of creatures
running around in it. Although you have a wide variety of creatures, they all
have two things in common: They have a health value and they can offergreeting. So, you could define a class, Creature, as a base from which to derive
other classes, such as Pixie, Dragon, Orc, and so on. Although Creaturehelpful, it doesn’t really make sense to instantiate a Creature object. It would be
great if there were a way to indicate that Creature is a base class only, and not
meant for instantiating objects. Well, C++ lets you define a kind of class just like
this, called an abstract class.
