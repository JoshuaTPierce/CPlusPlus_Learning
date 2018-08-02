//Write an expression that tests four values, a, b, c, and d,
//and ensures that a is greater than b, which is greater than c, which is
//greater than d.

#include <iostream>
using namespace std;

int main(){
    cout << "Checks 4 values (a, b, c, d). Returns a boolean (T/F) that is true " << endl;
    cout << "if a > b > c > d. Otherwise, returns false." << endl;
    cout << "Enter 4 values in order (a, b, c, d): " << endl;
    float a, b ,c, d;
    cin >> a >> b >> c >> d;
    
    if(a > b && b > c && c > d){
        cout << "True" << endl; }
    else {
        cout << "False" << endl; }

    return 0;
}