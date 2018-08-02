//Read a sequence from words from cin and store the values
// in a vector. Process the vector and change each word to uppercase. 
//Print the transformed elements, eight to a line

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<string> v1; 
    string input;
    while(cin >> input){
        v1.push_back(input); }
    for(auto &elem : v1)
        for(auto &c : elem) 
            c = toupper(c);
    for(decltype(v1.size()) i = 0; i != v1.size(); i++){
        cout << v1[i] << '\t';
        if((i + 1) % 8 == 0)
            cout << endl; }
    return 0;
}
        
    