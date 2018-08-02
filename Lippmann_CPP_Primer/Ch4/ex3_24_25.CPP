#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Exercise 3.24
//Re-Do the Last Exercise from 3.3.3 with iterators.
//Write a program to print the size and contents of int, string vectors.

void print1(){
    //data definitions
    vector<int> v1;
    int input1;
    
    //create vector and print size
    cout << "Enter integers: " << endl;
    while(cin >> input1){
        v1.push_back(input1); }
    cout << "Length: " << v1.size() << endl;

    //print using iterators
    for(auto it = v1.begin(); it < v1.end(); it++)
        cout << *it << " ";
}

void print2(){
    vector<string> v2;
    string input2;

    //create vector and print size
    cout << "Enter a string of words: " << endl;
    while(cin >> input2){
        v2.push_back(input2); }
    cout << "Length: " << v2.size() << endl;

    //print using iterators
    for(auto it2 = v2.begin(); it2 < v2.end(); it2++)
        cout << *it2 << " "; 
}


//Exercise 3.25
/* Rewrite the Glade Clustering Program from 3.3.3 with Iterators Instead of subscripts: 
count the number of grades by clusters of ten: 0--9, 10--19, . .. 90--99, 100

vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
unsigned grade;
while (cin >> grade) { // read the grades
if (grade <= 100) // handle only valid grades
++scores[grade/10]; // increment the counter for the current cluster }
**********************/

void grades2(){
    vector<unisgned> scores(11, 0); //11 buckets, all initially 0
    unsigned grade; //grades to be input
    while(cin >> grade)
        ++*(scores.begin() + grade / 10);
    for(const auto & elem : scores)
        cout << elem << ' ';
    cout << endl;    
}

int main(){
    //print1(); //WORKS
    //print2(); //WORKS
    grades2();
    return 0;
}

//Exercise 3.26
//In the binary search program on page 112, why did we write
// mid = beg + (end - beg) / 2; instead of mid = (beg + end) /2;?
//First, there is no operator + for two iterators. Second, for arithmetic types, using mid = (beg + end) / 2 may lead to overflow.