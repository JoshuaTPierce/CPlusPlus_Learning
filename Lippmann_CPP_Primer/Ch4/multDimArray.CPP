#include <iostream>
#include <vector>
using namespace std;

//We define an array whose elements are arrays by providing two dimensions: the
//dimension of the array itself and the dimension of its elements:

void ex1(){
    int ia[3][4]; // array of size 3; each element is an array of ints of size 4

    //array of size 10; each element is a 20-element array whose elements are arrays of 30 ints
    int arr[10][20][30] = {0}; // initialize all elements to 0

}
//Initializing the Elements of a Multidimensional Array
// As with any array, we can initialize the elements of a multidimensional array by
// providing a bracketed list of initializers. Multidimensional arrays may be initialized by
// specifying bracketed values for each row:

void ex2(){
    int x[3][4] = { // three elements; each element is an array of size 4
        {0, 1, 2, 3}, // initializers for the row indexed by 0
        {4, 5, 6, 7}, // initializers for the row indexed by 1
        {8, 9, 10, 11} // initializers for the row indexed by 2
};
//The nested braces are optional. The following initialization is equivalent, although
//considerably less clear:

    int y[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
}

void ex3(){
    //Using nested for loops to process the members of a multidimensional array
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt]; //12 uninitialized elements
    //for each row
    for(size_t i = 0; i != rowCnt; i++){
        //for each column within the row
        for(size_t j = 0; j != colCnt; j++ ){
            //assign the elements positional index as it's value
            ia[i][j] = i * colCnt + j; 
        }
    }
}
//The outer for loops through each of the array elements in ia. The inner for loops
//through the elements of those interior arrays. In this case, we set the value of each
//element as its index in the overall array.

void ex4(){
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt]; //12 uninitialized elements
    size_t cnt = 0; 
    for(auto &row : ia) //for every element in the outer array
        for(auto &col : row){ //for every element in the inner array
            col = cnt; //give this element the next value
            cnt ++;
        }
}

int main(){
    ex1();
    ex2();
    ex3();
    ex4();
    return 0;
}