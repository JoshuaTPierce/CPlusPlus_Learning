//Starline3Arguments.CPP
//Demonstrates Passing arguments to a function

#include <iostream>
using namespace std;

void repchar(char, int);  //function prototype now includes arguments

int main(){
    repchar('-', 26);
    cout << " Data type   Range" << endl;

    repchar('#', 45);
    cout << "char       -129 to 127" << endl
         << "short      -32768 to 32767" << endl
         << "int         System-Dependent" << endl;

    repchar('*', 31);
    return 0;
}

void repchar(char ch, int n){
    for(int j = 0; j < n; j++)
        cout << ch;
    cout << endl;
}

//-----------------------
/*
The calling program supplies arguments, such as ‘–’ and 43, to the function. The variables
used within the function to hold the argument values are called parameters; in repchar() they
are ch and n.

The declarator in the function definition specifies both the data types and the names of the parameters:
void repchar(char ch, int n) //declarator specifies parameter
//names and data types
These parameter names, ch and n, are used in the function as if they were normal variables.
Placing them in the declarator is equivalent to defining them with statements like
char ch;
int n;
When the function is called, its parameters are automatically initialized to the values passed by
the calling program.