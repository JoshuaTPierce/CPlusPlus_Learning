/*
If we pass an array to print, that argument is automatically converted to a pointer
to the first element in the array; the size of the array is irrelevant.

Warning
As with any code that uses arrays, functions that take array parameters must
ensure that all uses of the array stay within the array bounds.

Because arrays are passed as pointers, functions ordinarily don’t know the size of
the array they are given. They must rely on additional information provided by the
caller. There are three common techniques used to manage pointer parameters. 
*/

/* 
Using a Marker to Specify the Extent of an Array
The first approach to managing array arguments requires the array itself to contain an
end marker. C-style character strings (§ 3.5.4, p. 122) are an example of this
approach. C-style strings are stored in character arrays in which the last character of
the string is followed by a null character. Functions that deal with C-style strings stop
processing the array when they see a null character:
*/
#include <iostream>
using namespace std;

void print(const char *cp){
    if(cp) //if cp is not a null pointer
        while(*cp) //so long as the char it points to is not a null char
            cout << *cp++; //dereference the pointer, print it, increment the pointer

//This convention works well for data where there is an obvious end-marker value (like
//the null character) that does not appear in ordinary data. It works less well with data,
//such as ints, where every value in the range is a legitimate value.       
}

/* 
Using the Standard Library Conventions
A second technique used to manage array arguments is to pass pointers to the first
and one past the last element in the array. This approach is inspired by techniques
used in the standard library.Using this approach, we’ll print the elements in an array as follows:
*/

void print(const int *beg, const int *end){
    //print every element starting at beg up to but not including end
    while(beg != end)
        cout << *beg++ << endl; //print element and advance pointer
}
//The while uses the dereference and postfix increment operators to
//print the current element and advance beg one element at a time through the array.
//The loop stops when beg is equal to end.

//To call this function, we pass two pointers—one to the first element we want to
//print and one just past the last element:

int main(){
    int j[2] = {0, 10}; //j is an array of 2 elements, j is converted to a pointer to the first element in j
        //the second argument is a pointer to one past the end of j
    print(begin(j), end(j));
    return 0;
//This function is safe, as long as the caller correctly calculates the pointers. Here we let
//the library begin and end functions provide those pointers.
}

/*
Explicitly Passing a Size Parameter
A third approach for array arguments, which is common in C programs and older C++
programs, is to define a second parameter that indicates the size of the array. Using
this approach, we’ll rewrite print as follows:
*/

void print(const int ia[], size_t size){
    for(size_t i = 0; i != size; ++i){
        cout << ia[i] << endl;
    }
}

//This version uses the size parameter to determine how many elements there are to
//print. When we call print, we must pass this additional parameter:

int main(){
    int j[] = {0, 1}; //int array of size 2
    print(k, end(j) - begin(j));
}