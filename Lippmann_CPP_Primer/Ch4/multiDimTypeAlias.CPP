//A type alias (§ 2.5.1, p. 67) can make it easier to read, write, and understand pointers
//to multidimensional arrays. For example:

#include <iostream>
using namespace std;

int main(){
    using int_array = int[4]; // new style type alias declaration
    typedef int int_array[4]; // equivalent typedef declaration
    //print the value of each element in ia, with each inner array on its own line
    for (int_array *p = ia; p != ia + 3; ++p) {
        for (int *q = *p; q != *p + 4; ++q)
            cout << *q << ' ';
        cout << endl;

    return 0;
}

//Here we start by defining int_array as a name for the type “array of four ints.”
//We use that type name to define our loop control variable in the outer for loop.