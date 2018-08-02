//Exercise 3.23: Write a program to create a vector with ten int elements.
// Using an iterator, assign each element a value that is twice its current value.
// Test your program by printing the vector.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1{10,20,30,40,50,60,70,80,90,100};
    for(auto it = v1.begin(); it != v1.end(); it++)
        *it *= 2;

    for(const auto &i : v1)
        cout << i << " ";
    cout << endl;
    
    return 0;
}