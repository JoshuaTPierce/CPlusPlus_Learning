//Exercise 1.10
//Use a While loop to print 10 to 1, descending, to console.

#include <iostream>
using namespace std;

int main(){
    int count = 10;
    while(count >= 0){
        std::cout << count << std::endl;
        count--;
    }
    return 0;
}