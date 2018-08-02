//Write your own version of the Sales_data class

#include <iostream>
using namespace std;

struct Sales_data {
    std::string ISBN; 
    unsigned int num_sold = 0;
    unsigned double cost; 
    unsigned double revenue = 0;
}

/* Pseudo-Code v1
User enters ISBN, store to ISBN
User enters cost, store to cost
User enters number sold
Returns revenue = num_sold * cost
End

/* Pseudo-Code v2
User enters ISBN
Console prompt: was a unit sold? y or n
    if yes 
        num_sold++;
    else
        exit
Console promt: enter sales price: 
User enters sales price
    Revenue = num_sold * sales cost
Console prompt: enter another sale? (y/n)
    if yes, repeat
    if no:
    console out "#units of ISBN were sold at price totaling revenue"
End