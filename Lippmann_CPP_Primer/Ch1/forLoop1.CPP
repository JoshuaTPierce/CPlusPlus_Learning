//Exercise 1-13
//Rewrite While Loop 1 Using a For Loop

#include <iostream>
using namespace std;

int main(){
    int sum = 0; //create sum variable, initialize to 0
    for(int j = 50; j <= 100; j++)
        sum += j;
    
    std::cout << "The sum is: " << sum << std::endl;
}