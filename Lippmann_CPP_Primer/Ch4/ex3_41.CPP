//Exercise 3.41: Write a program to initialize a vector from an array of ints.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int intArr[] = {1,2,3,4,5,6,7,8,9};
    vector<int> intVec;
    int *e = &intArr[9]; // pointer just past the last element in arr
    for (int *b = intArr; b != e; ++b) //for item at pointer location in intArr
        intVec.push_back(*b); //push back that item in intVec
    
    for(auto &i : intVec) //for each member of intVec
        cout << i << " "; //print it
    
    cout << endl;
    return 0;
}