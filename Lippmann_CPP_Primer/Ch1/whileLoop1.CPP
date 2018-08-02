//Exercise 1.9
//Use a WHILE loop to find the sum of 50 to 100, inclusive.
//Print the sum to console.

#include <iostream>
using namespsace std;

int main(){
    int sum = 0;
    int value = 50;
    while(value <= 100){
        sum += value;
        value++;
        }
    std::cout << "Sum is: " << sum << std::endl;
}