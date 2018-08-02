//ThisPointer.CPP
//Demonstrates Accessing Member Data with This

#include <iostream>
using namespace std;

class where {
    private:
        char charray[10]; //occupies 10 bytes
    public:
        void reveal(){
            cout << "\nMy object's address is " << this; }
};

int main(){
    where w1, w2, w3;
    w1.reveal();
    w2.reveal();
    w3.reveal();

    cout << endl;
    return 0;
}

//The main() program in this example creates three objects of type where. It then asks each
//object to print its address, using the reveal() member function. This function prints out the
//value of the this pointer.

//Since the data in each object consists of an array of 10 bytes, the objects are spaced 10 bytes
//apart in memory. (EC minus E2 is 10 decimal, as is E2 minus D8.) Some compilers may place
//extra bytes in objects, making them slightly larger than 10 bytes.