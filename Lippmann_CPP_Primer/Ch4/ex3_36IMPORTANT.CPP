//Exercise 3.36: Write a program to compare two arrays for equality. Write a
//similar program to compare two vectors.

#include <iostream>
#include <vector>
#include <string>
#include <array>
using namespace std;

//MY ORIGINAL VERSION: TECHNICALLY WORKS BUT ENDS UP
//MAKING 25 COMPARSIONS: a1[1] == a1[1], a2[2], etc.
void arrayComp(){
    int a1[] = {1,2,3,4,5};
    int a2[] = {1,2,3,4,6};
    int *p1 = end(a1);
    int *p2 = end(a2);
    int count;
    for(int *p3 = a1; p3 != p1; p3++){
        for(int *p4 = a2; p4 != p2; p4++){
            if(*p3 == *p4){
                cout << "Members are equal." << endl; }
            else{
                cout << "Inequality found" << endl;  }
        }
    }
}

//FASTER VERSION
void arrayComp2(){
    int a1[] = {1,2,3,4,5};
    int a2[] = {1,2,3,4,6};

    int i = 0;
    for(; i !=5; i++)
        if(a1[i] != a2[i]){
            cout << "Arrays are not equal." << endl;
            break; }
         
        if(i == 5)
            cout << "Arrays are equal.";
}

void vectorComp(){ 
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2 = {1,2,3,4,6};
    if(v1 == v2)
        cout << "Vectors are equal" << endl;
    else 
        cout << "Vectors are not equal" << endl;
}

int main(){
    //arrayComp();
    arrayComp2();
    //vectorComp();
}