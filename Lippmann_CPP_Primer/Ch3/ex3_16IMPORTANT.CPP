//Write a program to print the size and contents of an int, and string vector (i.e., from 3.13)

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//read a vector of integers from console input
//print the size of the vector and each member
void intVec(){
    vector<int> v1; //empty integer vector
    int input;
    while(cin >> input){
        v1.push_back(input); }
    cout << "Length of Vector: " << v1.size() << endl;
    for(auto &i : v1)
        cout << i;
}

//read a vector of strings from console input
//print the size of the vector and each member

void stringVec(){
    vector<string> v2;
    string input2;
    while(cin >> input2){
        v2.push_back(input2); }
    cout << "Length of Vector : " << v2.size() << endl;
    for(auto &j : v2)
        cout << j;
}

int main(){
    //intVec();
    stringVec();
    
    return 0;
}