//Address-of Operator.CPP
//Demonstrates the Use of the Address-of Operator, &
#include <iostream>
using namespace std;

int main() {
    int var1 = 11;
    int var2 = 22;
    int var3 = 33;

    cout << &var1 << endl
         << &var2 << endl
         << &var3 << endl;

    return 0;
}

//The << insertion operator interprets the addresses in hexadecimal arithmetic, as indicated by
//the prefix 0x before each number. This is the usual way to show memory addresses.

//The addresses appear in descending order because local variables are stored on the stack,
//which grows downward in memory. If we had used global variables, they would have ascending
//addresses, since global variables are stored on the heap, which grows upward.

//Don’t confuse the address-of operator &, which precedes a variable name in a variable declaration,
//with the reference operator &, which follows the type name in a function prototype or definition.
