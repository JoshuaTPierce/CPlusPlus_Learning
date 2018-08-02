//BasicCStringCPP
//Demonstrates Basic C-Strings 

#include <iostream>
using namespace std;

int main(){
    const int MAX = 80;  //max characters in a string
    char str[MAX]; //string variable str
    cout << "Enter a string: ";
    cin >> str;

    cout << "You entered: " << str << endl;
    return 0;
}

//StringIn.CPP
//Prevents Buffer Overflow (by automatically including a terminating
//byte for the C-Strings)

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const int MAX = 20;
    char str[MAX];
    
    cout << "\nEnter a string: ";
    cin >> setw(MAX) >> str;

    cout << "You entered: " << str << endl;
    return 0;   
}

//This program uses the setw manipulator to specify the maximum number of characters the
//input buffer can accept. The user may type more characters, but the >> operator won’t insert
//them into the array. Actually, one character fewer than the number specified is inserted, so
//there is room in the buffer for the terminating null character.