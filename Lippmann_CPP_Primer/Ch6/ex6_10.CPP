//Exercise 6.10: Using pointers, write a function to swap the values of two
//ints. Test the function by calling it and printing the swapped values.

#include <iostream>
using namespace std;

void swap(int *p, int *q){
    *q = *p + *q;
    *p = *q - *p;
    *q = *q - *p;
}

int main(){
    int a, b;
    cout << "Enter two numbers to be swapped: " << endl;
    cin >> a >> b;
    swap(a, b);
    cout << "The two numbers after swapping become :" << endl;
    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;
    return 0;
}