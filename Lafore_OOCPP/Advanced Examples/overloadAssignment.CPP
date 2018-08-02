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

        alpha operator = (alpha& a) //overloaded = operator
            {
            data = a.data; //not done automatically
            cout << "\nAssignment operator invoked";
            return alpha(data); //return copy of this alpha
            }
};

int main() {
    alpha a1(37);
    alpha a2;
    a2 = a1; //invoke overloaded =
    cout << "\na2="; a2.display(); //display a2
    alpha a3 = a2; //does NOT invoke =
    cout << "\na3="; a3.display(); //display a3
    cout << endl;

    return 0;
}

//The alpha class is very simple; it contains only one data member. Constructors initialize the
//data, and a member function can print out its value. The new aspect of ASSIGN is the function
//operator=(), which overloads the = operator.

//In main(), we define a1 and give it the value 37, and define a2 but give it no value. Then we
//use the assignment operator to set a2 to the value of a1:
a2 = a1; // assignment statement
//This causes our overloaded operator=() function to be invoked. Here’s the output from

//ASSIGN:
//Assignment operator invoked
a2=37
a3=37
//Notice that the argument to operator=() is passed by reference. It is not absolutely necessary
//to do this, but it’s usually a good idea. Why? As you know, an argument passed by value gen
//erates a copy of itself in the function to which it is passed. The argument passed to the
//operator=() function is no exception. If such objects are large, the copies can waste a lot of
//memory. Values passed by reference don’t generate copies, and thus help to conserve memory.