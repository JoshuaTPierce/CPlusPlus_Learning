//Exercise 6.22: Write a function to swap two int pointers.

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