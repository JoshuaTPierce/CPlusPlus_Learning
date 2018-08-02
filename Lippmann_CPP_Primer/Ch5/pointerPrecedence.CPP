//For Member Access
//The dot and arrow operators provide member access (to classes/structs).
//THe dot operator fethces a member from an object of class type; arrow
// is defined so that ptr->mem is a synonym for (*ptr)

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1 = "a string";
    string *p = &s1;
    auto n = s1.size(); //iterator to run the size of the string s1
    n = (*p).size(); //run size on the object to which p points
    n = p->size(); //equivalent to (*p).size();

//Because dereference has a lower precedence than dot, we must parenthesize the
//dereference subexpression. If we omit the parentheses, this code means something
//quite different:
    *p.size(); // error: p is a pointer and has no member named size
//This expression attempts to fetch the size member of the object p. However, p is a
//pointer, which has no members; this code will not compile.
//The arrow operator requires a pointer operand and yields an lvalue. The dot
//operator yields an lvalue if the object from which the member is fetched is an lvalue;
//otherwise the result is an rvalue.
}