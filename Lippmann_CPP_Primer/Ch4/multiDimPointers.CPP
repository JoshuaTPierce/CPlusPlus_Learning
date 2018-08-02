#include <iostream>
using namespace std;

//Because a multidimensional array is really an array of arrays, the pointer type to
//which the array converts is a pointer to the first inner array:

void ex1(){
    int ia[3][4]; //array of size 3; each element is an array of ints of size 4
    int(*p) = ia; //p points to an array of four ints
    p = &ia[2]; //p now points to the last element in ia
    
    //Note
    //The parentheses in this declaration are essential:
    int *ip[4]; // array of pointers to int
    int (*ip)[4]; // pointer to an array of four ints
}

void ex2(){
    //With the advent of the new standard, we can often avoid having to write the type
    //of a pointer into an array by using auto or decltype
    int ia[3][4];
    //print the value of each element in ia, with each inner array on its own line
    //p points to an array of four ints
    for(autp p = ia; p != ia + 3; p++){
        //q points to the first element of an array of four its; that is, q points to an int
        for(auto q = *p; q != *p + 4; q++)
            cout << *q << ' ';
        cout << endl;
    }
}

void ex3(){
    int ia[3][4];
    // p points to the first array in ia
    for (auto p = begin(ia); p != end(ia); ++p) {
    // q points to the first element in an inner array
        for (auto q = begin(*p); q != end(*p); ++q)
            cout << *q << ' '; // prints the int value to which q points
    cout << endl;
    }
}

int main(){
    ex1();
    ex2();
    ex3();
    return 0;
}