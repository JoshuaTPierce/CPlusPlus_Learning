//Exercise 3.31: Write a program to define an array of ten ints. Give each
//element the same value as its position in the array.

#include <string>
#include <iostream>
using namespace std;

int main(){
    int intArray[10];
    for(size_t i = 0; i != 10; i++) //size_t is type unsigned integral, result of size_of
        intArray[i] = i; //for each member of array, the value is the same as the index value
    for(auto i : intArray)
        cout << i << " ";

    return 0;
}