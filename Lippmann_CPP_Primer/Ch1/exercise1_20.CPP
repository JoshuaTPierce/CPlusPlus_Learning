//Copy Sales_item.h into working directory. Write a 
// program that reads a set of book sales transactions,
// writing each transaction to the standard output.

#include<iostream>
using namespace std;
#include "Sales_item.h"

int main(){
    Sales_item item;
    while(std::cin >> item)
    std::cout << item;
    return 0;
}