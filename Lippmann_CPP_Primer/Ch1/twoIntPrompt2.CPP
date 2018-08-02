//Exercise 1.19
//Rewrite twoIntPrompt.CPP using IF-ELSE to handle a second value less than first value
//Print the range between two values:

#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    std::cout << "Enter first integer: "; std::cin >> num1;
    std::cout << "Enter second integer: "; std::cin >> num2;
    
    if(num2 > num1){
        while(num2 >= num1) {
            std::cout << num2; //start with larger number, print down
            num2--; } }
    
    else if(num2 < num1) {
        while(num2 <= num1){
            std::cout << num2;
            num2++; }} //start with smaller number, print up
    
    else{std::cout << "Numbers are the same.";}
    
    return 0;
}
    
