//Exercises 2.18 - 2.20
//Write code to change the value of a pointer.
// Write code to change the value to which a pointer points.

#include <iostream>
using namespace std;

int main(){
    //Change the value of a pointer
    int i = 50;   //value
    int *ipt = &i;   //initialize pointer to address of i
    std::cout << *ipt << std::endl;
    i = 60; //should change the value of pointer
    std::cout << *ipt << std::endl; //print pointer to test

    //Change the value to which a pointer points
    //Currently *ipt points to &i
    int j = 1000; //define new value
    *ipt = j;
    std::cout << *ipt << std::endl;

    return 0;
}

//Explain the differences between pointers and references:
// &references must be initialized and are bound to initializer
// *pointers do not need to be initialized and can be converted,
// especially when beginning with a null pointer (can handle more type conversions)

// Example:
// i is an int; p is a pointer to int; r is a reference to int
// int i = 1024, *p = &i, &r = i;

//What does the following program do:
//int i = 0;
//int *pi = &i; 
//*pi = *pi * *pi;
// this program will compile but produce no ooutput.
// line two creates and initializes a null pointer,
// and two null pointers multiplied is null * null

//Other pointer distinctions:
// int* p1, p2; // p1 is a pointer to int; p2 is an int
// int *p1, *p2; // both p1 and p2 are pointers to int
    //This style emphasizes that the variable has the indicated compound type.
