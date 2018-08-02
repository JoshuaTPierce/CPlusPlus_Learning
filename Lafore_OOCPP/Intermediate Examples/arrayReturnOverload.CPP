//arrayReturnOverload.CPP
//Demonstrates Overloading [] subset operator and Return by Reference

#include <iostream>
#include <process.h>
using namespace std;

const int LIMIT = 100;

class SafeArray {
    private:
        int arr[LIMIT]; //integer array of 100 
    
    public:
        void putel(int n, int elvalue) { //set value of element
            if(n < 0 || n >= LIMIT){
                cout << "\nIndex Out of Bounds"; exit(1); }
            arr[n] = elvalue;
        }
        int getel(int n) const { //get value of element
            if(n < 0 || n >= LIMIT){
                cout << "\nIndex Out of Bounds"; exit(1); }
            return arr[n];
        }
};

int main(){
    SafeArray sa1; 

    for(int j = 0; j < LIMIT; j++) {
        sa1.putel(j, j * 10) }

    for (j = 0, j < LIMIT; j++){
        int temp = sa1.getel(j);
        cout << "Element " << j << " is " << temp << endl; }

    return 0;
}