//Exercise 3.44: Rewrite the program from the previous exercises using a type alias for the type of the loop control variables.
#include <iostream>
using namespace std;

int main(){
    constexpr size_t c_row = 3;
    constexpr size_t c_col = 4;
    int ia[c_row][c_col] = {1,2,3,4,5,6,7,8,9,10,11,12};
    typedef int int_array[4]; // equivalent typedef declaration
    //print the value of each element in ia, with each inner array on its own line
    for (int_array *p = ia; p != ia + 3; ++p) {
        for (int *q = *p; q != *p + 4; ++q)
            cout << *q << ' ';
        cout << endl;
    }

    return 0;

}

//A type alias is a name that is a synonym for another type. Type aliases let us
//simplify complicated type definitions, making those types easier to use. Type aliases
//also let us emphasize the purpose for which a type is used.
//typedef char *pstring;
//const pstring cstr = 0; // cstr is a constant pointer to char
//const pstring *ps; // ps is a pointer to a constant pointer to char
//The base type in these declarations is const pstring. As usual, a const that
//appears in the base type modifies the given type. The type of pstring is “pointer to
//char.” So, const pstring is a constant pointer to char—not a pointer to const
//char.