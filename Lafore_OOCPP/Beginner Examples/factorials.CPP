//factorials.CPP
//Calculates factorials and demonstrates a FOR loop
//Also demonstrates asking for user input

#include <iostream>
using namespace std;

int main(){
    unsigned int numb;
    unsigned long fact = 1; //initalize an unsigned long integer to 1

    cout << "Enter a number: "; 
    cin >> numb;             //gets number

    for(int j = numb; j > 0; j--)  //sequentially multiples j by j-1, j-2, etc.,
        fact *= j;                 //until j = 1. 
    
    cout << "Factorial is " << fact << endl;
    return 0;
}