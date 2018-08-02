//DivisorDoLoop.CPP
//Demonstrates a do-while loop using user input in CPP.

#include <iostream>
using namespace std;

int main(){
    long dividend, divisor; //create two long int variables
    char ch;

    do {
        cout << "Enter dividend: "; cin >> dividend;
        cout << "Enter divisor: "; cin >> divisor;
        cout << "Quotient is " << divident % divisor;

        count <<"\nDo another? (y/n): "
        cin >> ch;
    }
    while (ch != n);
    return 0;
    }
}