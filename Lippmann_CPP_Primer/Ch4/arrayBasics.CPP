//Arrays are a compound type. An array declarator has the form a[d],
// where a is the name being defined and d is the dimension of the array. The
// dimension specifies the number of elements and must be greater than zero. The
// number of elements in an array is part of the array’s type. As a result, the dimension
// must be known at compile time, which means that the dimension must be a constant expression.

#include <string>
#include <iostream>
using namespace std;

void constArr(){
    //demonstrates the use of constant expressions in array initialization
    unsigned cnt = 42;
    constexpr unsigned sz = 42;

    int arr[10]; //array of 10 ints
    int *parr[sz]; //array of 42 pointers to unt
    string bad[cnt]; //ERROR: CNT IS NOT A CONSTANT EXPRESSION
    string strs[get_size()]; //ok if get_size is constexpr, error otherwise
}

void arrayInit(){ //WAYS OF INITIALIZING AN ARRAY
    const unsigned sz = 3;
    int ia1[sz] = {0,1,2}; //an array of three ints with values 0,1,2
    int a2[] = {0,1,2}; //an array of dimension 3
    int a3[5] = {0,1,2}; //equivalent to a3[] = {0,1,2,0,0}
    string a4[3] = {"hi", "bye"}; //equivalent to a4[] = {"hi", "bye", ""}
    int a5[2] = {0,1,2}; //ERROR: TOO MANY INITIALIZERS
}

void charrayInit(){
    char a1[] = {'C', '+', '+'}; // list initialization, no null
    char a2[] = {'C', '+', '+', '\0'}; // list initialization, explicit null
    char a3[] = "C++"; // null terminator added automatically
    const char a4[6] = "Daniel"; // error: no space for the null!   
}
//Character arrays have an additional form of initialization: We can initialize such arrays
// from a string literal (§ 2.1.3, p. 39). When we use this form of initialization, it is
// important to remember that string literals end with a null character. That null
// character is copied into the array along with the characters in the literal.

void complexInits(){
    int *ptrs[10]; // ptrs is an array of ten pointers to int
    int &refs[10] = /* ? */; // error: no arrays of references
    int (*Parray)[10] = &arr; // Parray points to an array of ten ints
    int (&arrRef)[10] = arr; // arrRef refers to an array of ten ints
}

int main(){
    constArr();
    arrayInit();
    charrayInit();
    complexInits();
    return 0;
}