//Convert and Return
//Demonstrates Return Values, Converts Pounds to kg

#include <iostream>
using namespace std;

float lbstokg(float); //prototype

int main(){
    float lbs, kgs;
    cout << "\nEnter weight in pounds: ";
    cin >> lbs;
    kgs = lbstokg(lbs);    //main will prompt user for lbs and pass lbs to function below
    cout << "Your weight in kilograms is " << kgs << endl;
    return 0;            
}

float lbstokg(float pounds){
    float kilograms = 0.453592 * pounds;
    return kilograms;
}

