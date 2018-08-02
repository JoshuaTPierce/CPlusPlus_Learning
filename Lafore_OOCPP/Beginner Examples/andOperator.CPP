//andOperator.CPP
//Demonstrates the use of logical operators in C++ decision structures.

#include <iostream>
using namespace std;
#include <process.h> 
#include <conio.h>

int main(){
    char dir = 'a';
    int x = 10, y = 10;

    while( dir != '\r'){
        cout << "\nYour location is " << x << ", " << y;
        cout << "Enter direction: (n, s, e, w)";
        dir = getche();
        switch(dir){
            case 'n': y--; break;
            case 's': y++; break;
            case 'e': x++; break;
            case 'w': x--; break;
        }
        if (x == 7 && y == 11) {
            cout << "\nYou found the treasure!\n"
            exit(0); 
        } 
    } //end switch
    return 0;
} //end main;

//OR operator is similar and is read as ||

