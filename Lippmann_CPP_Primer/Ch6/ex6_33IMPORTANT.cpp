//Exercise 6.33: Write a recursive function to print the contents of a vector.

#include <vector>
#include <iostream>
using namespace std; 

void printVecInt(const vector<int>::iterator bg, const vector<int>::iterator ed){
    if(bg == end)
        return;
    cout << *bg << " ";
    printVecInt(bg + 1, ed);
}

int main(){
    vector<int> vi;
    int i;
    while cin(cin >> i);
    vi.push_back(i);

    printVecInt(vi.begin(), vi.end());

    return 0;
}