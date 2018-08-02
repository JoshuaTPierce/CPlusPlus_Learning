//starlineOverload.CPP
//Demonstrates Function Overloading

#include <iostream>
using namespace std;

void repchar();         //declarations
void repchar(char);
void repchar(char, int);

int main(){
    repchar();
    repchar('=');
    repchar('+', 30);
    return 0;
}

//THREE FUNCTION VARIATIONS EXECUTE DIFFERENTLY BASED ON WHICH
//PARAMETERS ARE PASSED TO REPCHAR() AT RUNTIME

void repchar(){
    for(int j = 0; j < 45; j++)
        cout << '*'; //always print asterisk 45 times
        cout << endl
}

void repchar(char ch){
    for(int j = 0; j < 45; j++)
        cout << ch;
        cout << endl;
}

void repchar(char ch, int n){
    for(int j = 0; j < n; j++)
        cout << ch;
        cout << endl;
}