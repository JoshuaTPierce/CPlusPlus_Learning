//Exercise 3.43: Write three different versions of a program to print the
//elements of ia. One version should use a range for to manage the
//iteration, the other two should use an ordinary for loop in one case using
//subscripts and in the other using pointers. In all three programs write all the
//types directly. That is, do not use a type alias, auto, or decltype to
//simplify the code.

#include <iostream>
using namespace std;


void ex1(){ //RANGE FOR
    int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for(auto &row : ia) //for every element in the outer array
        for(auto &col : row){ //for every element in the inner array
            cout << col << ' ';}
    cout << endl;
}


void ex2(){ //ORDINARY FOR LOOP USING SUBSCRIPT
    int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for(size_t i = 0; i != 3; i++)
        for(size_t j = 0; j != 4; j++)
            cout << ia[i][j] << ' ';
        cout << endl;
}


void ex3(){ //ORDINARY FOR LOOP USING POINTERS
    constexpr size_t c_row = 3;
    constexpr size_t c_col = 4;
    int ia[c_row][c_col] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for (int (*pr)[c_col] = ia; pr != ia + c_row; ++pr) {
        for (int *pc = *pr; pc != *pr + c_col; ++pc)
            cout << *pc << '\t';
        cout << std::endl;
    }
}

int main(){
    ex1();
    ex2();
    ex3();
    return 0;
}