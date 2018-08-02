//BubbleSortPointers.CPP
//Demonstrates the Bubble Sort Algorithm Using Pointers

#include <iostream>
using namespace std;

int main(){
    void bsort(int* int); //prototype
    const int N = 10; //array size

    int arr[N] = {37,84,62,91,11,65,57,28,19,49} //test array

    bsort(arr, N); //sort the array

    for int(j = 0; j < N; j++) //print sorted array
        cout << arr[j] << " ";
        cout << endl;
    return 0;
}

void bsort(int* ptr, int n) {
    void order(int*, int*); //prototype
    int j, k; //indexes to array

    for(j = 0; j < n-1; j++) //outerloop
        for(k = j+1; k < n; k++) //inner loop starts at outer
            order(ptr+j, ptr+k); //order the pointer contents
}

void order(int* numb1, int* numb2) { //orders two numbers
    if(*numb1 > *numb2) //if 1st larger than 2nd,
        {
        int temp = *numb1; //swap them
        *numb1 = *numb2;
        *numb2 = temp;
    }
}