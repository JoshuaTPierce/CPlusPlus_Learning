//Private Inheritance.CPP
//Demonstrates Public vs. Private Class Derivation

#include <iostream>
using namespace std;

class A {    //base class
    private:
        int privdataA;
    protected:
        int protdataA;
    public:
        int pubdataA;
};

Class B {   //publicly-derived class
    public:
        void func(){
            int a;
            a = privdataA; //error, not accessible
            a = protdataA; //allowed; publicly derived classes can access protected and public base class members
            a = pubdataA; ////allowed; publicly derived classes can access protected and public base class members
        }
};

Class C { //privately-derived classs
    public:
        void func2(){
            int a;
            a = privdataA; //error, not accessible
            a = protdataA; //allowed; publicly derived classes can access protected and public base class members
            a = pubdataA; ////allowed; publicly derived classes can access protected and public base class members
        } 
};

int main(){
    int a;
    
    B objB;
        a = objB.privdataA; //error: not accessible
        a = objB.protdataA; //error: not accessible
        a = objB.pubdataA; //OK (A public to B)

    C objC;
        a = objC.privdataA; //error: not accessible
        a = objC.protdataA; //error: not accessible
        a = objC.pubdataA; //error: not accessible (A private to C)
    
    return 0;
}