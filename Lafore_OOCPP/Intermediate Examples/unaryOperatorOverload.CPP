//Unary Operator Overload.CPP
//Demonstrates Overloading of Operators

/*
The rather forbidding term operator overloading refers to giving the normal C++ operators,
such as +, *, <=, and +=, additional meanings when they are applied to user-defined data types.
*/

//Unary Operators act only on one operand (e.g., ++, --)

#include <iostream>
using namespace std;

class Counter {
    private:
        unisgned int count; 
    public:
        Counter () : count(0) {} //constructor
        unsigned int get_count() { return count; } //return count
        void operator ++ () { ++count } //increment (prefix)
};

int main(){
    Counter c1, c2;  //define and initialize

    cout << "\nc1=" << c1.get_count();
    cout << "\nc2=" << c2.get_count();

    ++c1;
    ++c2;
    ++c2;

    cout << "\nc1=" << c1.get_count();
    cout << "\nc2=" << c2.get_count();

    return 0;
}

