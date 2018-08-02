//Exercise 5.19: Write a program that uses a do while loop to repetitively
//request two strings from the user and report which string is less than
//the other.

#include <string>
#include <iostream>
using namespace std;

int main(){
    string str1;
    string str2;
    char c; //for ending the do-while loop
    do{
        cout << "Enter string 1: " << endl;
        cin >> str1;
        cout << "Enter string 2: " << endl;
        cin >> str2;
        if(str1 > str2)
            cout << "String 1 is the longer string" << endl;
        else if(str1 < str2)
            cout << "String 2 is the longer string" << endl;
        else
            cout << "Strings are the same length" << endl;

        cout << "Enter another? (y or n):" << endl; 
    } while(char = 'y');

    return 0;
}