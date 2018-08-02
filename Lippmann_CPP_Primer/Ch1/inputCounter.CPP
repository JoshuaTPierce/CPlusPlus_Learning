//InputCounter.CPP

#include <iostream>
using namespace std;

int main(){
    int currVal = 0;
    int val = 0;
    if(std::cin >> currVal){
        int cnt = 1; //store the count for the current value
        while(std::cin >> val){ //read current values
            if(val == currVal) //if its the same number
                cnt++; //increase the count of that number
            else { //otherwise (value changes)
                //print the number of times the previous set of entries occurred
                std::cout << currVal << " occurs " << cnt << " times " << std::endl;
                currVal = val; //reset val to currVal
                cnt = 1; //restart count at 1
            } //end if-else 1
        } //end while
        //remember to print the count for last value in the file:   
        std::cout << currVal << " occurs " << cnt << " times " << std::endl;
    } //end if-else 2
    return 0;
} //end main