//Exercise 3.2, Write a program to read the standard input line
// one line at a time. Modify your program to read one word at a time.

#include <iostream>
#include <string>
using namespace std;

int main(){
    string line;
    //unmodified(version 1):
    //while(getline(cin, line)){
    //modified: reads word by word
    while(cin >> line.is()){ //modification: reads until whitespace
        cout << line << endl; }
    return 0;
}    

//Exercise 3.2: Explain how whitepsace chars are handled in the string input operator and getline function
//In the original version, it reads the entire string and prints the entire string
//In the modified version, it reads until white space, prints what happened before the whitespace,
// reads again, prints, etc., until EOL.