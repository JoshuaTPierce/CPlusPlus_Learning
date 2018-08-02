//Write a program to read a sequence of ints from cin and store those 
// ints in a vector. 


#include <iostream>
#include <string>
#include <vector>
using namespace std;

void intVector(){
    vector<int> v1; //empty int array
    int integ; 
    cout << "Enter a series of integers to be added to a vector: " << endl;
    while(cin >> integ){
        v1.push_back(integ); }
}

//Exercise 3.15:
//Repeat the previous program but read strings this time:

void strVector(){
    vector<string> v2; //empty array of string objects
    string stri; 
    cout << "Enter a series of strings to be added to a vector: " << endl;
    while(cin >> stri){
        v2.push_back(stri); }
}

int main(){
    intVector();
    strVector();
    return 0;
}