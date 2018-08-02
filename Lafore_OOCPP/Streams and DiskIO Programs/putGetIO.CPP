//PutGetIO.CPP
//Demonstrates the Put and Get IO Functions

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string str = "Time is a great teacher, but unfortunately, it kills all its pupils. Berlioz";
    ofstream outfile("TEST.TXT") //create file for output
    for(int j = 0; j < str.size(); j++) //for each character
        outfile.put(str[j]);  //write it to file

    cout << "File written\n";
    return 0;
}

///////////////////////
//Version 2: Get
///////////////////////
#include <fstream> //for file functions
#include <iostream>
using namespace std;

int main() {
    char ch; //character to read
    ifstream infile(“TEST.TXT”); //create file for input
    while( infile ) //read until EOF or error
        {
        infile.get(ch); //read character
        cout << ch; //display it
            }
    cout << endl;
    return 0;
}