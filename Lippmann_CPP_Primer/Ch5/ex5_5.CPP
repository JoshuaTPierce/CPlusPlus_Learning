
//Exercise 5.6: Rewrite your grading program to use the conditional operator
//in place of the if–else statement.

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

//Exercise 5.5: Using an if–else statement, write your own version of the
//program to generate the letter grade from a numeric grade.
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