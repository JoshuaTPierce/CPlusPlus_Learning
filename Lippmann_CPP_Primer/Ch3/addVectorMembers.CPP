//Demonstrates Methods of Populating Large Vectors

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//utilizing the push_back member function of class vector:
void pushBack(){
    vector<int> v1; //empty int vector
    for(int i = 0; i <= 100; i++)
        v1.push_back(i); //append sequential integers to v2

//The push_back operation takes a value and “pushes” that value as a new last
// element onto the “back” of the vector. For example:
}

//using push_back for unknown number of vector members to be populated
void pushBackWord(){
    string word;
    vector<string> v2; //empty string vector
    while(cin >> word){
        v2.push_back(word); }
}

int main(){
    //pushBack();
    pushBackWord();

    return 0;
}