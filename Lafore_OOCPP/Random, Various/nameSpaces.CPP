//Demonstrates Multiple Namespaces
//Multiple files simulated in a single file as an example

//mathFunctions.h
namespace circumf{
    const double pi = 3.14159;
    double circumf(double radius){ //returns type double
        return 2 * pi * radius;  //takes radius as a function argument
    }
}

namespace cylinderArea{
    const double pi = 3.14159; //must redefine in next namespace
    double cylArea(double radius double height{
        return pi * radius * radius * height;
    }
}

//File1.CPP
//Import namespace in pre-processing
#include <iostream>
using namespace std;
#include "mathFunctions.h"
using namespace circumf;

int main(){
    double answer;
    cout << "Enter radius: "; cin >> answer;
    circumf(answer);
    return 0;
}

