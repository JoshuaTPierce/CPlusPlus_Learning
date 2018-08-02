//Iterators support only a few operations. We can compare
// two valid iterators using == or !=. Iterators are equal if they denote the same
// element or if they are both off-the-end iterators for the same container. Otherwise,
// they are unequal.
/*******************************************************************************
*iter Returns a reference to the element denoted by the iterator iter
iter->mem Dereferences iter and fetches the member named mem from underlying element. Equivalent to (*iter).mem
++iter Increments iter to refer to the next element in the container.
--iter Decrements iter to refer to the previous element in the container.
iter == iter2 Compares two iterators for equality. Two iterators are equal if 
                they denote the same element or if they are the off-the-end iterator
                for the same container
iter != ite 2  See: iter == iter2
*********************************************************************************/

#include <vector>
#include <iostream>
#include <string>
using namespace std;

void iterString(){
    string s("some string");
    if(s.begin() != s.end()) { //make sure s is not empty
        auto it = s.begin(); //it denotes the first char in s
        *it = toupper(*it); //make that character uppercase
    }
    for(auto &i : s)
        cout << i << " ";
    cout << endl;
}

int main(){
    iterString();
    return 0;
}
