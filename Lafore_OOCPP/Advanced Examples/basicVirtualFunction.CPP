//BasicVirtualFunction.CPP
//Demonstrates Polymorphism

#include <iostream>
using namespace std;

class Base { //example base class
    public:
        virtual void show(){
            cout << "All your base are belong to us.";
        }
};

class Derv1 : public Base { //derived class 1
    public:
        void show(){
            cout << "Derv1\n";
        }
};

class Derv2 : public Base {
    public:
        void show(){
            cout << "Derv1\n";
        }
};

int main(){
    //instantiate classes
    Derv1 dv1;
    Derv2 dv2;

    //point to base class:
    Base* ptr;

    //put address of dv1 in pointer and execute show()
    ptr = &dv1;
    ptr->show();

    //put the address of dv2 in pointer and execute show()
    ptr = &dv2;
    ptr->show();

    return 0;
}