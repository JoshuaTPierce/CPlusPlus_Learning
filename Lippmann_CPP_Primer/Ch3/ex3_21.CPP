//Rewrite the first exercise from 3.3 using iterators.
//Write a program to print the size and contents of a vector.

#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> v1;
    int input;
    int count = 0;
    while(cin >> input){
        v1.push_back(input); }
    for(auto &i : v1)
        if(v1.begin() != v1.end()){//make sure v1 is not empty
            auto it = v1.begin();
            cout << *it << " ";
        count++; }
    
    cout << "Length is: " << count << endl;

    return 0;
}