//Exercise 5.23: Write a program that reads two integers from the standard
//input and prints the result of dividing the first number by the second.

#include <stdexcept>
#include <iostream>
using namespace std;
/*
void ex5_23(){
    int int1, int2;
    cout << "Enter two integers: " << endl;
    cin >> int1 >> int2;
    cout << int1 / int2 << endl;
}

//Exercise 5.24: Revise your program to throw an exception if the second
//number is zero. Test your program with a zero input to see what happens on
//your system if you don’t catch an exception.

void ex5_24(){
    int int1, int2;
    cout << "Enter two integers: " << endl;
    cin >> int1 >> int2;
    if(int2 == 0)
        throw runtime_error("Error: divisor cannot be zero");
    cout << int1 / int2 << endl;
}

//Exercise 5.25: Revise your program from the previous exercise to use a
//try block to catch the exception. The catch clause should print a message
//to the user and ask them to supply a new number and repeat the code inside the try.
*/

void ex5_25(){
    int int1, int2;
    cout << "Enter two integers: " << endl;
    while(cin >> int1 >> int2){
        try{
            cout >> int1 / int2 >> endl;
            if(item2 == 0)
        }catch (runtime_error err){
            cout << "Error: divisor cannot be zero" << endl;
            cout << err.what() << "\nTry Again? (enter y or n)" << endl;
            char c;
            cin >> c;
            if(!cin || c == 'n')
            break;}
        }   
}

int main(){
    //ex5_23();
    //ex5_24();
    ex5_25();
    return 0;
}