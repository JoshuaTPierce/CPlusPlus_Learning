//CounterConstructor.CPP
//Demonstrates Constructors with a simple Counting Program

/*
Sometimes, it's convenient if an object can initialize itself when first created,
without requiring a separate call to a member function. 
Automatic initialization is carried out using a special member function called
a constructor. A constructor is a member function executed automatically whenever
an object is created.
*/

//Assume the counter is important in the program and must be accessible by many different
//functions:

#include <iostream>
using namespace std;

class Counter {
    private:
        unsigned int count;
    
    public:
        Counter() : count(0) {  //CONSTRUCTOR
            cout << "I'm the constructor!\n";
        }
/* 
The initialization takes place following the member function declarator but before the function
body. It’s preceded by a colon. The value is placed in parentheses following the member data.       
This lets the members be initialized by the initializer before the constructore
even starts to execute.
*/

    void inc_count() {count++;}
    
    int get_count() {return count;}
};

int main(){
    Counter c1, c2;     //define and initialize

    cout << "\nc1 = " << c1.get_count();
    cout << "\nc2 = " << c2.get_count();

    c1.inc_count();
    c2.inc_count();
    c2.inc_count();

    cout << "\nc1 = " << c1.get_count();
    cout << "\nc2 = " << c2.get_count();
    cout << endl;
    return 0;
}

/* Notes:
- Constructors have the same name as the class. This is how the compiler
    knows they are constructors.
- No return type is used for constructors.