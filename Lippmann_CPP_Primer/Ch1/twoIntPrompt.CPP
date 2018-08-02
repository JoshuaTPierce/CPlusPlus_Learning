//twoIntPrompt.CPP
//Exercise 1.11
//Write a program that prompts the user for two integers. 
// Print each number in the range specified by those two integers.

#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    
    cout << "Enter first integer: "; 
    cin >> num1;
    cout << "\nEnter second integer(greater than first integer): "; 
    cin >> num2;
    
    while(num2 >= num1){
        std::cout << num2;
        num2--;
      }
    return 0;
}
