/*
The general form of a try block is
try {
program-statements
} catch (exception-declaration) {
handler-statements
} catch (exception-declaration) {
handler-statements
} // . . .
*/

#include "Sales_item.h"
#include <iostream>
#include <stdexcept> //STANDARD EXCEPTIONS HEADER FILE
using namespace std;

int main(){
    Sales_item item1, item2;
    while(cin >> item1 >> item2){
        try{
            //execute code that will add the two sales items
            //if the addition fails, the code throws a runtime_error exception
        }catch (runtime_error err){
            //remind the user that the ISBNs must match and prompt for another pair
            cout << err.what() << "\nTry Again? (enter y or n)" << endl;
            char c;
            cin >> c;
            if(!cin || c == 'n')
            break;}
        }   
    return 0;
}

//The ordinary logic of the program that manages the interaction with the user appears
//inside the try block. This part of the program is wrapped inside a try because it
//might throw an exception of type runtime_error.