
//To simplify expressions, the language defines the arrow operator
// (the -> operator). The arrow operator combines dereference and member access into
// a single operation. That is, it->mem is a synonym for (* it).mem.

//For example, assume we have a vector<string> named text that holds the
// data from a text file. Each element in the vector is either a sentence or an empty
// string representing a paragraph break. If we want to print the contents of the first
// paragraph from text, we’d write a loop that iterates through text until we
// encounter an element that is empty:

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<string> text;
    string input;
    while(cin >> input){
        text.push_back(input); }
    for(auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it)
        cout << *it << endl;
}

//We start by initializing it to denote the first element in text. The loop continues
// until either we process every element in text or we find an element that is empty. So
// long as there are elements and we haven’t seen an empty element, we print the
// current element. It is worth noting that because the loop reads but does not write to
// the elements in text, we use cbegin and cend to control the iteration.