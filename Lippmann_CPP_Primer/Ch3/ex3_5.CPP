//Write a program to read strings from the standard input, concatenating what is read
// into one large string.

#include <iostream>
#include <string>

void concatenate(){
    std::string input1, concat;
    while(std::cin >> input1)
        concat += input1;  
    std::cout << concat;
}

//Next, change the program to separate adjacent input strings by a space.

void concatenate_space(){
    std::string input2, concat2;
    if(std::cin >> concat2){
        while(std::cin >> input2)
            concat2 += ' ' + input2;
    }
    std::cout << concat2;
}


int main(){
    //concatenate();
    concatenate_space();
    return 0;
}