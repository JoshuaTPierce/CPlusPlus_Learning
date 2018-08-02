//distanceStructureArgument.cpp
//Demonstrates Passing a Structure as an Argument

#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

void englDisp( Distance ); // prototype

int main(){
    Distance d1, d2;  //instantiate the structure variables

    cout << "Enter feet: "; cin >> d1.feet;
    cout << "Enter inches: "; cin >> d1.inches;

    cout << "\nEnter feet: "; cin >> d2.feet;
    cout << "\nEnter inches: "; cin >> d3.inches;

    cout << "\nd1 = ";
    englDisp(d1);

    cout << "\nd2 = ";
    englDisp(d2);

    cout << endl;

    return 0;
}

void englDisp( Distance dd ){
    cout << dd.feet << "\ ' -" << dd.inches << "\"";
}
