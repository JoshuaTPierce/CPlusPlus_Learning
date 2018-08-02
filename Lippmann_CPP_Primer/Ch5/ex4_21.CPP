//Exercise 4.21: Write a program to use a conditional operator to find the
//elements in a vector<int> that have odd value and double the value of
//each such element.

#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> intVec;
    cout << "Enter a series of integers: " << endl;
    int input;
    while(cin >> input)
        intVec.push_back(input);
    for(auto &i : intVec)
        i = i % 2 ? i *= 2 : i;
    for(auto &j : intVec)
        cout << j << ' '; 
    
    cout << endl;
    return 0;
}