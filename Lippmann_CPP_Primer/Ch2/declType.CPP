//Demonstrates DeclType

#include <iostream> 
using namespace std;

int main(){
    decltype(f()) sum = x; //sum has whatever type f returns
    
    const int ci = 0, &cj - ci;
    decltype(ci) x = 0; //x has type const int
    decltype(cj) y = x; //y has type const int& and is bound to x
    //decltype(cj) z; //ERROR: Z IS A REFERENCE AND MUST BE INITIALIZED

    return 0;
}