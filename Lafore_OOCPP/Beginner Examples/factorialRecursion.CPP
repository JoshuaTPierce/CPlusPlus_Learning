//factorialRecursion.CPP
//Calculates factorials using recursion.

#include <iostream>
using namespace std;

unsigned long factfunc(unsigned long);  //declaration

int main(){
    int n; 
    unsigned long fact;

    cout << "Enter an integer: ";
    cin >> n;
    fact = factfunc(n);
    cout << "Factorial of " << n << " is " << fact << endl;
    return 0;
}

unsigned long factfunc(unsigned long n){
    if(n > 1){                          //provides way to end recursion
        return n* factfunc(n - 1);
    }
    else {
        return 1;                       //provides way to end recursion
    }
}