/*				Working with Data Members and the Heap
You’ve seen how you can use aggregation to declare data members that store
objects, but you can also declare data members that are pointers to values on the
heap. You might use a data member that points to a value on the heap for some
of the same reasons you would use pointers in other situations. For example, you
might want to declare a data member for a large 3D scene; however, you might
only have access to the 3D scene through a pointer. Unfortunately, problems can
arise when you use a data member that points to a value on the heap because of
the way that some default object behaviors work. But you can avoid these issues
by writing member functions to change these default behaviors. */

//Demonstrates an object with a dynamically allocated data member

#include <iostream>
#include <string>
using namespace std;

class Critter {
public:
	Critter(const string& name = "", int age = 0);
	~Critter(); //destructor prototype
	Critter(const Critter& c); //copy constructor prototype
	Critter& Critter::operator=(const Critter& c); //overloaded assignment op
	void Greet() const;

private:
	string* m_pName;
	int m_Age;

};

Critter::Critter(const string& name, int age) {
	cout << "Constructor called\n";
	m_pName = new string(name);
	m_Age = age;
}
	
Critter::~Critter() { //destructor definition
	cout << "Destructor called\n";
	delete m_pName;
}

Critter::Critter(const Critter& c) { //copy constructor definition
	cout << "Copy Constructor called\n";
	m_pName = new string(*(c.m_pName));
	m_Age = c.m_Age;
}
	
Critter& Critter::operator=(const Critter& c){ //overloaded assignment op def 
	cout << "Overloaded Assignment Operator called\n";
	if (this != &c) {
		delete m_pName;
		m_pName = new string(*(c.m_pName));
		m_Age = c.m_Age;
	}
	return *this;
}

void Critter::Greet() const {
	cout << "I’m " << *m_pName << " and I’m " << m_Age << " years old.\n";
	cout << "&m_pName: " << cout << &m_pName << endl;
}

void testDestructor();
void testCopyConstructor(Critter aCopy);
void testAssignmentOp();

int main() {
	testDestructor();
	cout << endl;

	Critter crit("Poochie", 5);
	crit.Greet();
	testCopyConstructor(crit);
	crit.Greet();
	cout << endl;
	testAssignmentOp();

	return 0;
}

void testDestructor() {
	Critter toDestroy("Rover", 3);
	toDestroy.Greet();
}

void testCopyConstructor(Critter aCopy) {
	aCopy.Greet();
}

void testAssignmentOp() {
	Critter crit1("crit1", 7);
	Critter crit2("crit2", 9);
	crit1 = crit2;
	
	crit1.Greet();
	crit2.Greet();
	cout << endl;
	
	Critter crit3("crit", 11);
	crit3 = crit3;
	crit3.Greet();
}

//------------------------Notes----------------------------
/*        Declaring Data Members that Point to Values on the Heap
To declare a data member that points to a value on the heap, you first need to
declare a data member that’s a pointer. That’s just what I do in Critter with the
following line, which declares m_pName as a pointer to a string object.
string* m_pName;

In the class constructor, you can allocate memory on the heap, assign a value to
the memory, and then point a pointer data member to the memory. That’s what
I do in the constructor definition with the following line, which allocates
memory for a string object, assigns name to it, and points m_pName to that
chunk of memory on the heap.
m_pName = new string(name);

I also declare a data member that is not a pointer:
int m_Age;
This data member gets its value in the constructor the way you’ve seen before,
with a simple assignment statement:
m_Age = age;

You’ll see how each of these data members is treated differently as Critter
objects are destroyed, copied, and assigned to each other.

Now, the first object with a data member on the heap is created when main()
calls testDestructor(). The object, toDestroy, has an m_pName data member that
points to a string object equal to "Rover" that’s stored on the heap. Figure 9.7
provides a visual representation of the Critter object. Note that the image is
abstract because the name of the critter is actually stored as a string object, not
a string literal.

				Declaring and Defining Destructors
One problem that can occur when a data member of an object points to a value
on the heap is a memory leak. That’s because when the object is deleted, the
pointer to the heap value disappears along with it. If the heap value remains, it
produces a memory leak. To avoid a memory leak, the object should clean up
after itself before it is destroyed by deleting its associated heap value. Fortu-
nately, there’s a member function, the destructor, that’s called just before an
object is destroyed, which can be used to perform the necessary cleanup.

A default destructor, which is created for you by the compiler if you don’t write
your own, doesn’t attempt to free any memory on the heap that a data member
might point to. This behavior is usually fine for simple classes, but when you
have a class with data members that point to values on the heap, you should
write your own destructor so you can free the memory on the heap associated
with an object before the object disappears, avoiding a memory leak. That’s what

I do in the Critter class. First, inside the class definition, I declare the
destructor. Notice that a destructor has the name of the class preceded by ~
(the tilde character) and does not have any parameters or return a value.
Critter::~Critter()
 //destructor definition
{
cout << "Destructor called\n";
delete m_pName;
}

In main(), I put the destructor to the test when I call testDestructor() . The
function creates a Critter object, toDestroy, and invokes its Greet() method,
which displays I’m Rover and I’m 3 years old. &m_pName: 73F2ED48003AF644. The
message provides a way to see the values of the object’s m_Age data member and
the string pointed to by its m_pName data member. But it also displays the address
of the string on the heap stored in the pointer m_pName. The important thing to
note is that after the Greet() message is displayed, the function ends and
toDestroy is ready to be destroyed. Fortunately, toDestroy’s destructor is
automatically called just before this happens. The destructor displays Destructor
called and deletes the string object equal to "Rover" that’s on the heap, cleaning
up after itself and leaking no memory. The destructor doesn’t do anything with
the m_Age data member. That’s perfectly fine since m_Age isn’t on the heap, but
part of toDestroy and will be properly disposed of right along with the rest of the
Critter object.


				Declaring and Defining Copy Constructors
Sometimes an object is copied automatically for you. This occurs when an object is:

 Passed by value to a function

 Returned from a function

 Initialized to another object through an initializer

Provided as a single argument to the object’s constructor

The copying is done by a special member function called the copy constructor.
Like constructors and destructors, a default copy constructor is supplied for you
if you don’t write one of your own. The default copy constructor simply copies
the value of each data member to data members of the same name in the new
object—a member-wise copy.

For simple classes, the default copy constructor is usually fine. However, when
you have a class with a data member that points to a value on the heap, you
should consider writing your own copy constructor. Why? Imagine a Critter
object that has a data member that’s a pointer to a string object on the heap.
With only a default copy constructor, the automatic copying of the object would
result in a new object that points to the same single string on the heap because
the pointer of the new object would simply get a copy of the address stored in
the pointer of the original object. This member-wise copying produces a shallow
copy, in which the pointer data members of the copy point to the same chunks of
memory as the pointer data members in the original object.
