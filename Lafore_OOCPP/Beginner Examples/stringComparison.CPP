//StringComparison.CPP
//Compares COntents of String Objects

#include <iostream>
#include <string>
using namespace std;

int main(){
    string aName = 'George';
    string userName;

    cout << "Enter your first name: ";
    cin >> userName;
    if(userName == aName){
        cout << "Welcome, George!\n"; }
    else if(username < aName){
        cout << "You come before George.\n": }
    else{
        cout << "You come after George.\n"; }

    int n = userName.compare(0, 2, aName, 0, 2);
    cout << "The first two letters of your name "
    if(n == 0){
        cout << "match "; }
    else if(n < 0){
        cout << "come before"; }
    else{
        cout << "come after ";}

    return 0;
}