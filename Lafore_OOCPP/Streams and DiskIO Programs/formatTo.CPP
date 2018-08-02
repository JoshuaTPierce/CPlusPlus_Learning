//formatTo.CPP
//Demonstrates writing formatted output to a fule using <<

#include <fstream> //for file I/O
#include <iostream>
#include <string>
using namespace std;

int main(){
    char ch ='x';
    int j = 77;
    double d = 6.02;
    string str1 = "Kafka";
    string str2 = "Proust";

    ofstream outfile ("fdata.txt"); //create ofstream (outfile stream) object

    outfile << ch   //insert (write) data
            << j 
            << ' '  //need space between numbers
            << str1 
            << ' ' //need space between strings
            << str2;
        
    cout << "File written\n";

    return 0;
}

//Here we define an object called outfile to be a member of the ofstream class. At the same
//time, we initialize it to the file FDATA.TXT. This initialization sets aside various resources for the
//file, and accesses or opens the file of that name on the disk. If the file doesn’t exist, it is created.
//If it does exist, it is truncated and the new data replaces the old. The outfile object acts
//much as cout did in previous programs, so we can use the insertion operator (<<) to output
//variables of any basic type to the file. This works because the insertion operator is appropriately
//overloaded in ostream, from which ofstream is derived.
//When the program terminates, the outfile object goes out of scope. This calls its destructor,
//which closes the file, so we don’t need to close the file explicitly.