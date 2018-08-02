//Use a range for loop to change all characters in a string to X.

#include <iostream>
#include <string>
using namespace std;

void printx(){
    string s; 
    cout << "Enter a string: " << endl;
    cin >> s;
    for(auto c : s)
        cout << "X" << endl; 
} //PRINTS AN X TO CONSOLE FOR EACH CHAR IN S, DOES NOT CONVERT

void convertX(){
    string s2;
    if(cin >> s2){
        for(char &c : s2) //c is char &
            c = 'X';      //PASSES ARGUMENT BY REFERENCE
    }
    cout << s2 << endl;
}

int main(){
    //printX()'
    convertX();
}

/////////////////////////////////////////////////////////////////////
//Exercise 3.7: What would happen if you define the loop control variable 
// as type char (and not auto)?
//
//Prediction: type conversion error because auto defaults to a const
//Outcome: No change. Passing the argument by reference avoids the conversion
// error.
//
//Exercise 3.8
//What does the following program do? Is it valid?
//string s;
//cout << s[0] << endl;
//
//It's valid but it returns nothing.
//Returns string::size_type for character at that place, which is nothing.
/////////////////////////////////////////////////////////////////////

