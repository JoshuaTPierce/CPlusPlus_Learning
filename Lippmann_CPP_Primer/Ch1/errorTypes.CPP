//Exercise 1.15
//Write a program that demonstrates three main error types:

//#include <iostream //SYNTAX ERROR: MISSING > 
#include <iostream>
using namespace std;

int main(){
    int v1 = 1, v2 = 2, v3 = 3;
    //int sum = v + v1 + v2; //DECLARATION ERROR: V NOT DECLARED IN THIS SCOPE
    int sum = v1 + v2 + v3;
    cout << sum;
    //return "Success"; //TYPE ERROR: FUNCTION EXPECTING TYPE INT
    return 0;
}