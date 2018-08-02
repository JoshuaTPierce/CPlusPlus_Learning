//Revise the loop that prrinted the first paragrap in text to
// instead change the elements in text that correspond to the first 
// paragraph to upper case.

/* The loop:
for (auto it = text.cbegin();
it != text.cend() && !it->empty(); ++it)
cout << *it << endl;
**********************************************/
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> text;
    string input;
    while(getline(cin, input))
        text.push_back(input); 

    for(auto it = text.begin(); it != text.end() && !it->empty(); it++)
        for(auto &i : *it)
            i = toupper(i);

    for(auto &j : text)
        if(j.empty())
            cout << endl;
        else
            cout << j << " ";

    return 0;
}