//Demostrates Logic of CONST Keyword with pointers and references.

#include <iostream>
using namespace std;

int main(){
    int i = 42;
    int &r1 = i; //reference to i (printing &r1 = 42)
    const int &r2 = i; //const reference to i

    //because &r1 is not const, it can modify i
    r1 = 50;
    std::cout << &r1;

    //because &r2 is const, it cannot be used to modify i
    //  r2 = 100; ERROR: R2 IS A REFERENCE TO CONST 

//////////////////////////////////////////////////////////////

    const double pi = 3.14; //const, may not be changed
    // double *ptr = &pi; ERROR: PTR IS A PLAIN POINTER, NOT CONSTANT
    const double *ptr = &pi; //okay, constant pointer points to consatant of same type
    //*ptr = 42; //ERROR, *PTR IS A REFERENCE TO CONST

///////////////////////////////////////////////////////////////

    int errNumb = 0;
    int *const curErr = &errNumb; //cureErr will ALYWAYS point to errnumb
    const double pi = 3.14159;
    contst double *const pip = &pi;
    //pip is a const pointer to a const object
    
    //errNumb can change and curErr will reflect the changes, it just always points to it
    //pi can never change, pip will always point to pi

///////////////////////////////////////////////////////////////
    //a pointer to a const that is not a const = LOW-LEVEL const
    //a pointer that is itself a const = TOP-LEVEL CONST
    int i = 0;
    int *const p1 = &i; //we can't change the value of p1: const is top-level
    const int ci = 42; //cannot change ci, it const is top-level
    const int *p2 = &ci; //we CAN change p2, const is low level
    const int *const p3 = p2; //right-most const (int) is top-level, left-most is not
    const int &r = ci; //CONST IN REFERENCE TYPES IS ALWAYS LOW-LEVEL

    i = ci; //ok: copying the value ci; top-level const in ci is irgnored
    p2 = p3; //ok: pointed-to-type; top-level const in p3 is ignored

    int *p = p3; //ERROR: p3 has a low-level const but p doesnt
    p2 = p3; //ok, p2 has the same low-level const qualification as p3
    p2 = &i; //ok, we can convert int* to const int*
    int &r = ci; //error: cant bind ordinary int& to a const int
    const int &r2 = i; //ok: can bind const int& to plain int

////////////////////////////////////////////////////////////////
//EXERCISE 2.30: FOR EACH OF THE FOLLOWING DECLARATIONS, INDICATE WHETHER THE 
// OBJECT BEING DECLARED HAS TOP-LEVEL OR LOW-LEVEL CONST

const int v2 = 0;
    //top-level, cannot change
int v1 = v2;
    //copying ignores top-level const, v1 is not const.
int *p1 = &v1, &r1 = v1;
    //p1 points to int (v1 had no const), same with reference

/////////////////////////////////////////////////////////////////
    return 0; 
}