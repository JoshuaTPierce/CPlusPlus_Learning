//Demonstrates operations defined in class "string"
//////////////////////////////////////////////////////////////////////////////////////
//The most commonly used operations include:
// os << s    Writes s onto output stream os. Returns os.
// is >> s    Reads whitespace-sparated string from is into s. Returns is.
// getline(is, s)  Reads a line of input from is into s. Returns is.
// s.empty()  Returns true if string is empty. Otherwise returns false.
// s.size()   Returns the number of characters in s. 
// s[n]       Returns a reference to the char in s at position n. 
// s1 + s2    Returns a string that is the concatenation of s1 and s2
// s1 = s2    Replaces the contents of s1 with the contents of s2
// s1 == s2   Returns true if s1 and s2 are equal. Equality is case sensitive.
// s1 != s2   Returns true if s1 and s2 are not equal. Equality is case sensitive. 
// <, <=, >, >=  Comparison operators using dictionary ordering starting at the first char. 
/////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std; 

int main(){
    string s; //empty string
    cin >> s; //uses standard console input to read a whitespace-separated string into s
    cout << s << endl; //writes s to the standard output
    string s1, s2; 
    cin >> s1 >> s2; //read first input into s1, second into s2;
    cout << s1 << s2 << endl; //write string s1 and then s2

    //write a program that reads an unknown number of strings
    string word;
    while(cin >> word) //read until EOF
        cout << word << endl; //write each word to the console with a new line
    
    return 0;
}