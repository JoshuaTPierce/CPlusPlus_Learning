//The conditional operator (the ?: operator) lets us embed simple if-else logic inside an
//expression. The conditional operator has the following form:
// cond ? expr1 : expr2;
//where cond is an expression that is used as a condition and expr1 and expr2 are
//expressions of the same type (or types that can be converted to a common type).
//This operator executes by evaluating cond. If the condition is true, then expr1 is
//evaluated; otherwise, expr2 is evaluated. 
#include <iostream>
#include <string>
using namespace std;

int main(){
    int grade;
    cout << "Enter Grade: " << endl;
    cin >> grade;
    //string finalGrade = (grade < 60) ? "fail" : "pass";
    //NESTED VERSION:
    finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";
    cout << finalGrade << endl;

    return 0;
}

//The conditional operator is right associative, meaning (as usual) that the operands
//group right to left. Associativity accounts for the fact that the right-hand conditional—
//the one that compares grade to 60—forms the : branch of the left-hand conditional
//expression.