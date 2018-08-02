//If Demo.CPP
//Demonstrates the IF-THEN Decision Structure in CPP

#include <iostream>
using namespace std;

int main(){
    int x;

    cout << "Enter a number: ";
    cin >> x;
    if(x > 100)
        cout << "That number is greater than 100\n";
    else if(x == 100)
        cout << "You entered 100\n";
    else   
        cout << "That number is less than 100\n";
    return 0;
}