//SimplePointersWithFunctions.CPP
//Demostrates Simple Functions Incorporating Pointers

#include <iostream>
using namespace std;

int main() {
    void centimize(double*);
    double var = 10.0;
    cout << "var = " << var << " centimeters" << endl;

    centimize(&var);
    cout << "var = " << var << " centimeters" << endl;
    return 0;
 }

void centimize(double* ptrd){
    *ptrd *= 2.54;
}

/////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
const int MAX = 5;

int main(){
    void centimize(double*); // prototype
    double varray[MAX] = {10.0, 43.1,95.9,59.7,87.3};
    centimize(varray); //change elements of varray to cm

    for(int j = 0; j < MAX; j++)
        cout << "varray[" << j << "] = "
             << varray[j] << "  centimeters" << endl;
    
    return 0;
}

void centimize(double* ptrd){
    for(int j = 0; j < MAX; j++)
        *ptrd++ *= 2.54;
}

//Since the name of an array is the array’s address, there is no need for the address operator &
//when the function is called:
centimize(varray); // pass array address
//In centimize(), this array address is placed in the variable ptrd. To point to each element of
//the array in turn, we need only increment ptrd:
*ptrd++ *= 2.54;

/////////////////////////////////////////////////////////////////////
