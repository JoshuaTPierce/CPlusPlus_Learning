//Iterators use the increment (++) operator to move from one element
// to the next. Incrementing an iterator is a logically similar operation to incrementing an
// integer. In the case of integers, the effect is to “add 1” to the integer’s value. In the
// case of iterators, the effect is to “advance the iterator by one position.”

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void example1(){
    vector<string> v1;
    string input;
    cout << "Enter a string of words: ";
    while(cin >> input){
        v1.push_back(input);
    }
    for(auto it = v1.begin(); it != v1.end() && !isspace(*it); ++it)
        *it = toupper(*it);
}

void iteratorTypes(){
    vector<int>::iterator it; // it can read and write vector<int> elements
    string::iterator it2; // it2 can read and write characters in a string
    vector<int>::const_iterator it3; // it3 can read but not write elements
    string::const_iterator it4; // it4 can read but not write characters
}

//A const_iterator behaves like a const pointer. Like a const
// pointer, a const_iterator may read but not write the element it denotes; an
// object of type iterator can both read and write. If a vector or string is const,
// we may use only its const_iterator type. With a nonconst vector or string,
// we can use either iterator or const_iterator.

//THE BEGIN AND END OPERATIONS
//The type returned by begin and end depends on whether the object on which they
// operator is const. If the object is const, then begin and end return a
// const_iterator; if the object is not const, they return iterator:

void endBegin(){
    vector<int> v3;
    const vector<int> cv;
    auto it1 = v.begin(); //it1 has type vector<int>::iterator
    auto it2 = cv.begin(); //it2 has type vector<int>::const_iterator
    //Often this default behavior is not what we want. For reasons we’ll explain in
    //it is usually best to use a const type (such as const_iterator) when we   
    //need to read but do not need to write to an object. To let us ask specifically for the
    //const_iterator type, the new standard introduced two new functions named
    //cbegin and cend:
    auto it3 = v3.cbegin(); // it3 has type vector<int>::const_iterator
}

int main(){
    iteratorTypes();
    example1();
    endBegin();
    return  0;
}