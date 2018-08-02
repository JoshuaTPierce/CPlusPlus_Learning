//Excersize 1-21 V2
//Modified With Logic Checks to Reduce Assumptions that ISBNs are Equivalent

#include "C++ Primer Source Code/1/Sales_item.h"
#include <iostream>
using namespace std;

int main(){
    Sales_item item1, item2;
    
    std::cout << "Returns the sum of quantity and price for two books of the same ISBN."; std::endl
    std::cout << "Enter Item 1  ISBN, quantity, and price: " << std::endl;
    std::cin >> item1;
    std::cout << "Enter Item 2 ISBN, quantity, and price: " << std::endl;
    cin >> item2;
    
    if(item1.isbn() == item2.isbn()){ //member functions(methods)
        std::cout << item1 + item2; 
        return 0;} 
    else {
        std::cerr << "Please enter two books of the same ISBN." << std::endl; 
        return -1;}
    
}