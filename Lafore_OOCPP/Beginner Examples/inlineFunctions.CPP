//inlineFunctions.CPP
//Demonstrates In-Line Functions
//Each time a function is called in the source file, the actual code
//from the file is inserted (instead of a jump to the function in the source code)

#include <iostream>
using namespace std;

inline float lbstokg(float pounds){
    return 0.453592 * pounds;
}

int main(){
    float lbs;

    cout << "\nEnter your weight in pounds: ";
    cin >> lbs; 
    cout << "Your weight in kilograms is " << lbstokg(lbs) << endl;
    return 0;
}