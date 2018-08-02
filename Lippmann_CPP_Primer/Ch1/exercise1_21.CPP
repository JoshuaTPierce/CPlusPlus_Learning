//Using Sales_item.h, write a program that reads two Sales_item objects that have the same
// ISBN and print their sum.

#include <iostream>
using namespace std;
#include "Sales_item.h"

int main(){
    Sales_item item1, item2;
    std::cout << "Enter Item 1  ISBN, quantity, and price: " << std::endl;
    std::cin >> item1;
    std::cout << "Enter Item 2 ISBN, quantity, and price: " << std::endl;
    std::cin >> item2;
    std::cout << item1 + item2 << std:: endl; //must refer to same ISBN

    return 0;
}