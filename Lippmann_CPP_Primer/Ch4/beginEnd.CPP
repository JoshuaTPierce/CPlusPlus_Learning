//Although we can compute an off-the-end pointer, doing so is error-prone. To make it
//easier and safer to use pointers, the new library includes two functions, named begin
//and end. These functions act like the similarly named container members. However, arrays are not class types, 
//so these functions are not member functions. Instead, they take an argument that is an array:

#include <iostream>
#include <string>
using namespace std;

void ex1(){
    int ia[] = {0,1,2,3,4,5,6,7,8,9}; // ia is an array of ten ints
    int *beg = begin(ia); // pointer to the first element in ia
    int *last = end(ia); // pointer one past the last element in ia
}
//begin returns a pointer to the first, and end returns a pointer one past the last
//element in the given array: These functions are defined in the iterator header.

//Using begin and end, it is easy to write a loop to process the elements in an
//array. For example, assuming arr is an array that holds int values, we might find the
//first negative value in arr as follows:

void ex2(){
    int arr[] = {-4,-3,-2,-1,0,1,2,3,4,5};
    // pbeg points to the first and pend points just past the last element in arr
    int *pbeg = begin(arr), *pend = end(arr);
    // find the first negative element, stopping if we've seen all the elements
    while (pbeg != pend && *pbeg >= 0)
    ++pbeg;
}
//We start by defining two int pointers named pbeg and pend. We position pbeg to
//denote the first element and pend to point one past the last element in arr. The
//while condition uses pend to know whether it is safe to dereference pbeg. If pbeg
//does point at an element, we dereference and check whether the underlying element
//is negative. If so, the condition fails and we exit the loop. If not, we increment the
//pointer to look at the next element

/////////////////// Pointer-Array Arithmetic /////////////
void ex3(){
    constexpr size_t sz = 5;
    int arr[sz] = {1,2,3,4,5};
    int *ip = arr; // equivalent to int *ip = &arr[0]
    int *ip2 = ip + 4; // ip2 points to arr[4], the last element in arr
    // ok: arr is converted to a pointer to its first element; p points one past the end of arr
    int *p = arr + sz; // use caution -- do not dereference!
    int *p2 = arr + 10; // error: arr has only 5 elements; p2 has undefined value
}


int main(){
    ex1();
    ex2();
    ex3();
    return 0;
}