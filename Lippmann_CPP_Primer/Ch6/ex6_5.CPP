//Exercise 6.5: Write a function to return the absolute value of its argument.

#include <iostream>
using namespace std;

float abs(float input){
    float result; //local variable to store result
    if(input > 0)
        result = input;
    else if(input < 0)
        result = input * -1;
    else    
        result = 0;

    return result;
}

int main(){
    int in;
    cout << "Enter a number: " << endl;
    cin >> in;
    int j = abs(in); //passes input as argument
    cout << "The absolute value of " << in << " is " << j << endl; 
        
    return 0;
}