//VoidPointer.CPP
//Demonstrates general purpose pointer of type void.

#include <iostream>
using namespace std;

int main(){
    int intvar;
    float floatvar;

    int* ptrint;
    float* prtflo;
    void* ptrvoid;

    ptrint = &intvar; //ok, int* to int*
    ptrint = &floatvar; // error, cant point float* to int*
    ptrflo = &intvar; //error, cant point int* to float*
    ptrflo = &flovar; //ok, float* to float*

    ptrvoid = &intvar; //ok, int* to void*
    ptrvoid = &flovar; //ok, float* to void*

    return 0;

}

//If for some unusual reason you really need to assign one kind of pointer type to another, you
//can use the reinterpret_cast. For the lines commented out in PTRVOID, that would look like
//this:
ptrint = reinterpret_cast<int*>(flovar);
ptrflo = reinterpret_cast<float*>(intvar);