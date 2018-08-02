//Define a function that returns multiple values by passing arguments by reference.

#include <string>
#include <iostream>
using namespace std;

// returns the index of the first occurrence of c in s
// the reference parameter occurs counts how often c occurs
string::size_type find_char(const string &s, char c, string::size_type &occurs){
    auto ret = s.size(); //position of the first occurence, if any
    occurs = 0; //set the occurence count parameter
    for(decltype(ret) i = 0; i != s.size(); i++){
        if(s[i] == c){
            if(ret == s.size())
                ret = i; //remember the first occurrence of c
            ++occurs; //increment occurrence count
        }
    }
    return ret;
}

int main(){
    string input;
    cin >> input;
    find_char(input);
    return 0;
}
/*
When we call find_char, we have to pass three arguments: a string in which to
look, the character to look for, and a size_type (§ 3.2.2, p. 88) object to hold the
occurrence count. Assuming s is a string, and ctr is a size_type object, we can
call find_char as follows:
auto index = find_char(s, 'o', ctr);
After the call, the value of ctr will be the number of times o occurs, and index will
refer to the first occurrence if there is one. Otherwise, index will be equal to
s.size() and ctr will be zero.
*/