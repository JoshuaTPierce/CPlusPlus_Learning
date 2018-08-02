//Just as dereferencing a pointer to an int yields an int,
// dereferencing a pointer to a pointer yields a pointer.

#include <iostream>
using namespace std;

int main(){
    int ival = 1024;
    int *pi = &ival; //pointer pi points to address of ival
    int **ppi = &pi; //**makes a pointer to pointer at address pi*

    //ppi -> pi -> ival -> 1024

    std::cout << "The value of ival\n"
              << "direct value: " << ival << "\n"
              << "indirect value: " << *pi << "\n"
              << "double indirect value: " << **ppi << std::endl;

    return 0;
}

//A reference is not an object. Hence, we may not have a pointer to a reference.
//However, because a pointer is an object, we can define a reference to a pointer:
/*
int i = 42;
int *p; //p is a pointer to int
int *&r = p; //r is a reference to the pointer p
r = &i; //r refers to a pointer; assigning &i to r makes p point to i
*r = 0; //dereferencing r yields i, the object to which p points; changes i to 0


Exercise 2.25: Determine the types and values of each of the following variables:

int* ip, &r = ip;
    ip is a pointer to int, r is a reference to the pointer ip
int i, *ip = 0; 
    i is an integer, ip is a null pointer
int* ip, ip2; 
    ip is a pointer to int, ip2 is an integer