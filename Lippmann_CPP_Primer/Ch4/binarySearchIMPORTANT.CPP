#include <iostream>
#include <vector>
using namespace std;

//A classic algorithm that uses iterator arithmetic is binary search. A binary search looks
// for a particular value in a sorted sequence. It operates by looking at the element
// closest to the middle of the sequence. If that element is the one we want, we’re done.

//Otherwise, if that element is smaller than the one we want, we continue our search by
// looking only at elements after the rejected one. If the middle element is larger than
// the one we want, we continue by looking only in the first half. We compute a new
// middle element in the reduced range and continue looking until we either find the
// element or run out of elements.

//We can do a binary search using iterators as follows:

int main(){
    vector<string> text;
    string input; 
    cout << "Enter a string: " << endl;
    while(cin >> input){
        text.push_back(input); }
    //text must be sorted
    //beg and end will denote the range to be searched
    auto beg = text.begin(), end = text.end();
    auto mid = text.begin() + (end  - beg) / 2; //original midpoint
    //define sought (word to be found)
    string sought;
    cout << "Enter string to be found: " << endl;
    cin >> sought;
    //while there are still elements to look at and we havent yet found sought
    while(mid != end && *mid != sought){
        if(sought < *mid) //is the element we want in the first half?
            end = mid; //if so, adjust the range to ignore the second half
        else //the element we want is in the second half
            beg = mid + 1;
        mid = beg + (end - beg) / 2; //new midpoint
        }
    return 0;
}

//We start by defining three iterators: beg will be the first element in the range, end
// one past the last element, and mid the element closest to the middle. We initialize
// these iterators to denote the entire range in a vector<string> named text.

//Our loop first checks that the range is not empty. If mid is equal to the current
// value of end, then we’ve run out of elements to search. In this case, the condition
//fails and we exit the while. Otherwise, mid refers to an element and we check
// whether mid denotes the one we want. If so, we’re done and we exit the loop.

//If we still have elements to process, the code inside the while adjusts the range by
// moving end or beg. If the element denoted by mid is greater than sought, we know
// that if sought is in text, it will appear before the element denoted by mid.

//Therefore, we can ignore elements after mid, which we do by assigning mid to end.
//If *mid is smaller than sought, the element must be in the range of elements after
// the one denoted by mid. In this case, we adjust the range by making beg denote the
// element just after mid. We already know that mid is not the one we want, so we can
// eliminate it from the range.

//At the end of the while, mid will be equal to end or it will denote the element for
// which we are looking. If mid equals end, then the element was not in text.