#include <iostream>
#include <string>
#include "Sales_data.h"

int main() {
    Sales_data data1, data2; 
    //code to read into data1 and data2
    //code to check whether data1 and data2 have the same ISBN
    // and if so, print the sum of data1 and data2
    double price = 0;
    // read the first transactions: ISBN, number books sold, price per book
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    //calculate total revenue from price and units sold
    data1.revenue = data1.units_sold * price;
    //read the second transaction
    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    if(data1.bookNo == data2.bookNo){
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        //print: ISBN, total sold, total revenue, average price per book
        std::cout << data.bookNo << " " << totalCnt << " " << totalRevenue << " ";
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