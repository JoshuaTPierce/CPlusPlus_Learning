//The detecting part of a program uses a throw expression to raise an exception. A
// throw consists of the keyword throw followed by an expression. The type of the
// expression determines what kind of exception is thrown. A throw expression is
// usually followed by a semicolon, making it into an expression statement.

#include "Sales_item.h"
#include <iostream>
#include <stdexcept> //STANDARD EXCEPTIONS HEADER FILE
using namespace std;

int main(){
    Sales_item item1, item2; 
    cin >> item1 >> item2;
    //first check that item1 and item 2 represent the same book
    if(item1.isbn() != item2.isbn())
        throw runtime_error("Data must refer to same ISBN");
    //if we're still here, the ISBNs are the same:
    cout << item1 + item2 << endl;

    return 0;
}

//In this code, if the ISBNs differ, we throw an expression that is an object of type
//runtime_error. Throwing an exception terminates the current function and
//transfers control to a handler that will know how to handle this error.

//The type runtime_error is one of the standard library exception types and is
//defined in the stdexcept header. We’ll have more to say about these types in. 

//We must initialize a runtime_error by giving it a string or a Cstyle
//character string. That string provides additional information about the problem.