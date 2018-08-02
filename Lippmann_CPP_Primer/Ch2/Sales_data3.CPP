//Same as Sales_data2 except uses headerGuards.h
// FOR EXERCISE 2.42

#include <iostream>
#include <string>
#include "headerGuards.h"

int main(){
    Sales_data data1, data2; //instantiate struct
    //read in first transaction
    std::cin >> data1.ISBN >> data1.num_sold >> data1.cost;  
    //calculate first total revenue
    data1.revenue = data1.num_sold * data1.cost;
    //read second first transaction
    std::cin >> data2.ISBN >> data2.num_sold >> data2.cost;  
    //calculate second total revenue
    data2.revenue = data2.num_sold * data2.cost;
    
    //logic
    if(data1.ISBN == data2.ISBN){
        float totalRevenue = data1.revenue + data2.revenue;
        int totalCnt = data1.num_sold + data2.num_sold;
        if(totalCnt != 0)
            std::cout << totalRevenue/totalCnt << std::endl;
        else
            std::cout << " (no sales) " << std::endl;
        return 0;
    } else { //transactions weren't for the same ISBN
    std::cerr << "Data must refer to the same ISBN"
              << std:: endl;
    return -1; //indicate failure
    }
}