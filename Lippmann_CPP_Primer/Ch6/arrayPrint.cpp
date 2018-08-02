#include <iostream>
using namespace std;

void print(const int ia[10]){
    for(size_t i = 0; i != 10; ++i)
        cout << ia[i] << endl;
}

//--------------COMMAND LINE ENTRY-----------------------------
prog -d -o ofile data0

//Such command line options are passed to main in two (optional parameters):
int main(int argc, char *argv[]){ ... }

//The second parameter, argv, is an array of pointers to C-style character strings. The
// first parameter, argc, passes the number of strings in that array. Because the second
// parameter is an array, we might alternatively define main as

int main(int argc, char **argv) { ... }

//indicating that argv points to a char*.

//When arguments are passed to main, the first element in argv points either to the
//name of the program or to the empty string. Subsequent elements pass the
//arguments provided on the command line. The element just past the last pointer is
//guaranteed to be 0.

//Given the previous command line, argc would be 5, and argv would hold the
// following C-style character strings:

argv[0] = "prog"; // or argv[0] might point to an empty string
argv[1] = "-d";
argv[2] = "-o";
argv[3] = "ofile";
argv[4] = "data0";
argv[5] = 0;

/*
Warning
When you use the arguments in argv, remember that the optional
arguments begin in argv[1]; argv[0] contains the program’s name, not
user input.
*/