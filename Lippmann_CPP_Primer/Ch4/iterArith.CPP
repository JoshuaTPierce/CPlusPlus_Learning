//Iterators for string and vector support additional operations that can move an
// iterator multiple elements at a time. They also support all the relational operators.
//These operations, which are often referred to as iterator arithmetic, are described
/*******************************************************************
iter + n     Adding (subtracting) an integral value n to (from) an iterator
iter - n      yields an iterator that many elements forward (backward) within the container.
             The resulting iterator must denote elements in, or one past the end of, the same container.
iter1 += n   Compound assignment for iterator addition and subtraction. Assigns to
iter1 -= n    iter 1 the value of adding n to, or subtracting from, iter1
iter1 - iter2  Subtracting two iterators yields the number that when added to the right-hand iterator
                 yields the left-hand iterator. The iterators must denote elements in, or one pas the end 
                 of the same character.
>, >=, <, <=   Relational operators on iterators. One iterator is less than another if it
                 refers to an element that appears in the container before the one referred to
                 by another iterator. The iterators must denote elements in, or one past, the end
                 of the same container
***********************************************************************/
#include <iostream>
#include <vector>
using namespace std;

//Compute an iterator to the element nearest the middle of a vector:
void center(){
    vector<int> v1{1,2,3,4,5,6,7,8,9,10};
    auto mid = v1.begin() + v1.size() / 2;
    for(auto it = v1.begin(); it != mid; it++);
        cout << it << endl; //dereference it to print char
}

//If vi has 20 elements, then vi.size()/2 is 10. In this case, we’d set mid equal to
// vi.begin() + 10. Remembering that subscripts start at 0, this element is the same
// as vi[10], the element ten past the first.

//In addition to comparing two iterators for equality, we can compare vector and
// string iterators using the relational operators (<, <=, >, >=). The iterators must be
// valid and must denote elements in (or one past the end of) the same vector or
// string. For example, assuming it is an iterator into the same vector as mid, we
// can check whether it denotes an element before or after mid as follows:

void center2(){
    vector<int> v2{1,2,3,4,5,6,7,8,9,10};
    auto mid2 = v2.begin() + v1.size() / 2;
    for(auto it2 = v2.begin());
        if(it < mid);
            cout << mid << endl;
            it++;
}
int main(){
    center();
    return 0;
}