//Sales_data.cpp
//User-defined data type: STRUCT (not yet a full class)

#include <iostream>
using namespace std;

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0; //unsigned int initialize to 0
    double revenue = 0.0 
};