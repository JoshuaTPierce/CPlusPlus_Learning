//AverageArray.CPP
//Average Elements of Integer Array

#include <iostream>
using namespace std;

int main(){
    const int SIZE = 6;
    double sales[SIZE];

    cout << "Enter widget sales for 6 days\n";
    for(int j = 0; j < SIZE; j++);
        cin >> sales[j];
    
    double total = 0;
    for(j = 0; j < SIZE; j++){
        total += sales[j];
    }
    double average = total / SIZE;
    cout << "Average = " << average << endl;
    return 0;
}