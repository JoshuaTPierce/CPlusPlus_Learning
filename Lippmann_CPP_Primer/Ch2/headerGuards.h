//Header file re-written with header guards

#ifndef HEADER_GUARDS_H
#define HEADER_GUARDS_H
#include <string>

struct Sales_data {
    std::string ISBN; 
    int num_sold = 0;
    double cost; 
    double revenue = 0;
};

#endif