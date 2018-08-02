//PureVirtual.CPP
//Demonstrates an Abstract Class and Pure Virtual Function
#include <iostream>
using namespace std;

class Base {
    public:
        virtual void show() = 0; //pure virtual function
};

class Derv1 : public Base {
    public:
        void show()
            { cout << “Derv1\n”; }
};

class Derv2 : public Base {
    public:
        void show()
        { cout << “Derv2\n”; }
};

int main() {
    // Base bad; //can’t make object from abstract class
    Base* arr[2]; //array of pointers to base class
    Derv1 dv1; //object of derived class 1
    Derv2 dv2; //object of derived class 2

    arr[0] = &dv1; //put address of dv1 in array
    arr[1] = &dv2; //put address of dv2 in array
    arr[0]->show(); //execute show() in both objects
    arr[1]->show();

    return 0;
}

//Once you’ve placed a pure virtual function in the base class, you must override it in all the
//derived classes from which you want to instantiate objects. If a class doesn’t override the pure
//virtual function, it becomes an abstract class itself, and you can’t instantiate objects from it
//(although you might from classes derived from it). For consistency, you may want to make all
//the virtual functions in the base class pure.