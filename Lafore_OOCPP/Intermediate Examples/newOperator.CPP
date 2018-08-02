//newOperator.CPP
//Demonstrates the "New" operator for dynamic memory management with pointers.
//The versatile new operator obtains memory from the OS and return a pointer
// to its starting point:

#include <iostream>
#include <cstring> //for strlen()
using namespace std;

int main(){
    char* str = "Idle hands are the devil's workshop."; //define c string as array of pointers
    int len = strlen(str); //use <cstring> strlen() fn to get length of str

    char* ptr; //make a pointer to char
    ptr = new char[len+1]; //set aside memory: string + '\0'

    strcpy(ptr, str); //copy str to new memory area ptr

    cout << "ptr= " << ptr << endl; //show that ptr is now in str

    delete[] ptr; //release ptr's memory
    return 0;
}

//The expression
ptr = new char[len+1];
//returns a pointer to a section of memory just large enough to hold the string str, whose length
//len we found with the strlen() library function, plus an extra byte for the null character ‘\0’
//at the end of the string.

//In NEWINTRO the statement
delete[] ptr;
//returns to the system whatever memory was pointed to by ptr.