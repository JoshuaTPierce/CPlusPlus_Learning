//CharCount.CPP
//Demonstrates more nested loops, this time with the conio.h package
//to help count characters from a user input.

#include <iostream>
using namespace std;
#include <conio.h>

int main(){
    int chcount = 0;
    int wdcount = 0;
    char ch = 'a';

    cout << "Enter a phrase: ";
    while( ch != '\r') {
        ch = getche();
        if(ch== ' ')
            wdcount++;
        else
            chcount++;    
    }
    cout << “\nWords=” << wdcount << endl
        << “Letters=” << (chcount-1) << endl;
return 0;
}

//note: \r is the command received from the keyboard when return is pressed.
//with iostream, the user must press return to submit input.
//with conio.h (getche), the user can enter whatever they want and type /r to end the input
