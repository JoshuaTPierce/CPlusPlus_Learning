//StringAccess.CPP
//Demonstrates Accessing String Object Members

#include <iostream>
#include <string>
using namespace std;

int main() {
    char charray[80];
    string word;

    cout << "Enter a word: ";
    cin >> word;
    int wlen = word.length();

    cout << "One character at at time: ";
    for(int j = 0; j < wlen; j++){
        cout << word.at(j);
        cout << word[j];
    
    word.copy(charray, wlen, 0); //copy string object to array
    charray[wlen] = 0;
    cout << "\nArray contains: " << charray << endl;

    return 0;
    }
}