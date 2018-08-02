// typeid.cpp
// demonstrates typeid() function
// RTTI must be enabled in compiler
#include <iostream>
#include <typeinfo> //for typeid()
using namespace std;

class Base {
    virtual void virtFunc() //needed for typeid
    { }
};

class Derv1 : public Base
    { };
class Derv2 : public Base
    { };

void displayName(Base* pB) {
    cout << "pointer to an object of "; //display name of class
    cout << typeid(*pB).name() << endl; //pointed to by pB
}

int main() {
    Base* pBase = new Derv1;
    displayName(pBase); //”pointer to an object of class Derv1”
    pBase = new Derv2;
    displayName(pBase); //”pointer to an object of class Derv2”

    return 0;
}

//In this example the displayName() function displays the name of the class of the object passed
//to it. To do this, it uses the name member of the type_info class, along with the typeid opera
//tor. In main() we pass this function two objects of class Derv1 and Derv2 respectively, and the
//program’s output is
pointer to an object of class Derv1
pointer to an object of class Derv2
//Besides its name, other information about a class is available using typeid. For example, you
//can check for equality of classes using an overloaded == operator. We’ll show an example of
//this in the EMPL_IO program in Chapter 12, “Streams and Files.” Although the examples in this
//section have used pointers, dynamic_cast and typeid work equally well with references.