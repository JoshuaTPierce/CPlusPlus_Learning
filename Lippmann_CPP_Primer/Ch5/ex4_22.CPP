/* 
Exercise 4.22: Extend the program that assigned high pass, pass, and fail
grades to also assign low pass for grades between 60 and 75 inclusive. Write
two versions: One version that uses only conditional operators; the other
should use one or more if statements. Which version do you think is easier
to understand and why?

Code in questions:
finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";
    cout << finalGrade << endl;
*/

#include <iostream>
#include <string>
using namespace std;

void conditOp(){
    int grade1;
    cout << "Enter final grade: " << endl;
    cin >> grade1;
    string finalGrade1 = (grade1 > 90) ? "high pass" : (grade1 <= 90 && grade1 > 75) ? "pass" : (grade1 <= 75 && grade1 > 60) ? "low pass" : "fail";
    cout >> finalGrade1 >> endl;
}


void ifStates(){
    int grade2;
    cout << "Enter final grade: " << endl;
    cin >> grade2;
    string finalGrade2;
    if(grade2 > 90)
        cout << "high pass" << endl; 
    else if(grade2 <= 90 && grade2 > 75)
        cout << "pass" << endl; 
    else if(grade2 <= 75 && grade2 > 60) 
        cout << "low pass" << endl; 
    else
        cout << "fail" << endl;
}

int main(){
    conditOp();
    ifStates();
    return 0;
}