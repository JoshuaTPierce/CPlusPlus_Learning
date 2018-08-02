//CopyConstructor.CPP
//Demonstrates Copy Constructor X(&X)

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
        alpha(alpha& a) //copy constructor
                {
            data = a.data;
            cout << "\nCopy constructor invoked";
                }
        void display() //display
            { cout << data; }
        void operator = (alpha& a) //overloaded = operator
            {
            data = a.data;
        cout << "\nAssignment operator invoked"; }
};

int main() {
    alpha a1(37);
    alpha a2;
    a2 = a1; //invoke overloaded =
    cout << "\na2="; a2.display(); //display a2

    alpha a3(a1); //invoke copy constructor
    // alpha a3 = a1; //equivalent definition of a3
    cout << "\na3="; a3.display(); //display a3
    cout << endl;

    return 0;
}

//This program overloads both the assignment operator and the copy constructor. The overloaded
//assignment operator is similar to that in the ASSIGN example. The copy constructor takes one
//argument: an object of type alpha, passed by reference. Here’s its declarator:
alpha(alpha&)
//This declarator has the form X(X&) (pronounced “X of X ref”). Here’s the output of XOFXREF:
//Assignment operator invoked
a2=37
//Copy constructor invoked
a3=37
//The statement
a2 = a1;
//invokes the assignment operator, while
alpha a3(a1);
//invokes the copy constructor. The equivalent statement
alpha a3 = a1;
//could also be used to invoke the copy constructor.

//We’ve seen that the copy constructor may be invoked when an object is defined. It is also
//invoked when arguments are passed by value to functions and when values are returned from
//functions. Let’s discuss these situations briefly.