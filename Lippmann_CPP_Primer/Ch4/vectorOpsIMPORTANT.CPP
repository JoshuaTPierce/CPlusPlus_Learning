//In addition to push_back, vector provides only a few other operations, most of
// which are similar to the corresponding operations on strings.
//////////////////////////////////////////////////////////////////////////////////////////////
// v.empty() returns true if v is empty, otherwise returns false
// v.size() returns the number of elements in v
// v.push_back(t) adds t as the last element of v
// v[n] returns a reference to the element at position n in v
// v1 = v2 replaces the elements in v1 with a copy of the elements in v2
// v1 = {a,b,c} replaces the elements in v1 with a copy of the elements in the comma-separated list
// v1 == v2 v1 and v2 are equal iff they have the same number of elements and each element in v1 is equal to the corresponding element in v2
// v1 != v2 negation of v1 == v2
// <, <=, >, >= have normal meanings using dictionary ordering.
////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <vector>

//We access the elements of a vector the same way that we access the characters
// in a string: through their position in the vector. For example, we can use a range
// for to process all the elements in a vector:

void vectorAccess(){
    vector<int> v{1,2,3,4,5,6,7,8,9};
        for(auto &i : v) //for each element in v (NOTE: I IS A REFERENCE)
            i *= i; //square each element
        for(auto i : v) //for each element in v
            cout << i << " ";
        cout << endl;
}

//In the first loop, we define our control variable, i, as a reference so that we can use
// i to assign new values to the elements in v. We let auto deduce the type of i. This
// loop uses a new form of the compound assignment operator

void gradesCounter(){ //counts the number of grades by clusters of ten: 0-9, 10-19, ... , 90-99, 100
    vector<unsigned> scores(11, 0); //11 buckets, all initially 0
    unsigned grade; 
    while(cin >> grade){ //read grades
        if(grade <= 100) //handle only valid grades
            ++scores[grade/10]; //increment the counter for the current cluster
    }
}

//We start by defining a vector to hold the cluster counts. In this case, we do want
// each element to have the same value, so we allocate all 11 elements, each of which is
// initialized to 0. The while condition reads the grades. Inside the loop, we check that
// the grade we read has a valid value (i.e., that it is less than or equal to 100).
//Assuming the grade is valid, we increment the appropriate counter for grade

//Warning
// The subscript operator on vector (and string) fetches an existing
// element; it does not add an element.

int main(){
    //vectorAccess();
    gradesCounter();
    return 0;
}