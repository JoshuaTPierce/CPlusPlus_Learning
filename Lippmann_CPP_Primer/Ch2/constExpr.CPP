//Overview of Constant Expressions

//A constant expression is an expression whise value cannot change and that can be evaluated at compile time.
//A literal is a constant expression. 
//A const object that is initialized from a constant expression is also a constant expression

#include <iostream>
using namespace std;

int main(){
    const int max_files = 20; //max_files is a consatnt expression
    const int limit = max_files + 1; //limit is a constant expression
    int staff_size = 27; //staff_size is not a constant expression
    const int sz = get_size(); //sz is not a constant expression
        //although staff_size is initialized from a literal (27), it is not, itself, a literal
        //even though sz is a const, the value of the initializer is not known
        // until run time. Hence, sz is not a constant expression

    //In large systems it can be hard to tell if an expression is const or not
    //In C++ after 2011, we can ask the compiler to verify that a variable
    // is a constant expression by delaring the variable in a CONSTEXPR declaration

    constexpr int mf = 20; //20 is a constant expression
    constexpr int limit = mf + 1; //mf + 1 is a constant expression
    constexpr int sz = size(); //ok only if size is a constexpr function

    //Best practice: generally, it is a good idea to use constexpr 
    // for variables you intend to use as constant expressions

/////////////////////////////////////////////////////////////////////////////////////////////
//Pointers and constexpr

//It is important to understand that when a pointer is defined in a constexpr
// declaration, the constexpr specific applies to the pointer, not the type
// to which the pointer points.

    const int *p = nullptr; //p is a pointer to a const int
    constexpr int *q = nullptr; //q is a constant pointer to int

    return 0;
}