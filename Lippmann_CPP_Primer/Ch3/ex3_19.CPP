//List three ways to define a vector and give it ten elements, each with the value 42.
//Indicate whether there is a preffered way to do so, and why.

#include <iostream>
#include <vector>
using namespace std;

void method1(){ //PREFERRED METHOD
    vector<int> v1(10, 42);
    for(auto &i : v1)
        cout << i << " ";
}

void method2(){ //WORST METHOD
    vector<int> v2{42,42,42,42,42,42,42,42,42,42};
    for(auto &j : v2)
        cout << j << " ";
}

void method3(){ //WORKS FINE BUT IS UNECESSARILY COMPLEX
    vector<int> v3(10);
    int f = 42;
    for(auto &k : v3 ){
        k = f; }
    for(auto &l : v3)
        cout << l << " "; 
}

int main(){
    method1();
    method2();
    method3();
    return 0;
}