//Write a while loop that reads ints from the standard input and stop when the value read is equal to 42.

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int input;
    while(cin >> input){
        if(input == 42)
            exit(0);
    }
    return 0;
}

/* 
a faster way (example from pg. 203)

int i;
// a better way to write our loop---what the condition does is now clearer
while ((i = get_value()) != 42) {
// do something ...
}
*/