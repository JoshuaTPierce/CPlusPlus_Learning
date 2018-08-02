//Like pointers, iterators give us indirect access to an object. In the
// case of an iterator, that object is an element in a container or a character in a
// string. We can use an iterator to fetch an element and iterators have operations to
// move from one element to another. As with pointers, an iterator may be valid or
// invalid. A valid iterator either denotes an element or denotes a position one past the
// last element in a container. All other iterator values are invalid.

//Unlike pointers, we do not use the address-of operator to obtain an iterator. Instead,
// types that have iterators have members that return iterators. In particular, these types
// have members named begin and end. The begin member returns an iterator that
// denotes the first element (or first character), if there is one:

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void basicDeclaration(){
    vector<int> v1{1,2,3,4,5};
    // the compiler determines the type of b and e
    // b denotes the first element and e denotes one past the last element in v
    auto b = v1.begin();
    auto e = v1.end()
}
//Note
//If the container is empty, the iterators returned by begin and end are equal
// —they are both off-the-end iterators.

int main(){
    basicDeclaration();
    return 0;
}