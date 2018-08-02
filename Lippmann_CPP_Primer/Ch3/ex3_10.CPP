//Write a program that reads a string of characters including punctuation,
// but writes the string with punctuation removed.

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cout << "Enter string: " << endl;
    cin >> s;
    for(const auto &c : s) //for each CONST character c in s
        if(!ispunct(c)) //if c IS NOT punctuatiion
            cout << c; //print c

    return 0;
}