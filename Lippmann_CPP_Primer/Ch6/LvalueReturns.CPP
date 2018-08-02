/*Reference Returns Are Lvalues
Whether a function call is an lvalue depends on the return type of
the function. Calls to functions that return references are lvalues; other return types
yield rvalues. A call to a function that returns a reference can be used in the same
ways as any other lvalue. In particular, we can assign to the result of a function that
returns a reference to nonconst: */

#include <iostream>
#include <string>
using namespace std;

char &get_val(string &str, string::size_type ix){
    return str[ix]; //get_val assumes the given index is valid
}

int main(){
    string s("a value");
    cout << s << endl; //prints a value
    get_val(s, 0) = 'A'; //changes s[0] to A
    cout << s << endl;
    return 0;
}
/*
Exercise 6.34: What would happen if the stopping condition in factorial were
if (val != 0)

Answer
If we pass a negative number to the function, then it will recursively call itself infinitely. 

Exercise 6.35: In the call to fact, why did we pass val - 1 rather than val--?
Answer
The order of evaluation is undefined for the operator *, thus the expression return factorial(val--) * val make equal to either of the following expressions:

// Version 1
auto tmp = factorial(val) * val;  // evaluate second operand first
--val;
return tmp;

// Version 2
auto tmp = factorial(val);
--val;
return tmp * val;  // evaluate first operand first

*/