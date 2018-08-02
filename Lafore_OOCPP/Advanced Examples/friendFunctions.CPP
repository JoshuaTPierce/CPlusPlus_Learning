//FriendFunctions.CPP
//Demonstrates Friend Functions 

#include <iostream>
using namespace std;

class beta; //needed for frifunc declaration

class alpha {
    private:
        int data;
    public: 
        alpha() : data(3) {} //no-arg constructor
        friend int frifunc(alpha, beta); //friend functions
};

class beta {
    private:
        int data;
    public:
        beta() : data(7) {} //no-arg constructor
        friend int frifunc(alpha, beta); //friend function
};

int frifunc(alpha a, beta b){ //function definition
    return(a.data + b.data);
}

int main(){
    alpha aa;
    beta bb;

    cout << frifunc(aa, bb) << endl; //call the function
    return 0;
}

//An object of each class is passed as an argument to the function frifunc(), and it accesses the
//private data member of both classes through these arguments. The function doesn’t do much:
//It adds the data items and returns the sum. The main() program calls this function and prints
//the result.

//A minor point: Remember that a class can’t be referred to until it has been declared. Class
//beta is referred to in the declaration of the function frifunc() in class alpha, so beta must be
//declared before alpha. Hence the declaration
class beta;
//at the beginning of the program