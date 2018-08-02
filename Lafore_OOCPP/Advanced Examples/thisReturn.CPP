//ThisReturn.CPP
//Using This Pointer to Return Values

//A more practical use for this is in returning values from member functions and overloaded operators

#include <iostream>
using namespace std;

class alpha {
    private:
        int data;
    public:
        alpha() //no-arg constructor
            { }
        alpha(int d) //one-arg constructor
            { data = d; }
        void display() //display data
            { cout << data; }
        alpha& operator = (alpha& a) //overloaded = operator
            {
        data = a.data; //not done automatically
        cout << "\nAssignment operator invoked";
        return *this; //return copy of this alpha
            }
};

int main() {
    alpha a1(37);
    alpha a2, a3;
    a3 = a2 = a1; //invoke overloaded =, twice

    cout << "\na2="; a2.display(); //display a2
    cout << "\na3="; a3.display(); //display a3
    cout << endl;

    return 0;
}

//In this program we can use the declaration
//alpha& operator = (alpha& a)
//which returns by reference, instead of
//alpha operator = (alpha& a)
//which returns by value. The last statement in this function is
return *this;

//Since this is a pointer to the object of which the function is a member, *this is that object
//itself, and the statement returns it by reference. Here’s the output of ASSIGN2:
//Assignment operator invoked
//Assignment operator invoked
a2=37
a3=37
//Each time the equal sign is encountered in
a3 = a2 = a1;
//the overloaded operator=() function is called, which prints the messages. The three objects all
//end up with the same value.
//You usually want to return by reference from overloaded assignment operators, using *this, to
//avoid the creation of extra objects.