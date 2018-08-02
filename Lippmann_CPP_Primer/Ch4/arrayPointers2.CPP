#include <iostream>
#include <string>
using namespace std;

void ex1(){
    constexpr size_t sz = 5;
    int arr[sz] = {1,2,3,4,5};
    int *ip = arr; // equivalent to int *ip = &arr[0]
    int *ip2 = ip + 4; // ip2 points to arr[4], the last element in arr
    
    auto n = end(arr) - begin(arr); // n is 5, the number of elements in arr

//The result of subtracting two pointers is a library type named ptrdiff_t. Like size_t,
//the ptrdiff_t type is a machine-specific type and is defined in the cstddef
//header. Because subtraction might yield a negative distance, ptrdiff_t is a signed
//integral type.

//We can use the relational operators to compare pointers that point to elements of
//an array, or one past the last element in that array. For example, we can traverse the
//elements in arr as follows:

    int *b = arr, *e = arr + sz;
    while (b < e) {
    // use *b
    ++b; }
}

void ex2(){
    int ia[] = {0,2,4,6,8}; // array with 5 elements of type int
    int last = *(ia + 4); // ok: initializes last to 8, the value of ia[4]
//The expression *(ia + 4) calculates the address four elements past ia and
//dereferences the resulting pointer. This expression is equivalent to writing ia[4].
}

void ex3(){
    int ia[] = {0,2,4,6,8}; // array with 5 elements of type int
    int i = ia[2]; // ia is converted to a pointer to the first element in ia
                   // ia[2] fetches the element to which (ia + 2) points
    int *p = ia; // p points to the first element in ia
    i = *(p + 2); // equivalent to i = ia[2]
    int *p = &ia[2]; // p points to the element indexed by 2
    int j = p[1]; // p[1] is equivalent to *(p + 1),
                  // p[1] is the same element as ia[3]
    int k = p[-2]; // p[-2] is the same element as ia[0]
}

int main(){
    ex1();
    ex2();
    ex3();
    return 0;
}