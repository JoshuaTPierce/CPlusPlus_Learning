//Using Sales_item.h, write a program that reads several transactions for the same 
// ISBN, writing the final sum to the console.

#include <iostream>
using namespace std;
#include "Sales_item.h"

int main(){
    Sales_item inputItem;
    Sales_item sumItems;
    while(std::cin >> inputItem){
        sumItems += inputItem;
      }
  std::cout << sumItems << std::endl;
  
  return 0;
}