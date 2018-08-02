//Read a set of integers into a vector.
#include <iostream>
#include <vector>
using namespace std;

void ver1(){
    vector<int> intvec; //empty integer vector
    int input;
    while(cin >> input){
        intvec.push_back(input); }
    
//Print the sum of each pair of adjacent elements.
    for(decltype(intvec.size()) i = 0; i < intvec.size() - 1; ++i)
        cout << intvec[i] + intvec[i + 1] << " ";
}
//Change your program so that it prints the sum of
// the first and last elements, followed by the sum of the second and second-tolast,
// and so on.

void ver2(){
    //If the vector has odd size, element in the middle will add to itself
    vector<int> v2;
    int input2;
    while(cin >> input2){
        v2.push_back(input2); }
    auto mid = (v2.size() + 1) / 2;
    for(decltype(mid) j = 0; j != mid; j++)
        cout << v2[j] + v2[v2.size() - 1 - j] << " ";
    cout << endl;
}

int main(){
    //ver1();
    ver2();
    return 0;
}