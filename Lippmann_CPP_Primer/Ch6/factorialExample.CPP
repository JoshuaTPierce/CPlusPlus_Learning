//Calculates the factorial of a user-entered number.

#include <iostream>
using namespace std;

int fact(int val){ //return type is integer, function takes an integer "value" as input
    int ret = 1; //local variable to hold the result as we calculate it
    while(val > 1)
        ret *= val--; //assign ret*val to ret and decrement val
    return ret; //return the result
}

//Our function is named fact. It takes one int parameter and returns an int value.
//Inside the while loop, we compute the factorial using the postfix decrement operator
// to reduce the value of val by 1 on each iteration. The return
// statement ends execution of fact and returns the value of ret.

//A parameter is the variable in the parentheses after the function name when we defining the function and used inside a function.
//An argument is the variable in the parentheses after the function name when we calling the function, and it is used to initialize the parameter of the function.

//Call the function
//Prompt the user to supply values to be passed to the function.

int main(){
    int input;
    char c;
    do{
        cout << "Enter an integer: " << endl;
        cin >> input;
        int j = fact(input); //passes input as argument
        cout << "The factorial of " << input << " is " << j << endl; 
        cout << "Enter another? (y or n)" << endl;
        } while(char == 'y');
    return 0;
}

/*
A function call does two things: It initializes the function’s parameters from the
corresponding arguments, and it transfers control to that function. Execution of the
calling function is suspended and execution of the called function begins.

Execution of a function begins with the (implicit) definition and initialization of its
parameters. Thus, when we call fact, the first thing that happens is that an int
variable named val is created. This variable is initialized by the argument in the call
to fact, which in this case is 5.

Execution of a function ends when a return statement is encountered. Like a
function call, the return statement does two things: It returns the value (if any) in
the return, and it transfers control out of the called function back to the calling
function. The value returned by the function is used to initialize the result of the call
expression. Execution continues with whatever remains of the expression in which the
call appeared.
*/