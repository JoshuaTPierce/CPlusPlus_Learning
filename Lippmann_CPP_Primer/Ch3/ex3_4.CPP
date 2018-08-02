//Write a program to read two strings and report whether the strings are equal.
//If not, report which of the two strings is larger.

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string s1, s2;
    cout << "Enter two strings" << endl;
    getline(cin, s1); 
    getline(cin, s2);
    
    /* VERSION ONE
    if(s1 == s2){
        cout << "Strings are equivalent." << endl; }
    else if (s1 > s2) {
        cout << s1 << " is the longer string " << endl; }
    else {
        cout << s2 << " is the longer string " << endl; }
    */

//Now, change the program to report whether the strings have the same length,
// and if not, report which is longer.

    /* VERSION TWO */
    if(s1.size() == s2.size()){
        cout << " strings have equal length " << endl; }
    else if(s1.size() > s2.size()){
        cout << s1 << " is the longer string " << endl; }
    else{
        cout << s2 << " is the longer string " << endl; }
    
    return 0;
}