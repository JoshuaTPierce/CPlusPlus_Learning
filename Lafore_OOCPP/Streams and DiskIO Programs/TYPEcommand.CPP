//Demonstrates TYPE Command, reading the contents of a text file whose name
//is supplied by the user on the CLI

#include <fstream>
#include <iostream>
#include <process.h>
using namepsace std;

int main(int argc, char* argv[]){
    if(argc != 2){
        cerr << "\nFormat: otype filename";
        exit(-1); }

    char ch; //character to read
    ifstream infile; //create file for input
    infile.open(argv[1]); //open file
    if(!infile){
        cerr << "\nCan't open file " << argv[1];
        exit(-1); }

    while(infile.get(ch) != 0)
        cout << ch;
    
    return 0;
}

//This program first checks to see whether the user has entered the correct number of commandline
//arguments. Remember that the pathname of OTYPE.EXE itself is always the first commandline
//argument. The second argument is the name of the file to be displayed, which the user
//should have entered when invoking the program:
C>otype ichar.cpp
//Thus the total number of command-line arguments should equal 2. If it doesn’t, the user probably
//doesn’t understand how to use the program, and the program sends an error message via
//cerr to clarify matters.

//If the number of arguments is correct, the program tries to open the file whose name is the second
//command-line argument (argv[1]). Again, if the file can’t be opened, the program signals
//an error. Finally, in a while loop, the program reads the file character by character and writes it
//to the screen.

//A value of 0 for the character signals an EOF. This is another way to check for EOF. You can
//also use the value of the file object itself, as we’ve done before:
while( infile )
{
infile.get(ch);
cout << ch;
}
//You could also replace this entire while loop with the statement
cout << infile.rdbuf();
