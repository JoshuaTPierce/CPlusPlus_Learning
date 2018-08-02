//SimplePointerVar.CPP
//Demonstrates a Simple Pointer Variable (Pointer)

#include <iostream>
using namespace std;

int main(){
    int var1 = 11;
    int var2 = 12;

    cout << &var1 << endl
         << &var2 << endl << endl;

    int* ptr; //pointer variable to point to integers, denoted by asterisk*

    ptr = &var1; //set pointer to address of var1
    cout << ptr << endl; //print pointer value

    ptr = &var2; //set pointer to address of var2
    cout << ptr << endl; //print pointer value
    return 0;
}

//The asterisk means pointer to. Thus the statement
//defines the variable ptr as a pointer to int. This is another way of saying that this variable
//can hold the addresses of integer variables.

//The problem is that the compiler needs to know what kind of variable the pointer points to.
//char* cptr; // pointer to char
//int* iptr; // pointer to int
//float* fptr; // pointer to float
//Distance* distptr; // pointer to user-defined Distance class
    //and so on.

//If you define more than one pointer of the same type on one line, you need only insert the
//type-pointed-to once, but you need to place an asterisk before each variable name.
//char* ptr1, * ptr2, * ptr3; // three variables of type char*
//Or you can use the asterisk-next-to-the-name approach.
//char *ptr1, *ptr2, *ptr3; // three variables of type char*

//To summarize: A pointer can hold the address of any variable of the correct type; it’s a receptacle
//awaiting an address. However, it must be given some value, or it will point to an address
//we don’t want it to point to, such as into our program code or the operating system. Rogue
//pointer values can result in system crashes and are difficult to debug, since the compiler gives
//no warning. The moral: Make sure you give every pointer variable a valid address value before
//using it.

//Accessing the Variable Pointed To
//Suppose that we don’t know the name of a variable but we do know its address. Can we access
//the contents of the variable? (It may seem like mismanagement to lose track of variable names,
//but we’ll soon see that there are many variables whose names we don’t know.)
//There is a special syntax to access the value of a variable using its address instead of its name.
//Here’s an example program, PTRACC, that shows how it’s done:

// ptracc.cpp
// accessing the variable pointed to
#include <iostream>
using namespace std;

int main() {
    int var1 = 11; //two integer variables
    int var2 = 22;
    
    int* ptr; //pointer to integers

    ptr = &var1; //pointer points to var1
    cout << *ptr << endl; //print contents of pointer (11)
    ptr = &var2; //pointer points to var2
    cout << *ptr << endl; //print contents of pointer (22)

    return 0;
}
// ptrto.cpp
// other access using pointers
#include <iostream>
using namespace std;
int main() {
    int var1, var2; //two integer variables
    int* ptr; //pointer to integers
    ptr = &var1; //set pointer to address of var1
    *ptr = 37; //same as var1=37
    var2 = *ptr; //same as var2=var1
    cout << var2 << endl; //verify var2 is 37

    return 0;
}

//Remember that the asterisk used as the dereference operator has a different meaning than the
//asterisk used to declare pointer variables. The dereference operator precedes the variable and
//means value of the variable pointed to by. The asterisk used in a declaration means pointer to.

int* ptr; //declaration: pointer to int
*ptr = 37; //indirection: value of variable pointed to by ptr

//Using the dereference operator to access the value stored in an address is called indirect
//addressing, or sometimes dereferencing, the pointer.

//Here’s a capsule summary of what we’ve learned so far:
int v; //defines variable v of type int
int* p; //defines p as a pointer to int
p = &v; //assigns address of variable v to pointer p
v = 3; //assigns 3 to v
*p = 3; //also assigns 3 to v