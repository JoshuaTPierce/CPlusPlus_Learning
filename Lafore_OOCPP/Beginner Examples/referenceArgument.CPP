//referenceArgument.CPP
//Demonstrates Passing by Reference
//A reference provides an alias for a variable when passing it to a function.
//More specifically, the reference refers to the memory address of the variable
//when being passed to a function.

#include <iostream>
using namespace std;

int main(){
    void intfrac(float, float&, float&) //declaration/prototype
    float number, intpart, fracpart; //float variables

    do {
        cout << "\nEnter a real number: ";
        cin >> number;
        
        intfrac(number, intpart, fracpart);
        
        cout << "Integer part is " << intpart 
             << " , fraction part is " << fracpart << endl;
    
    } while(number != 0.0);
    
    return 0; 
}

//intfrac()
//finds integer and fraction components of a real number

void intfract(float n, float& intp, float& fracp){
    long temp = static_cast<long>(n);   //convert n to long
    intp = static_cast<float>(temp);    //back to float
    fracp = n - intp;                   //subtract integer part
}

/*
The main() part of this program asks the user to enter a number of type float. The program
will separate this number into an integer and a fractional part.

The intfrac() function finds the integer part by converting the number (which was passed to
the parameter n) into a variable of type long with a cast, using the expression
long temp = static_cast<long>(n);
This effectively chops off the fractional part of the number, since integer types (of course)
store only the integer part. The result is then converted back to type float with another cast:
intp = static_cast<float>(temp);
The fractional part is simply the original number less the integer part. (We should note that a
library function, fmod(), performs a similar task for type double.)