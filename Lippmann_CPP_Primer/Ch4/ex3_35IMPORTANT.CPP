//Exercise 3.35: Using pointers, write a program to set the elements in an
//array to zero.

#include <iostream>
using namespace std;

int main(){
    int v1[] = {1,2,3,4,5,6,7,8,9}; 
    int *e = end(v1); //points to end element
    for (int *b = v1; b != e; ++b){ //declare pointer b, point to first element, iterate until end(v1)
        *b = 0;
        cout << *b << endl; 
    }
}