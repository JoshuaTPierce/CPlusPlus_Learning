//VirtualDestructors.CPP
//Tests non-virtual and virtual destructors

#include <iostream>
using namespace std;

class Base {
    public:
        virtual ~Base()
        { cout << "Base Destroyed\n"; }
};

class Derv : public Base{
    ~Derv()
        {cout << "Derv destroyed\n"; }
};

int main(){
    Base* pBase = new Derv;
    delete pBase;
    return 0;
}